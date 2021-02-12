t=int(input())
for _ in range(t):
    s=input()
    x=len(s)//3
    f={}
    for i in range(len(s)):
        if(s[i] in f):
            f[s[i]]+=1
        else:
            f[s[i]]=1
    p=0
    for i in f.values():
        p+=i//2
    ans=min(p,x)
    print(ans)
