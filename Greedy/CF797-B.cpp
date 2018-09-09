#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    int arr[n], positive = 10001, negative = -1*10001;
    for(int i=0 ; i<n; i++)
    {
        cin >> arr[i];
        if ( arr[i] > 0)
            sum+=arr[i];
        if ( arr[i] > 0 && arr[i] % 2 != 0 && arr[i] < positive)
            positive  = arr[i];
        else if ( arr[i] < 0 && arr[i] % 2 != 0 && arr[i] > negative)
            negative = arr[i];
    }
    if (sum % 2 == 0)
    {
        cout << max(sum-positive, sum+negative) << endl;
        return 0;
    }
  cout << sum << endl;
 return 0;
}