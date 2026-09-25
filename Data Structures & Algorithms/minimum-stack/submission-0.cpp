class MinStack {
public:
    MinStack() {
        
    }
    stack<int>minStack;
    stack<int>stack;
    
    void push(int val) {
        stack.push(val);
        val=std::min(val,minStack.empty()?val:minStack.top());        minStack.push(val);
    }
    
    void pop() {
        stack.pop();
        minStack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
