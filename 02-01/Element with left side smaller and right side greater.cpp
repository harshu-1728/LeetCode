#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int foo(int *arr, int n){
    int larr[n], rarr[n];
    int t1, t2, i;
    t1 = INT_MIN;
    t2 = INT_MAX;
    for (i = 0; i < n; ++i){
        t1 = max(t1, arr[i]);
        t2 = min(t2, arr[n-i-1]);
        larr[i] = t1;
        rarr[n-i-1] = t2;
    }
    for (i = 1; i < n-1; ++i){
        if (larr[i-1] <= arr[i] && arr[i] <= rarr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; ++i){
            cin >> arr[i];
        }
        cout << foo(arr, n) << endl;
    }
    return 0;
}