#include<iostream>
#include <unordered_map> 
#include <unordered_set> 
using namespace std;


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq, mpp;
        for(int x : arr) freq[x]++;

        for(auto &[_, cnt] : freq){
            if( !mpp.insert({cnt, 1}).second ) return false;
        }
        return true;
    }
};