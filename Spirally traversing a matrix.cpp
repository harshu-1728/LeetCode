#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int m, int n)
    {
        int i, j, t, index;
        index = i = j = 0;
        // m -= 1;
        // n -= 1;
        vector <int> ans(m*n, 0);
        while (i < m || j < n){
            if (i < m){
                for (t = j; t < n; ++t){
                    ans[index++] = matrix[i][t];
                }
                i += 1;
            }
            if (j < n){
                for (t = i; t < m; ++t){
                    ans[index++] = matrix[t][n-1];
                }
                n -= 1;
            }
            // break;
            if (i < m){
                for (t = n-1; t >= j; --t){
                    ans[index++] = matrix[m-1][t];
                }
                m -= 1;
            }
            if (j < n){
                for (t = m-1; t >= i; t--){
                    ans[index++] = matrix[t][j];
                }
                j += 1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r);

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (long long unsigned int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends