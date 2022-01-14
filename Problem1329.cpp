class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for(int cols=0; cols<n; cols++)
        {
            Sort(mat,0,cols,m,n);
        }
        for(int rows=1; rows<m; rows++)
        {
            Sort(mat,rows,0,m,n);
        }
        return mat;
    }
    void Sort(vector<vector<int>>& mat, int rows, int cols, int m, int n)
    {
        //vector<int>val;
        int values[101]={0};
        int r=rows;
        int c=cols;
        while(r<m && c<n)
        {
            //val.push_back(mat[r][c]);
            values[mat[r][c]]++;
            r++;
            c++;
        }
        //sort(val.begin(), val.end());
       // int ind=0;
        r=rows;
        c=cols;
        for(int i=1;i<101; i++)
        {
            if(values[i]>0)
            {
                int count=values[i];
                while(count-->0)
                {
                    mat[r][c]=i;
                    r++;
                    c++;
                }
            }
        }
        // while(r<m && c<n)
        // {
        //     mat[r][c]=val[ind++]; 
        //     r++;
        //     c++;
        // }
        
    }
};
