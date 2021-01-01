#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int max(int a, int b){
    return a > b? a:b;
}

int min(int a, int b){
    return a < b ? a : b;
}

int trap_water(int n, int *arr){
    int arr1[n], arr2[n];
    int m1, m2, water;
    water = m1 = m2 = 0;
    for (int i = 0; i < n; ++i){
        m1 = max(m1, arr[i]);
        m2 = max(m2, arr[n-i-1]);
        arr1[i] = m1;
        arr2[n-i-1] = m2;
    }
    for (int i = 0; i < n; ++i){
        water += min(arr1[i], arr2[i]) - arr[i];
    }
    return water;
}

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        cout << trap_water(n, arr) << endl;
    }
    return 0;
}