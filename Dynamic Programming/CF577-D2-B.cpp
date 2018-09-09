#include<bits/stdc++.h>

using namespace std;

long long  n,m;
long long arr[1000005];
vector<vector<long long> >p;
vector<vector<long long> >dp;
vector<long long>v;

int solve(int i, long long sum)
{
    v.push_back(sum);

    if ( i == n)
        return 0;

    if (dp[i][(sum+arr[i])%m] != -1)
        return dp[i][(sum+arr[i])%m];

    solve(i+1,sum+ arr[i]);
    solve(i+1,sum);

    dp[i][(sum+arr[i])%m] = sum;
}

int main()
{
    cin >> n >> m;
    int counter=0;

    if(n*m>1000000)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    dp.resize(n);

    for(int i=0 ; i<n ; i++)
    {
        dp[i].resize(m);
        fill(dp[i].begin(), dp[i].end(), -1);

        cin >> arr[i];
        if ( arr[i] == 0)
            counter++;
    }
    solve(0,0);
    for(int i=0 ; i<v.size() ; i++)
    {
        if (v[i] >= m && v[i] % m == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    if ( counter >= 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}