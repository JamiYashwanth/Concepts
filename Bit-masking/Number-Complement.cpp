class Solution {
public:
    int findComplement(int num) {
        int i=0,result=0;
        while(num){
            if((num & 1) == 0){
                result+=(1 << i);  // If i-th bit is not set , i.e ZERO ( Right-shift 1 by i times and add to result)
            }
            i+=1;
            num=num>>1;
        }
        return result;
    }
};


/*

Time - Complexity equals to  O(1)
Why?? -> while loop iteration takes place for Atmost 32 times (32 bits). Hence, Constant time

*/