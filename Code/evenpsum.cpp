#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(a==1 && b==1)
        {
            cout<<1<<endl;
            continue;
        }
        lli ans=0;
        lli even1=(int)a/2;
        lli even2=(int)b/2;
        lli odd1=(int)(a+1)/2;
        lli odd2=(int)(b+1)/2;
        ans=even1*even2+odd1*odd2;
        cout<<ans<<endl;
    }
    return 0;
}
