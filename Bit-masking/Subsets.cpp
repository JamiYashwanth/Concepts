#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        int n=nums.size();
        int mask=1<<n;          // mask = 2^n
        v.push_back({});        // Inserting empty subset
        for(int i=1;i<mask;i++){
            int curr=i,j=0;
            vector<int> v1;
            while(curr){
                if((curr&1)==1) v1.push_back(nums[j]);
                curr=curr>>1;
                j+=1;
            }
            v.push_back(v1);
        }
        return v;
    }
};

/*
Time-complexity = O(2^n) => where n=length of vector  

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Approach using bit-masking:-

   3 2 1
0->0 0 0  []
1->0 0 1  [1]
2->0 1 0  [2]
3->0 1 1  [1,2]
4->1 0 0  [3]
5->1 0 1  [1,3]
6->1 1 0  [2,3]
7->1 1 1  [1,2,3]

*/