#include <bits/stdc++.h>
using namespace std;

int main() {

int test_case;
cin>>test_case;
while(test_case--){
int first_number,second_number;
cin>>first_number>>second_number;
if(first_number==second_number)
{
for(int i=0;i<first_number;i++)
cout<<(i+1)<<" ";
cout<<endl;
}
else
{
int arr[first_number];
if(first_number&1){
for(int i=0;i<first_number;i++)
arr[i]= (i+1)*pow(-1,i+2);

}
else
{
for(int i=0;i<first_number;i++)
arr[i]= (i+1)*pow(-1,i+1);

}
int sum=1,count,difference=0;
count=ceil((double)first_number/2);
for(int i=1;i<first_number;i++)
{
sum+=arr[i];
if(sum>0)
{
if(count<second_number)
{
    difference=second_number-count;
for(int j=first_number-1;j>=0;j--)
{
if(arr[j]<0){
arr[j]= arr[j]*-1;

count++;
if(count==second_number)
break;
}
}
}
else if(count>second_number)
{
difference=count-second_number;
for(int j=first_number-1;j>=0;j--)
{
if(arr[j]>0){
arr[j]= arr[j]*-1;

count--;
if(count==second_number)
break;
}
}
}
}
}
for(int i=0;i<first_number;i++)
cout<<arr[i]<<" ";
cout<<"\n";

}
}
return 0;
}

