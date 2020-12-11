for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    for i in range(1,n-1):
        if arr[i]>arr[i-1] and arr[i]>arr[i+1]:
            print('YES')
            print(' '.join([str(i),str(i+1),str(i+2)]))
            break
    else:
        print('NO')

        
        
