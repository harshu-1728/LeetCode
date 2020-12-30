#include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;


 // } Driver Code Ends



// Function to count number of pairs such that x^y is greater than y^x
// X[], Y[]: input array
// m, n: size of arrays X[] and Y[] respectively
long long countPairs(int x[], int y[], int m, int n)
{
    sort(x, x+m); sort(y, y+n);
}

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int M,N;
        cin>>M>>N;
        int i,a[M],b[N];
        for(i=0;i<M;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<N;i++)
        {
            cin>>b[i];
        }
        cout<<countPairs(a, b, M, N)<<endl;
    }
}
// } Driver Code Ends