def mergeAlternately(a, b):
        n = len(a)
        m = len(b)
        i = 0
        j = 0
        ans = ""
        while i < n or j < m:
            if i < n:
                ans += a[i]
                i+=1
            if j < m:
                ans += b[j]
                j+=1
        return ans 

a = "abc"
b = "pqrst"        
print(mergeAlternately(a,b))