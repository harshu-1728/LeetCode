#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while (t--){
        char *arr = (char*)malloc(sizeof(char) * (1000001));
        cin >> arr;
        int n = strlen(arr);
        // cout << "length: " << n << endl;
        int idx = -1;
        for (int i = 0; i < n; ++i){
            if (arr[i] == 49){
                idx = i;
            }
        }
        cout << idx << endl;
        free(arr);
    }
    return 0;
}