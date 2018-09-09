#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[n], sum=0, sum1=0, maxi = -1;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    int i=0, j=n-1;
    sum = arr[0];
    sum1 = arr[n-1];
    while(i < j)
    {
        if(sum < sum1)
        {
            i++;
           sum += arr[i];
        }
        else if (sum > sum1)
        {
            j--;
            sum1 += arr[j];
        }
        else if (sum == sum1)
        {
            maxi = sum;
            i++;
            sum += arr[i];
        }
    }
    if (sum1 == sum && sum < maxi)
        cout << sum << endl;
    else if ( maxi != -1)
        cout << maxi << endl;
    else
        cout << 0 << endl;
    return 0;
}