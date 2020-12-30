#include <iostream>
#include <cstdlib>
using namespace std;

int max(int a, int b){
    return (a > b) ? a : b;
}

int maxSubarraySum(int arr[], int n){
    int lmax, gmax, temp;
    lmax = gmax = 0;
    for (int i = 0; i < n; ++i)
    {
        lmax = max(arr[i], lmax+arr[i]);
        gmax = max(lmax, gmax);
    }
    return gmax;
}


int main()
{
    int t,n;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        cin>>n; //input size of array
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        cout << maxSubarraySum(a, n) << endl;
    }
}