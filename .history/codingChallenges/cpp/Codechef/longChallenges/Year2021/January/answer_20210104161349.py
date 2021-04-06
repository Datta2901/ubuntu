def solve(l,k):
    	n = len(l)
	dp = [0]*(k+1)
	s = sum(l)
	dp[0] = 1
	for i in range(n):
	    for j in range(k,l[i]-1,-1):
			dp[j] += dp[j-l[i]]
	return 2**n - 2*sum(dp)