#include <bits/stdc++.h>

using namespace std;

long long nCr(long long n, long long r)
{
    long long answer = 1;
    for(long long i=1 ; i<=r; i++)
    {
        answer *= n-i+1;
        answer /= i;
    }
    return answer;
}

int main()
{
    int boys, girls, group;
    cin >> boys >> girls >> group;

    long long answer = 0;
    for(int i=4 ; i<group ; i++)
        answer += nCr(boys,i)*nCr(girls,group-i);

    cout << answer << endl;
    return 0;
}