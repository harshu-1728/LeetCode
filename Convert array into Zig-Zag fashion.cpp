#include <bits/stdc++.h>
using namespace std;
//User function template for C++
class Solution{
public:
    // Program for zig-zag conversion of array
    void swap(int *a, int *b){
        *a = *a+*b;
        *b = *a-*b;
        *a = *a-*b;
    }

    void zigZag(int arr[], int n) {
        int i, flag = 0;
        for (i = 0; i < n-1; ++i){
            if (flag == 0){
                flag = 1;
                if (arr[i] > arr[i+1]){
                    swap(arr+i, arr+i+1);
                }
            }
            else{
                flag = 0;
                if (arr[i] < arr[i+1]){
                    swap(arr+i, arr+i+1);
                }
            }
        }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends