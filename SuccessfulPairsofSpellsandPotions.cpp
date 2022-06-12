class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int>res;
        int m = potions.size();
        
        for(int s: spells)
        {
            int l=0; int u=m-1;
            int ans=m;
            while(l<=u)
            {
                int mid=(l+u)/2;
                if(1LL * potions[mid]*s>=success)
                {
                    u=mid-1;
                    ans=mid;
                }
                else
                    l=mid+1;
            }
            res.push_back(m-ans);
        }
        
        return res;
    }
};





