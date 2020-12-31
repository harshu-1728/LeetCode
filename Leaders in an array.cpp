// Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <vector>
#include <iostream>
using namespace std;


 // Driver Code Ends

vector<int> leaders(int arr[], int n){
    vector<int> ans;
    int leader = arr[n-1];
    for (int i = 0; i < n; ++i){
        if (arr[n-i-1] >= leader){
            leader = arr[n-i-1];
            ans.insert(ans.begin(), leader);
        }
    }
    return ans;
}


// Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array

        int a[n];

        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }

        //calling leaders() function
        vector<int> v = leaders(a, n);

        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }

        cout << endl;

   }
}
// Driver Code Ends