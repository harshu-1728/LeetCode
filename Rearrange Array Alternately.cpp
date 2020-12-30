#include <iostream>
#include <cstdlib>

using namespace std;
// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
void rearrange(long long *arr, int n)
{
    int mini, maxi, maxe;
    mini = 0; maxi = n-1; maxe = arr[n-1] + 1;
    for (int i = 0; i < n; ++i){
        if (i%2 == 0){
            arr[i] += (arr[maxi] % maxe)*maxe;
            maxi -= 1;
        }
        else{
            arr[i] += (arr[mini] % maxe)*maxe;
            mini += 1;
        }
    }
    for (int i = 0; i < n; ++i){
        arr[i] /= maxe;
    }
}


// Driver program to test above function
int main()
{
    int t;
    //testcases
    cin >> t;
    while(t--){
        //size of array
        int n;
        cin >> n;
        long long arr[n];
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        //calling rearrange() function
        rearrange(arr, n);
        //printing the elements
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// Driver Code Ends