#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) {
        vector <int> rsum(n, 0);
        vector <int> csum(n, 0);
        int i, j;
        for (i = 0; i < n; ++i){
            for (j = 0; j < n; ++j){
                rsum[i] += M[i][j];
                csum[i] += M[j][i];
            }
        }
        for (i = 0; i < n; ++i){
            if (rsum[i] == 0 && csum[i] == n-1){
                return i;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends