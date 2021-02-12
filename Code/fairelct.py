for t in range(int(input())):
    number1,number2=map(int,input().split())
    a_list=list(map(int,input().split()))
    b_list=list(map(int,input().split()))
    
    first=0
    state=True
    while sum(a_list)<=sum(b_list):
        a_list.sort()
        b_list.sort()
        if a_list[0]<b_list[-1]  :
                simple=b_list[-1]
                b_list[-1]=a_list[0]
                a_list[0]=simple
                first+=1
        else:
                state=False
                print(-1)
                break
    if state==True:
    	print(first)
    
    
    
