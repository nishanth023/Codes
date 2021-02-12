#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long int n,i,ans=0;
       cin>>n;
       long long int arr[n];
       long long int max=0,min=0;
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       min=arr[0];
       max=arr[0];
     for(i=0;i<n;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
    if(arr[i]<min)
    {
        min=arr[i];
    }
}
ans=max-min;
ans=ans*2;
cout<<ans<<endl;
   }
    return 0;
}
