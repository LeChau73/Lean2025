#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
private:

public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> v;
        for (int i = 0; i < arr.size(); i++)
        {
            int cnt = 1;

            while ( arr[i] == arr[i+1] )
            {
                cnt++;
            }

            v.push_back(cnt);

        }

        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if ( v[i] == v[i+1] )
            {
                return false;
            }
            
        }
        
        return true;
        
    }
};