import sys
n , m = map(int, sys.stdin.readline().split(" "))
dp = [[0 for i in range(101)] for j in range(101)]
for i in range(1,101):
    dp[i][0] = 1
    dp[i][i] = 1
for i in range(2,101):
    for t in range(1,i):
        dp[i][t] = dp[i-1][t-1] + dp[i-1][t]
print(dp[n][m])