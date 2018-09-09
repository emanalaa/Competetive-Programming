#include <bits/stdc++.h>

using namespace std;

int main()
{
    double k,n,s,p;
    cin>> k >> n >> s >> p;

    int sheets = ceil(n/s);
    sheets = sheets * k;

    int packs= sheets/p;
    while(true)
    {
        if ( p*packs >= sheets )
        {
            cout << packs << endl;
            return 0;
        }
        packs++;
    }
    return 0;
}