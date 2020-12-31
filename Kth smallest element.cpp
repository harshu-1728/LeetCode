//Initial function template for C++

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int kthSmallest(int *, int, int, int);

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];

        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];

        int k;
        cin>>k;
        cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;

        // for(int i=0;i<number_of_elements;i++)
        //     cout << a[i] << " ";
        // cout << endl;
    }
    return 0;
}// } Driver Code Ends

//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r){
    int temp, i;
    temp = l-1;
    i = l;
    while (i < r){
        if (arr[i] < arr[r]){
            temp += 1;
            swap(arr+temp, arr+i);
        }
        i += 1;
    }
    swap(arr+temp+1, arr+i);
    return temp+1;
}

int r_partition(int arr[], int l, int r){
    int temp = l + rand()%(r-l+1);
    swap(arr+temp, arr+r);
    return partition(arr, l, r);
}

int quickselect(int arr[], int l, int r, int k){
    if (k > 0 && k <= r-l+1){
        int pos;
        pos = r_partition(arr, l, r);
        if (pos-l == k-1)
            return arr[pos];
        if (k-1 < pos-l)
            return quickselect(arr, l, pos-1, k);
        else
            return quickselect(arr, pos+1, r, k-pos+l-1);
    }
    return INT_MAX;
}

int kthSmallest(int arr[], int l, int r, int k) {
    return quickselect(arr, l, r, k);
    // return 0;
}