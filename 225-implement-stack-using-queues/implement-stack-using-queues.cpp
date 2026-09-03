class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(q1.size()!=0){
            q2.push(x);
            while(q1.size()!=0){
                q2.push(q1.front());
                q1.pop();
            }
        }
        else{
            q1.push(x);
            while(q2.size()!=0){
                q1.push(q2.front());
                q2.pop();
            }
        }
    }
    
    int pop() {
        if(!q1.empty()){
            int p =q1.front();
            q1.pop();
            return p;
        }
        if(!q2.empty()){
            int p =q2.front();
            q2.pop();
            return p;
        }
        return 0;
    }
    
    int top() {
        if(!q1.empty()){
            return q1.front();
            
        }
        if(!q2.empty()){
            return q2.front();
        }
        return 0;

    }
    
    bool empty() {
        if(q1.size() || q2.size()){
            return false;
        }
        return true;
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