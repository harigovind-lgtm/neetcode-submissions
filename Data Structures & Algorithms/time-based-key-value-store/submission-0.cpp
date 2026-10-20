class TimeMap {
public:
        unordered_map<string,vector<pair<int,string>>> m;
    TimeMap() {
      
    }
    
    string bs(vector<pair<int,string>> &nums,int l ,int r,int target)
    {
        if(r==-1)
        return "";
        if(r<l)
        return nums[r].second;
        int mid=(l+r)/2;
        if(nums[mid].first==target)
        return nums[mid].second;
        else if(nums[mid].first>target)
        {
            return bs(nums,l,mid-1,target);
        }
        else
        {
            return bs(nums,mid+1,r,target);
        }
    }
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        return bs(m[key],0,m[key].size()-1,timestamp);
    }
};
