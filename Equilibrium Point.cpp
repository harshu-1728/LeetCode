// { Driver Code Starts
#include <iostream>
#include <numeric>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;

    //taking testcases
    cin >> t;

    while (t--) {
        long long n;

        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
    if (n == 1)
        return n;
    else if (n == 2)
        return -1;
    else{
        int lsum, rsum;
        rsum = lsum = 0;
        for (int i = 0; i < n; ++i){
            rsum += a[i];
        }
        // cout << rsum << endl;
        for (int i = 0; i < n-2; i++){
            lsum += a[i];
            rsum -= a[i];
            if (lsum == rsum-a[i+1]){
                return i+2;
            }
        }
        return -1;
    }
}