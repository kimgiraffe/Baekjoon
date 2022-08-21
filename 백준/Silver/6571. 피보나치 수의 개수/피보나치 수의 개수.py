dp = [0 for i in range(1001)]
dp[1] = 1
dp[2] = 2
for i in range(3,1001,1):
  dp[i] = dp[i - 1] + dp[i - 2]

while 1:
  a,b = map(int,input().split())
  if a==0 and b==0:
    break
  cnt = 0
  for i in range(1,1001,1):
    if a <= dp[i] and dp[i] <= b:
      cnt+=1
  print(cnt)