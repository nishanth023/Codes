#include<bits/stdc++.h>
#define data long long int 
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    IOS
    
    data n;
    cin>>n;
    for(data i=10;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    
    
    return 0;
}
