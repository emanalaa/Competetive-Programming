#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n],counter=0;
    for(int i=0 ; i<n ; i++)
        cin >> arr[i];

    for(int i=0 ; i<n-1 ; i++)
    {
        if (arr[i]+arr[i+1] < k)
        {
            counter+= (k-(arr[i]+arr[i+1]));
            arr[i+1] = k-arr[i];
        }
    }
    cout << counter << endl;
    for(int i=0 ; i<n ; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}