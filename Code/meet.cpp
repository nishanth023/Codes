#include<bits/stdc++.h>
using namespace std;

int calcha(string mytime, int t)
{
    int mhour;
    mhour = 10 *(mytime[0 + t] - '0') + 1* (mytime[1 + t] - '0');
    if(mytime[6+t] == 'P'){if( mhour!= 12) mhour += 12;}
    if(mytime[6 + t] == 'A') {if(mhour == 12) mhour-= 12;}
    return mhour;
}
int calcma(string mytime, int t)
{
    int minute;
    minute = 10 *(mytime[3 + t] - '0') + (mytime[4 + t] - '0');
    return minute;
}

int main()
{
    long long test;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        string mytime; getline(cin, mytime);
        int mhour = calcha(mytime, 0);
        int minute = calcma(mytime, 0);
        long long number; cin>>number; cin.ignore();
        string res = "";
        while(number--)
        {
            string friendtime; getline(cin, friendtime);
            int fsh = calcha(friendtime, 0);
            int fsm = calcma(friendtime, 0);
            int feh = calcha(friendtime, 9);
            int fem = calcma(friendtime, 9);

            if((fsh> mhour)||(feh< mhour)) {res.push_back('0');}
            else if(fsh == mhour && fsm> minute) res.push_back('0');
            else if(feh == mhour && fem< minute) res.push_back('0');
            else res.push_back('1');
        }
        cout<<res<<"\n";       
    }
    return 0;
}
