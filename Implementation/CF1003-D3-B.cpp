#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,x;
    cin >> a >> b >> x;

    string s;
    int c=a,d=b;
    if ( b > a)
    {
        s+='1';
        d--;
    }
    else
    {
        s+='0';
        c--;
    }
    int i=0;
    while(x-1 > 0)
    {
        if (s[i] == '0')
        {
            s+='1';
            d--;
        }
        else
        {
            s+='0';
            c--;
        }
        x--;
        i++;
    }
    if (s[s.size()-1] == '0')
    {
        while ( c > 0)
        {
            s+='0';
            c--;
        }
        while(d > 0)
        {
            s+='1';
            d--;
        }
    }
    else 
    {
        while(d > 0)
        {
            s+='1';
            d--;
        }
        while ( c > 0)
        {
            s+='0';
            c--;
        }
    }
    cout << s << endl;
    return 0;
}