num = int(input())
def split(valn): 
    return [char for char in valn]  

while (num>=1):
    num_val = int(input())
    val = input()
    ans=split(val)
    count = 0
    for i in range(num_val-1):
        if(ans[i]=='1'):
            count=count+1
        else:
            continue
    days = 120-num_val
    pres = (days+count)*100/120
    if(pres>=75):
        print("YES")
    else:
        print("NO")
        
    num=num-1
