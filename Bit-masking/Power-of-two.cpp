#include<bits/stdc++.h>

// Method - 1  ( Time Complexity = O(log2(n)) )
class Solution {
public:
    bool isPowerOfTwo(int n) {
        while((n & 1)==0 and n>1){
            n=n>>1;
        }
        if(n==1) return true;
        else return false;
    }
};

// Method -2 ( Time Complexity = O(1) )
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 or n<0) return 0;
        if(!(n&(n-1))) return 1;
        return 0;
    }
};

// Method - 3 ( Time Complexity = O(1) )
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(ceil(log2(n))==floor(log2(n))) return true;
        return false;
    }
};
