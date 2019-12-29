//这题很骚就在于找规律
//有三种情况，nums>=target, nums < target
//利用for loop遍历整个vector，如果nums>=target， return当前i值，相当于把target插入到当前nums[i]位置之前
//在用for遍历完所有元素之后
//如果所有nums都小于target，说明target应该被插到末尾，因此直接return nums.size()即可
//我之前想的是把三种情况用三个if来解决，这样更麻烦，因为要考虑到target的大小可能在任何两个数中间。这个方法好在作者利用了
//“当nums>target时，也返回当前i值”的特性
 




class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] >= target) return i;
        }
        return nums.size();
    }
};
