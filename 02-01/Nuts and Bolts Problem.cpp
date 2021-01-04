// Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// Driver Code Ends
//User function template for C++
class Solution{
public:
    void swap(char *a, char *b){
        char temp = *a;
        *a = *b;
        *b = temp;
    }

    int partition(char *arr, int l, int r){
        int i, j, temp;
        i = l-1; j = l;
        temp = arr[r];
        while (j < r){
            if (arr[j] < temp){
                i += 1;
                swap(arr+i, arr+j);
            }
            j += 1;
        }
        i += 1;
        swap(arr+i, arr+r);
        return i;
    }

    void quicksort(char *arr, int l, int r){
        if (l < r){
            int pos = partition(arr, l, r);
            quicksort(arr, l, pos-1);
            quicksort(arr, pos+1, r);
        }
    }

    void matchPairs(char *nuts, char *bolts, int n) {
        quicksort(nuts, 0, n-1);
        quicksort(bolts, 0, n-1);
    }

};





// Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// Driver Code Ends