class MyStack {
private:
    vector<int> v;
    int t = -1;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        t++;
        v.push_back(x);
        return;
    }
    
    int pop() {
        int element = v[t];
        v.pop_back();
        t--;
        return element;
    }
    
    int top() {
        return v[t];
    }
    
    bool empty() {
        if(v.empty()) 
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */