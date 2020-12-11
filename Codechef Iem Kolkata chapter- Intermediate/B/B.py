a=input().lower()
b=input().lower()
if a==b:
    print(0)
    quit()
l=[a,b]
l.sort()
if l[0]==a:
    print(-1)
else:
    print(1)
