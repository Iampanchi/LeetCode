class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st1.empty()){
            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop();
            }
            st1.push(x);
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            
        }
        else if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            st2.push(x);
            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop();
            }
        }
    }
    
    int pop() {
        if(!st1.empty())
        {int p = st1.top();
        st1.pop();
        return p;}
        int p = st2.top();
        st2.pop();
        return p;
    }
    
    int peek() {
        if(!st1.empty()){
            return st1.top();
        }
        return st2.top();
    }
    
    bool empty() {
        if(st1.size()==0 && st2.size()==0){
            return true;
        }
        return false;
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