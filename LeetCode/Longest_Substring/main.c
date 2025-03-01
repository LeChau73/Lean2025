#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>


//TODO: DEBUG D biet issue

//Kiểm tra xem ký tự c có trong mảng con str không
bool checkSubString(char* str, char c, int* index);

int lengthOfLongestSubstring(char* s) {
    int maxCount = 0, oldMaxCount = 0;
    int indexSub = 0, indexSeach = 0;
    char temp[100];
    char* subStr = malloc(sizeof(char) * 20);
    int index = 0;

    while (s[index] != '\0') {
        if (checkSubString(subStr, s[index], &indexSeach))
        {
            //Nếu mà có thì lưu thằng count_max lại
            //TODO: Ở đây k cần lưu max Count lại,ở đây if thằng nào lớn hơn thì return thằng đó thôi.
            //oldMaxCount = maxCount;
            if (maxCount > oldMaxCount)
            {
                oldMaxCount = maxCount;
            }
            // Sửa lại mảng con tại vị trí tìm thấy và kí tự mới
                //How
                    //Lay tu vi tri da tim thay den het mang hien tai
                    //Taoj 1 mang temp,move no qua,roi xoa het mang cu roi move lai
            memmove(subStr, temp, (indexSub - indexSeach) + 1); // (indexSub - indexSeach) + 1 ~~ + 1 to copy including charactor '\0'
            //clear array subStr
            memset(subStr, '\0', indexSub);
            //move temp -> SubString, in this time , SubString contain a array include subcontain not contain charactor repeat
            strncpy(temp, subStr, sizeof(subStr) - 1);
            //Update the size of the substring again after replacing it.
            indexSub = indexSub - indexSeach;
            //Reset indexSeach again
            //Reset maxCount
            maxCount = indexSub;
        }
        else
        {
            //Không tìm thấy
            subStr[indexSub++] = s[index];
            subStr[indexSub] = '\0';
            ++maxCount;
        }
        indexSeach = 0;
        index++;
    }

    free(subStr);
    return oldMaxCount;


}

bool checkSubString(char* str, char c, int* index) {

    //TODO: Đang lỗi ở đây : Mới add vào chưa có data
    while (str[*index] != '\0')
    {
        if (str[*index] == c)
        {
            return true;
        }
        (*index)++;
    }

    return false;
}



int main()
{
    char* s = "abcawbcbb";
    int result = lengthOfLongestSubstring(s);
    printf("Result: %d\n", result);

    return 0;

}