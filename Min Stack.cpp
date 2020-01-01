//建立两个stack s1和s2
//s1是主要的stack，s2用来记录最小值






class MinStack {
public:
    MinStack() {}    
    void push(int x) {                                                                    
        s1.push(x);
        if (s2.empty() || x <= s2.top()) s2.push(x);                    //只有最小值才会被push到s2里边，而且永远在s2的top
    }    
    void pop() {
        if (s1.top() == s2.top()) s2.pop();                           //当s2的top和s1的top相等了，说明此时两个stack的top都是最小值
                                                                      //如果不相等，说明s2里的top是最小值，而s1的最小值在stack最底部
                                                                      //所以不用管s2，这样接下来getmin的时候返回s2.top就是s1的最小值
        s1.pop();                                                     //pop出去最小值之后，剩下的是倒数第二最小值
    }  
    int top() {
        return s1.top();
    }    
    int getMin() {
        return s2.top();
    }
    
private:
    stack<int> s1, s2;
};
