// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    vector<vector<int>> stockBuySell(vector<int> arr, int n){
        vector<vector<int>> ans;
        int i, buy, sell;
        i = 0;
        while (i < n){
            while(i+1 < n && arr[i+1] <= arr[i]){
                i += 1;
            }
            buy = i;
            i += 1;
            while(i+1 < n && arr[i+1] >= arr[i]){
                i += 1;
            }
            sell = i;
            i += 1;
            if (buy >= 0 && sell >= 0 && buy < sell && buy < n && sell < n){
                vector <int> temp;
                temp.push_back(buy);
                temp.push_back(sell);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for (int i=0; i<ans.size(); ++i){
                cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
            }
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends