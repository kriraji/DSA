class MyStack {
     queue<int> q;
       int sizeofst; 
public:
    MyStack() {
        sizeofst=0; 
    }
    
    void push(int x) {
        int s=q.size();
        q.push(x);
        sizeofst=sizeofst+1;
        for(int i=1;i<=s;i++){
            q.push(q.front());
            q.pop();
        }
        
    }
    
    int pop() {
     int del=q.front();
     q.pop();
     sizeofst=sizeofst-1;
     return del;   
    }
    
    int top() {
     return q.front();   
    }
    
    bool empty() {
     if(!q.size())
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