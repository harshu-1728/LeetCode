// { Driver Code Starts
//Initial template for C++

#include<iostream>
using namespace std;
int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++

long long maxArea(long long arr[], int len)
{
    // Your code goes here
    int i, j;
    i = 0; j = len-1;
    long long area = min(arr[i], arr[j]) * (j-i);
    while (i < j){
        if (arr[i] < arr[j]){
            i += 1;
        }
        else{
            j -= 1;
        }
        area = max(area, min(arr[i], arr[j])*(j-i));
    }
    return area;
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}