//利用i<parentheses.size()遍历所有输入，先把左半边压入stack，再和右半边进行配对
//比如输入 ”【（）】“， 因为前两个括号的顺序是反着的，所以利用stack先把【压入，再压（
//这样可以让 ）和（ 对应上
//每配对上一对，就pop出来一个已经压入的元素
//如果都配对上了，stack也就空了，return empty就是true


class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') parentheses.push(s[i]);
            else {
                if (parentheses.empty()) return false;
                if (s[i] == ')' && parentheses.top() != '(') return false;
                if (s[i] == ']' && parentheses.top() != '[') return false;
                if (s[i] == '}' && parentheses.top() != '{') return false;
                parentheses.pop();
            }
        }
        return parentheses.empty();
    }
}; 

