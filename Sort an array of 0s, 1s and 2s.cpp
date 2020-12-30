#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

void sort012(int a[], int n)
{
    int count0, count1, count2, i;
    count0 = count1 = count2 = i = 0;
    while (i < n){
        if (a[i] == 0)
            count0 += 1;
        else if (a[i] == 1)
            count1 += 1;
        else
            count2 += 1;
        i += 1;
    }
    i = 0;
    while (count0){
        a[i++] = 0;
        count0--;
    }
    while (count1){
        a[i++] = 1;
        count1--;
    }
    while (count2){
        a[i++] = 2;
        count2--;
    }
}