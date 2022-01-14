class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count=0;
        int cap=capacity;
        for(int i=0; i<plants.size(); i++)
        {
            if(plants[i]<=capacity)
            {
                count++;
                capacity-=plants[i];
            }
            else
            {    
                count+=i+(i+1);
                capacity=cap;//refill
                capacity-=plants[i];
            }
        }
        return count;
    }
};
