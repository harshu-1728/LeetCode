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
    int m1, m2, m3, n1, n2, n3 , n4, i, j;
    long long count = 0;
    m1 = m2 = m3 = n1 = n2 = n3 = n4 = 0;
    sort(x, x+m); sort(y, y+n);
    for (i = 0; i < m; ++i){
        if (x[i] == 1)
            m1 += 1;
        else if (x[i] == 2)
            m2 += 1;
        else if (x[i] == 3)
            m3 += 1;
    }
    for (i = 0; i < n; ++i){
        if (y[i] == 1)
            n1 += 1;
        else if (y[i] == 2)
            n2 += 1;
        else if (y[i] == 3)
            n3 += 1;
        else if (y[i] == 4)
            n4 += 1;
    }
    count += (m3*n2 + (m-m1) * n1);
    count -= (m2*(n3+n4) + m1*(n-n1));
    i = j = 0;
    while ( i < m){
        while (j < n && y[j] <= x[i])
            j += 1;
        count += n-j;
        i += 1;
    }
    return count;
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