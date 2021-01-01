#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
    // Function to check if the
    // Pythagorean triplet exists or not
    bool checkTriplet(int arr[], int n) {
        int arr1[n];
        sort(arr, arr+n);
        for (int i = 0; i < n; ++i){
            arr1[i] = arr[i] * arr[i];
        }
        int i, j, temp, sum;
        temp = 2;
        while (temp < n){
            i = 0; j = temp-1;
            while (i < j){
                sum = arr1[i] + arr1[j];
                if (sum == arr1[temp]){
                    return true;
                }
                if (sum < arr1[temp]){
                    i += 1;
                }
                else{
                    j -= 1;
                }
            }
            temp += 1;
        }
        return false;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
