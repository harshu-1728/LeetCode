// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[],int n);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}
// } Driver Code Ends
/*You are required to complete this method*/
int max_sum(int arr[],int n)
{
    int cumm_s, curr_s, i, ans;
    ans = cumm_s = curr_s = 0;
    for (i = 0; i < n; ++i){
        cumm_s += arr[i];
        curr_s += arr[i] * i;
    }
    ans = max(ans, curr_s);
    for (i = 0; i < n-1; ++i){
        curr_s = curr_s - (cumm_s - arr[i]) + (n-1) * arr[i];
        ans = max(ans, curr_s);
    }
    return ans;
}