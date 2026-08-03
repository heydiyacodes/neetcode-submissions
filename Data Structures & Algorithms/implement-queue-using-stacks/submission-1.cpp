class MyQueue {
stack<int> inp,outp;
public:
    MyQueue() {}
    
    void push(int x) {
        inp.push(x);
    }
    
    int pop() {
        int res=peek(); //checking first el;
        outp.pop();
        return res;
    }
    
    int peek(void) {
        if(outp.empty()){
            while(inp.size()) outp.push(inp.top()),inp.pop();
        }
        return outp.top();
    }
    
    bool empty() {
        return inp.empty() && outp.empty();
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