# User function Template for python3
'''
    Your task is to sort the elements according
    to the frequency of their occurence
    in the given array.

    Function Arguments: array a with size n.
    Return Type:Array, the sorted array

'''


def sortByFreq(a, n):
    d = dict()
    s = dict()
    ans = []
    temp = []
    for i in a:
        d[i] = d.get(i, 0) + 1
    for i in d.keys():
        s[d[i]] = s.get(d[i], []) + [i] * d[i]
    for i in s.keys():
        temp.append(i)
    temp.sort()
    for i in range(len(temp)-1, -1, -1):
        x = s[temp[i]]
        x.sort()
        ans += x
    # print(d)
    # print(s)
    # print(temp)
    # print(ans)
    return ans


t = int(input())
for i in range(t):
    n = int(input())
    lst = list(map(int, input().split()))
    ans = sortByFreq(lst, n)
    print(*ans)
