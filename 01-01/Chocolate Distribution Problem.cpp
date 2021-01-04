#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n, c;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        scanf("%d", &c);
        sort(arr, arr+n);
        int i, j, diff;
        i = 0; j = c-1;
        diff = INT_MAX;
        while (j < n && c <= n){
            diff = min(diff, arr[j]-arr[i]);
            i += 1;
            j += 1;
        }
        cout << diff << endl;
    }
    return 0;
}