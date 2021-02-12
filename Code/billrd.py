for test in range(int(input())):
    norm,k,x_axis,y_axis=map(int,input().split())
    if x_axis==y_axis:
        print(norm,norm)
    else:
        d=[]
        if x_axis<y_axis:
            d=[[x_axis+norm-y_axis,norm],[norm,norm-y_axis+x_axis],[y_axis-x_axis,0],[0,y_axis-x_axis]]
        else:
            d=[[norm,y_axis+norm-x_axis],[y_axis+norm-x_axis,norm],[0,x_axis-y_axis],[x_axis-y_axis,0]]
        test=d[(k-1)%4]
        print(test[0],test[1])
