class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count=0,result;
        while(left!=right){  // Iterate the loop till left == right and copy and resultant value to result
            left=left>>1;
            right=right>>1;
            count+=1;
        }
        result=left<<count;  // Left shift the number for how many times right shift has been performed 
        return result;
    }
};
 
/*

Time - Complexity equals to  O(1)
Why?? -> while loop iteration takes place for Atmost 32 times (32 bits). Hence, Constant time

Observations :-
-> If any bit is ZERO in one coloumn. Then, the resultant bit will be ZERO for sure (Therefore, Reason for left shifting count times)

*/