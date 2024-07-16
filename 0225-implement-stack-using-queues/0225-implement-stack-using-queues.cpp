class MyStack {
public:
  queue<int> q1;
  queue<int> q2;
  
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        
    }
    
    int pop() {
        int cnt=0;
            int a = q1.back();
            int n = q1.size();
           
        

        while(cnt<n-1)
        {

            
            int b=q1.front();
            q1.push(b);
            cout<<"b:"<<b<<endl;
            q1.pop();

            // if(a!=b)
            // {
            //     cout<<"a"<<a<<"b:"<<b<<endl;
            //     q1.push(b);

            // }
            // else
            // {

            // q1.pop();
            // cout<<"hi"<<" "<<q1.size()<<endl;
            //     break;

            // }
            //     // cout<<"a"<<a<<"b:"<<b<<endl;
            cnt++;
            

            
        }
        cout<<q1.front()<<endl;
        cout<<q1.back()<<endl;
            q1.pop();
        
        
        
        return a;
    }
    
    int top() {
        
        return q1.back();
        
    }
    
    bool empty() {
        return(q1.empty());
        
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