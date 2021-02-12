#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    long long test_case,number,xor_no,array_value[100001],base=30;
    scanf("%lld",&test_case);
    while(test_case--){
    scanf("%lld %lld",&number,&xor_no);
    if(number==2)
    {
    scanf("%lld %lld",&array_value[0],&array_value[1] );
    if(array_value[0]==0)
    {
        if (xor_no%2!=0)
        {
            array_value[0]=1;
            array_value[1]=array_value[1]^1;
        }
    }
    else
    {
    while (xor_no-- > 0)
    {
        int p = int(log(array_value[0]) / log(2));
        array_value[0] = array_value[0] ^ (int) pow(2, p);
        array_value[1] = array_value[1] ^ (int) pow(2, p);
        if (array_value[0]==0) break;
    }
    if (xor_no>0&&xor_no%2!=0)
    {
        array_value[0]=1;
        array_value[1]=array_value[1]^1;
    }
    }
    }



    else
    {
    vector<vector<long long>>idx(base+1);
    for(long long i=0;i<number;i++){
        scanf("%lld",&(array_value[i]));
        if(i==number-1)continue;
        for(long long j=base;j>=0;j--)if (array_value[i]&(1LL<<j)){
            idx[j].push_back(i);
        }
    }
    vector<long long> cnt(base+1,0);
    for(long long i=0;i<number-1;i++){
        for(long long j=base;j>=0;j--){
            long long mask =1LL<<j;
            if((array_value[i]&mask)==0)continue;
            array_value[i]^=mask;
            long long d;
            if(++cnt[j]<idx[j].size()){
                d= idx[j][cnt[j]++];
            }else d=number-1;
            array_value[d]^=mask;
            if(--xor_no==0)break;
        }
        if(xor_no==0)break;
    }
    }
        for (int i=0;i<number;i++)
        cout << array_value[i] << " ";

    }

}
