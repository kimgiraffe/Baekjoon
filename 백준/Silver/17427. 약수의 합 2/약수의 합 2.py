n=int(input())
print(sum(k*(n//k)for k in range(1,n+1)))