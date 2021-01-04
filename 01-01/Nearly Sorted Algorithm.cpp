#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r){
    int pivot, i, j;
    pivot = arr[r];
    i = l-1;
    j = l;
    while (j < r){
        if (arr[j] < pivot){
            i += 1;
            swap(arr+i, arr+j);
        }
        j += 1;
    }
    swap(arr+i+1, arr+r);
    return i+1;
}

void quicksort(int arr[], int l, int r){
    if (l < r){
        int pos = partition(arr, l, r);
        quicksort(arr, l, pos-1);
        quicksort(arr, pos+1, r);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, k, i, j;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; ++i){
            cin >> arr[i];
        }
        i = 0; j = k-1;
        while (j < n){
            quicksort(arr, i, j);
            i += k;
            j += k;
        }
        for (i = 0; i < n; ++i){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}