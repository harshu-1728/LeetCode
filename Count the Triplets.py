#User function Template for python3
class Solution:
    def countTriplet(self, arr, n):
        arr.sort()
        k = n-1
        count = 0
        while k > 1:
            i = 0
            j = k-1
            while i < j:
                tot = arr[i] + arr[j]
                if tot < arr[k]:
                    i += 1
                elif tot > arr[k]:
                    j -= 1
                elif tot == arr[k]:
                    count += 1
                    i += 1
                    j -= 1
            k -= 1
        return count




# { Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n = int(input())
        arr = [int(x) for x in input().split()]

        ob = Solution()
        ans = ob.countTriplet(arr, n)
        print(ans)

# } Driver Code Ends