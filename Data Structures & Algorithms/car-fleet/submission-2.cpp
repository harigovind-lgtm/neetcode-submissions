class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for(int i=0;i<position.size();i++)
        {
            pair<int,int> temp;
            temp.first=position[i];
            temp.second=speed[i];
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        stack<double> st;
        for(int i=v.size()-1;i>=0;i--)
        {
            double time=(double)(target-v[i].first)/v[i].second;
            if(st.empty())
            st.push(time);
            else
            {
                if(st.top()<time)
                {
                    st.push(time);
                }
            }
            
            
        }
        int counter=0;
        while(!st.empty())
            {
                st.pop();
                counter++;
            }
        return counter;
    }
};
