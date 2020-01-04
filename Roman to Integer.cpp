//右边字母代表数字比左边小，或者等于左边数字，或者当前数字是最后一个数字，则所有字母相加
//若小数字在大数字左边，则大数减小数
//利用string内置的size（）和s[i]，可以将string拆开一个一个字母看
//res 相当于一个累加器。先记录当前状态，再根据下个数值决定更新状态是加还是减。这样的话我每走一个数就可以把这个数加或减一次，等遍历完
//整个string刚好把所有的数都处理过了。

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> m{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i = 0; i < s.size(); ++i) {
            int val = m[s[i]];
            if (i == s.size() - 1 || m[s[i+1]] <= m[s[i]]) res += val;
            else res -= val;
        }
        return res;
    }
};
