#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:


    int maxSubArray(vector<int>& nums) {
        return solve(nums, 0, false);
    }




    int solve(vector<int>& A, int i, bool mustPick) {
        // our subarray must contain atleast 1 element. If mustPick is false at end means no element is picked and this is not valid case
        if (i >= size(A)) return mustPick ? 0 : -1e5;

        if (mustPick)

            return max(0, A[i] + solve(A, i + 1, true));                  // either stop here or choose current element and recurse

        return max(solve(A, i + 1, false) , A[i] + solve(A, i + 1, true));   // try both choosing current element or not choosing
    }




};


int main() {

    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(nums) / sizeof(nums[0]);

    vector<int> v(nums, nums + size);
    Solution so;

    so.maxSubArray(v);


	return 0;
}