
n=int(input())
arr=[5,4,3,2,1]
steps=0
i=0
while n>0:
    steps+=n//arr[i]
    n=n%arr[i]
    i+=1

print(steps)
