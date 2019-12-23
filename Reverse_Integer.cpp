class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        while (x){
            rev = rev*10 + x%10;            //  加号前面先取得的值，保持最高位。 加号后面取得个位数
            x = x/10;                       //裁剪原数，确保从低位到高位都能被依次取得
        }
        if (rev < INT_MIN || rev > INT_MAX){                
            return 0;
        }
        else {
        return rev;
        }
    }
};
