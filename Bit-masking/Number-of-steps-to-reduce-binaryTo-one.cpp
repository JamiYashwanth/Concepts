#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSteps(string s) {
        int count=0;
        while(s!="1"){
            if(s[s.length()-1]=='1'){
                s[s.length()-1]='0';
                int i;
                for(i=s.length()-2;i>=0;i--){
                    if(s[i]=='1') s[i]='0';
                    else{
                        s[i]='1';
                        break;
                    }
                }
                if(i==-1) s='1'+s;
            }
            else s.pop_back();
            count+=1;
        }
        return count;
    }
};