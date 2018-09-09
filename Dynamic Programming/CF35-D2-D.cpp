#include<bits/stdc++.h>

using namespace std;
long long tons, n;

int arr[101];
int dp[101][50500];

int solve(int i, long long sum)
{
    if (i == n && sum <= tons)
        return 0;
    else if ( sum > tons )
        return -300;

    if (dp[i][sum] != -1)
        return dp[i][sum];

    int c1 = solve(i+1,sum+(arr[i]*(n-i)))+1;
    int c2 = solve(i+1,sum);

    return dp[i][sum] = max(c1,c2);
}

int main()
{
    ifstream input;
    ofstream output;
    input.open("input.txt");
    output.open("output.txt");

    memset(dp,-1,sizeof dp);

    input >> n >> tons;
    for(int i=0 ; i<n ; i++)
        input >> arr[i];
    input.close();
    int x = solve(0,0);
    if (x < 0)
        output << 0<< endl;
    else
        output << x << endl;
    output.close();
    return 0;
}