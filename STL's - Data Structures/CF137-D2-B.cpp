#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int>m;
    int n;
    cin >>n;
    for(int i=0 ; i<n ; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    int counter=0;
    for(int i=1 ; i<=n ; i++)
    {
        if (m[i] == 0)
            counter++;
    }
    cout << counter << endl;
    return 0;
}