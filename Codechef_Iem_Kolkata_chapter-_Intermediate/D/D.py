for _ in range(int(input())):
    a,b,n=map(int,input().split())
    q=n//3
    r=n%3
    if r==0:
        print(a)
    elif r==1:
        print(b)
    else:
        print(a^b)
