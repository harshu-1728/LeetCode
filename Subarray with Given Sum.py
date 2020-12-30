t = int(input())
for i in range(t):
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))
    r = s = 0
    flag = tot = 0
    while tot < k and s < n:
        tot += nums[s]
        s += 1
        if tot == k:
            flag = 1
            print(r+1, s)
            break
        while tot > k and r <= s:
            tot -= nums[r]
            r += 1
        if tot == k:
            flag = 1
            print(r+1, s)
            break
    if flag == 0:
        print(-1)