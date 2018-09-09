#include <bits/stdc++.h>
using namespace std;

const long long z = 1000000007;
long long fast_pow(short x, long long y)
{
    if (y == 0)
        return 1;
    long long c = fast_pow(x,y/2)%z;
    if (y % 2 == 0)
        return ((c%z)* (c%z))%z;
    else
        return ((x%z)*(c%z)*(c%z))%z;
}

int main()
{
    long long n;
    cin >> n;

    long long answer = fast_pow(2,n);
    cout << ((answer*(answer+1))/2)%z << endl;
    return 0;
}