class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char i:s)
        {
            if(i=='(')
            st.push('(');
            if(i=='[')
            st.push('[');
            if(i=='{')
            st.push('{');
            if(i==')')
            {
                if( !st.empty() && st.top()=='(')
                st.pop();
                else
                return false;
            }
            if(i=='}')
            {
                if( !st.empty() && st.top()=='{')
                st.pop();
                else
                return false;
            }
            if(i==']')
            {
                if( !st.empty() && st.top()=='[')
                st.pop();
                else
                return false;
            }

        }
        if(st.empty())
        return true;
        return false;
    }
};
