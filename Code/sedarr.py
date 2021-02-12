t=int(input())
for x in range(t):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    
    if(sum(l)%k==0):
        print(0)
    else:
        print(1)
