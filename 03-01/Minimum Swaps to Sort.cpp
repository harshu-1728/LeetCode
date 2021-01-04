// { Driver Code Starts
// C++ program to find minimum number of swaps
// required to sort an array
#include<bits/stdc++.h>
using namespace std;

int minSwaps(int A[], int N);

// Driver program to test the above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<minSwaps(a,n)<<endl;
    }
}

// } Driver Code Ends
/* You are required to complete this method */

// return the minimum number of swaps required to sort the array

int minSwaps(int arr[], int n){
    int count, i;
    count = 0;
    pair<int, int> arr_pos[n];
    for (i = 0; i < n; ++i){
        arr_pos[i].first = arr[i];
        arr_pos[i].second = i;
    }
    sort(arr_pos, arr_pos+n);
    vector <bool> visited(n, false);
    for (i = 0; i < n; ++i){
        if (visited[i] || arr_pos[i].second == i){
            continue;
        }
        int cycle_size = 0;
        int j = i;
        while (visited[j] != true){
            visited[j] = true;
            j = arr_pos[j].second;
            cycle_size += 1;
        }
        if (cycle_size > 0){
            count += cycle_size - 1;
        }
    }
    return count;
}
