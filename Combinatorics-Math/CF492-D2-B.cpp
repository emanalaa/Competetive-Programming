#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lanterns, length;
    cin >> lanterns >> length;

    int arr[lanterns];
    for(int i=0 ; i<lanterns ; i++)
        cin >> arr[i];

    sort(arr,arr+lanterns);

    float a=-1,b=-1, c=-1;
    if (arr[0] != 0)
        a = arr[0];
    if (arr[lanterns-1] != length)
        b = length - arr[lanterns-1];
    for(int i=1 ; i<lanterns ; i++)
    {
        if (arr[i]-arr[i-1] > c)
            c = arr[i]-arr[i-1];
    }

    cout << setprecision(9) << fixed << max(a,max(b,c/2)) << endl;
    return 0;