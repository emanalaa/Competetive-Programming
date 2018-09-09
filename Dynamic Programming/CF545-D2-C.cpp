#include <bits/stdc++.h>
using namespace std;

int n;
pair<long long, long long>p[100001];
int dp[100001][4];

int solve(int i, int counter, long long last, short r)
{
    if (i == n-1)
        return counter;

    if (dp[i][r] != -1)
        return dp[i][r];

    int a=-1,b=-1,c=-1;

    if (last < p[i].first-p[i].second)
        a = solve(i+1, counter+1, p[i].first, 0);

    if (p[i+1].first > p[i].first + p[i].second)
        b = solve(i+1, counter+1, p[i].first+p[i].second, 1);

    c = solve(i+1, counter, p[i].first, 2);

    return dp[i][r] = max(a,max(b,c));
}

int main()
{
    cin >> n;
    memset(dp, -1, sizeof dp);
    memset(p,   -1,   sizeof p);
    for(int i=0 ; i<n ; i++)
        cin >> p[i].first >> p[i].second;

    cout << solve(1, 1, p[0].first, 0)+1 << endl;
    return 0;
}