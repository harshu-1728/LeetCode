#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cmath>
using namespace std;


void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void merge(int arr1[], int arr2[], int n, int m)
{
    int gap = (int)(ceil((n+m)/2));
    int i, j, temp1, temp2;
    while (gap > 0){
        i = 0;
        j = gap;
        while (j < n+m){
            if (i >= n && j >= n){
                temp1 = i-n;
                temp2 = j-n;
                if (arr2[temp1] > arr2[temp2]){
                    swap(arr2+temp1, arr2+temp2);
                }
            }
            else if (j >= n){
                temp1 = j-n;
                if (arr1[i] > arr2[temp1]){
                    swap(arr1+i, arr2+temp1);
                }
            }
            else{
                if (arr1[i] > arr1[j]){
                    swap(arr1+i, arr1+j);
                }
            }
            i += 1;
            j += 1;
        }
        gap /= 2;
    }
}


int main()
{
    int T;
    cin >> T;

    while(T--){
        int n, m;
        cin >> n >> m;

        int arr1[n], arr2[m];

        for(int i = 0;i<n;i++){
            cin >> arr1[i];
        }

        for(int i = 0;i<m;i++){
            cin >> arr2[i];
        }

        merge(arr1, arr2, n, m);

        for (int i = 0; i < n; i++)
            printf("%d ", arr1[i]);


        for (int i = 0; i < m; i++)
            printf("%d ", arr2[i]);

        cout<<endl;
        swap(&n, &m);
        cout << n << m << endl;
    }

    return 0;
}