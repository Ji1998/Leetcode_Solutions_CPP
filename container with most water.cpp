//面积的计算方法：比较两个vertical，取较小的那个和j-i相乘
//这题的核心就是把i和j往中间缩的算法，当i的vertical小于j的vertical时，++i，否则--j
//这样可以保证每一块面积都会被算到。


class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0, i = 0, j = height.size()-1;
        while (i<j){
            res = max(res, min(height[i], height[j])*(j-i));
            height[i]<height[j]? ++i:--j;
        }
        return res;
    }
};