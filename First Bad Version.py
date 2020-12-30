class Solution:
    def foo(self, l, r, lv, li):
        mid = (l+r)//2
        cv = isBadVersion(mid)
        if abs(li-mid) == 1 and lv^cv == 1:
            if cv:
                return mid
            return li
        elif cv == 1:
            return self.foo(l, mid, cv, mid)
        return self.foo(mid, r, cv, mid)

    def firstBadVersion(self, n):
        mid = (1+n)//2
        cv = isBadVersion(mid)
        if cv == 1:
            return self.foo(1, mid-1, cv, mid)
        return self.foo(mid+1, n, cv, mid)