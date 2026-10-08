class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string i:tokens)
        {
            if(i=="+")
            {
                int r=st.top();
                st.pop();
                int l=st.top();
                st.pop();
                st.push(l+r);
            }
            else if(i=="-")
            {
                int r=st.top();
                st.pop();
                int l=st.top();
                st.pop();
                st.push(l-r);
            }
            else if(i=="*")
            {
                int r=st.top();
                st.pop();
                int l=st.top();
                st.pop();
                st.push(l*r);
            }
            else if(i=="/")
            {
                int r=st.top();
                st.pop();
                int l=st.top();
                st.pop();
                st.push(l/r);
            }
            else
            {
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};
