// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int i, j, a, b;
        long long temp;
        i = 0; j = k-1;
        while (j < n){
            printf("%d %d\n", i, j);
            a = i; b = j;
            while (a < b){
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
                a++; b--;
            }
            i += k; j += k;
        }
        if (n%k > 1){
            a = n - n%k;
            b = n-1;
            while (a < b){
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
                a++; b--;
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr;
        int k;
        cin >> k;

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);

        for(long long i = 0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}