#include<iostream>
#include <unordered_map> 
#include <vector>
#include <unordered_set> 
using namespace std;

            /* Solution */
// Lấy phần tử đầu duyện qua 

// Time complexity O(n^2)
vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> v;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size() ; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
                
            }
            
        }

        return nums;
}


int main() {
    int arr[] = {3, 2, 4, 15};

    vector<int> v1(arr, arr + 3), v2;
    v2 = twoSum(v1, 6);

    for (int j = 0; j < v2.size() ; j++)
    {
       cout << v2[j] << endl;               
    }
}