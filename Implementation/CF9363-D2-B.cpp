#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n], sum[n]={0};
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
        if ( i == 0)
            sum[i] = arr[i];
        else
            sum[i] = sum[i-1]+arr[i];
    }

    int index = 0, mini = sum[k-1];
    for(int i=1 ; i<n-k+1 ; i++)
    {
        if (sum[i+k-1] - sum[i-1] < mini)
        {
            mini = sum[i+k-1]-sum[i-1];
            index = i;
        }
    }
    cout << index+1 << endl;
    return 0;
}