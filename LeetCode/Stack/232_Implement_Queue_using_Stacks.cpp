class MyQueue {
public:
    stack<int>s1;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        stack<int>s2;
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        int x = s2.top();
        s2.pop();
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
        
    }
    
    int peek() {
        stack<int>s2;
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        int x = s2.top();
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
    
    bool empty() {
        if(s1.size()==0){
            return true;
        }
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
