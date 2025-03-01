#include<iostream>
#include <unordered_map> 
#include <vector>
using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//     unordered_map<int, int> smap;
//     int n = nums.size();

//     for (int i = 0;i < n ;i++)
//     {
//         //value của phần tử là key và index là value
//         smap[nums[i]] = i;
//     }
    
//     for (int i = 0;i < n ;i++)
//     {
//         int complement = target - nums[i];
//         if(smap.count(complement) && smap[complement] != i) {
//             return {i, smap[complement]};
//         }
//     }
//     return {}; // No solution found

// }

//////////////////////////////////////////////////////////////////////

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            // 2 11 15 17
            //Đặt ở đây vì : khi i = 3(lần cuối n = 4) thì
            //target(9) - num[i](7) = 2; mà 2 có trong numMap
            numMap[nums[i]] = i;
        }

        return {}; // No solution found
}




int main() {
    int arr[] = {2, 11, 15, 7};

    vector<int> v1(arr, arr + 4), v2;
    v2 = twoSum(v1, 9);

    for (int j = 0; j < v2.size() ; j++)
    {
       cout << v2[j] << endl;               
    }
}