#include<bits/stdc++.h>

using namespace std;

string toBinary(long long num)
{
    string s;
    while(num>0)
    {
        s+=(num%2)+'0';
        num/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    int arr[m], player;
    for(int i=0 ; i<m ; i++)
        cin >> arr[i];
    cin >> player;

    int friends =0 ;
    for(int j=0 ; j<m ; j++)
    {
        string s = toBinary(arr[j]^player);
        int counter=0;
        for(int h=0 ; h<s.size() ; h++)
        {
            if (s[h] == '1')
                counter++;
        }
        if ( counter <= k)
            friends++;
    }
    cout << friends << endl;
    return 0;
}