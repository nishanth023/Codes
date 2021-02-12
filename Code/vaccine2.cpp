#include<bits/stdc++.h>
using namespace std;
int main()
{
    short int test_case;
    cin>>test_case;
    while(test_case--)
    {
        long long  days,number;
        cin>>number>>days;
        int vaccine[number];
        for(int loop=0;loop<number;loop++)
        {
            cin>>vaccine[loop];
        }
        long long at_risk=0,not_at_risk=0;
        for(int loop2=0;loop2<number;loop2++)
        {
            if(vaccine[loop2]>=80 || vaccine[loop2]<=9)
            {
                at_risk++;
            }
            else
            {
                not_at_risk++;
            }
        }
        long long total_days=ceil((double)at_risk/(double)days)+ceil((double)not_at_risk/(double)days);
        cout<<total_days<<endl;
    }
        return 0;

}
