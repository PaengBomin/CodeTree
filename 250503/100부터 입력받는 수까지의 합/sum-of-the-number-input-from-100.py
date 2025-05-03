arr=[]
arr=input().split()
n=int(arr[0])
sum=0
if n<=100:
    for i in range(n,101):
        sum+=i

print(sum)