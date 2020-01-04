//这题的核心就是那个把数反过来的算法
//反过来后的判定条件：反过来的数与原数相等，且大于等于0，return true
//否则return false




class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        long rev=0;
        while (x){
            rev = rev*10 + x%10;
            x = x/10;
        }
        if ((rev == y)&&(y>=0)&&(rev>=0))
            return true;
        
        else 
            return false;
       
        
        
    }
};