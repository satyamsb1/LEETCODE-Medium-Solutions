class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score  = 0;
        int maxScore=0;
        sort(tokens.begin(), tokens.end());
        int i=0, j=tokens.size()-1;
        while(i<=j)
        {
            if(tokens[i]<= power)
            {
                score++;
                power-= tokens[i];
                maxScore = max(score, maxScore);
                i++;
            }
            else
            {
                if(score > 0)
                {
                    score--;
                    power+=tokens[j]; 
                    j--;
                }
                else break;
                
            }
        }
        return maxScore;
    }
};
