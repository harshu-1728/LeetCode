#include <bits/stdc++.h>
using namespace std;


// Function to find inversion count in the array

// arr[]: Input Array
// N : Size of the Array arr[]

void merge(long long *arr, long long l, long long m, long long r, long long *count){
    long long i, j, k;
    long long temp[r - l + 1];
    k = 0; i = l; j = m+1;
    while (i <= m && j <= r){
        if (arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            *count += (m-i+1);
        }
    }
    while (i <= m){
        temp[k++] = arr[i++];
        // *count += (r-m);
    }
    while (j <= r){
        temp[k++] = arr[j++];
    }
    k = 0;
    for (int i = l; i <= r; ++i){
        arr[i] = temp[k++];
    }
}

void mergesort(long long *arr, long long l, long long r, long long *count){
    if (l < r){
        long long m = (l + r)/2;
        mergesort(arr, l, m, count);
        mergesort(arr, m+1, r, count);
        merge(arr, l, m, r, count);
    }
}

long long int inversionCount(long long arr[], long long n)
{
    long long count;
    count = 0;
    mergesort(arr, 0, n - 1, &count);
    return count;
}


int main() {

    long long T;
    cin >> T;

    while(T--){
        long long N;
        cin >> N;

        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }

        cout << inversionCount(A,N) << endl;

        // for(long long i = 0;i<N;i++){
        //     cout << A[i] << " ";
        // }
        // cout << endl;
    }

    return 0;
}