class MinStack {
public:
        stack<int> s;
        priority_queue<int,vector<int>,greater<int>> pq;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        pq.push(val);
    }
    
    void pop() {
        int temp=s.top();
        s.pop();
        vector<int> v;
        while(pq.top()!=temp)
        {
            v.push_back(pq.top());
            pq.pop();
        }
        pq.pop();
        for(int i:v)
        pq.push(i);
        
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return pq.top();
    }
};
