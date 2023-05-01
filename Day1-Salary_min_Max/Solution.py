def average(salary):
        mn = 1000000000
        mx = -1
        ans = 0
        for i in range(len(salary)):
            mn = min(mn,salary[i])
            mx = max(mx,salary[i])
            ans += salary[i]
        ans = ans - mn - mx
        ans = float(ans)
        ans = ans/(len(salary)-2)
        return ans