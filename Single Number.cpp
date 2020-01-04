//这个题需要用到unordered set
// count: 确认每个element在unordered set里出现的次数，出现一次return 1， 出现两次return 2
//num:nums  ：  建立一个int type叫num，而且num可以是nums里的任何一个元素
//st.count(num)： 查找num在st这个set里出现过的次数
//如果num在st里未曾出现，则insert到st，如果出现过，则在st里erase掉
//因为刚好其他数字的出现频率是偶数，所以单次出现的数字会被保存



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> st;
        for (int num : nums) {
            if (st.count(num)) st.erase(num);
            else st.insert(num);
        }
        return *st.begin();
    }
};