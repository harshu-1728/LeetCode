// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> printUnsorted(int arr[], int n) {
        int temp[n], i,l,r;
        for (i = 0; i < n;++i){
            temp[i] = arr[i];
        }
	    sort(arr, arr+n);
        for (i=0; i < n; ++i){
            if (temp[i] != arr[i]){
                l = i;
                break;
            }
        }
        for (i = n-1; i >= 0; --i){
            if (temp[i] != arr[i]){
                r = i;
                break;
            }
        }
        // cout << "temp: " << l << " " << r << endl;
        vector <int> arr1 (r-l+1, 0);
        int k = 0;
        while (l <= r){
            // cout << "while: " << k << " " << l << endl;
            arr1[k++] = temp[l++];
        }
        return arr1;
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
        auto ans = ob.printUnsorted(arr, n);
        for (auto i = ans.begin(); i != ans.end(); ++i){
            cout << *i << " ";
        }
        cout << endl;
        // cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
  // } Driver Code Ends