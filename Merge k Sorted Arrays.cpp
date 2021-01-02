// { Driver Code Starts
#include<bits/stdc++.h>


#define N 105
using namespace std;

int *mergeKArrays(int arr[][N],int k);

void printArray(int arr[], int size)
{
for (int i=0; i < size; i++)
    cout << arr[i] << " ";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int arr[N][N];
        for(int i=0; i<k; i++){
            for(int j=0; j<k; j++)
            {
                cin>>arr[i][j];
            }
        }
    int *output = mergeKArrays(arr, k);
    printArray(output, k*k);
    cout<<endl;
}
    return 0;
}// } Driver Code Ends


// your task is to complete this function
// function should return an pointer to output array int*
// of size k*k
void merge(int *arr, int l, int m, int r){
    int i, j, k;
    i = l; j = m+1;
    k = 0;
    int temp[r-l+1];
    while (i <= m && j <= r){
        if (arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while (i <= m){
        temp[k++] = arr[i++];
    }
    while (j <= r){
        temp[k++] = arr[j++];
    }
    k = 0;
    for (i = l; i <= r; ++i){
        arr[i] = temp[k++];
    }
}

int *mergeKArrays(int arr[][N], int k)
{
    int *ans = (int*)malloc(sizeof(int) * k*k);
    int i, j;
    for (i = 0; i < k; ++i){
        ans[i] = arr[0][i];
    }
    for (i = 1; i < k; ++i){
        for (j = 0; j < k; ++j){
            ans[i*k+j] = arr[i][j];
        }
        merge(ans, 0, k*i-1, k*(i+1)-1);
    }
    return ans;
}