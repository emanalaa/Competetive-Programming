#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[27] = {0};
    int n,k;
    cin >> n >> k;
    char c;
    for(int i=0 ; i<n ; i++)
    {
        cin >> c;
        arr[c-'a']++;
    }

    string s;
    int last = -2, counter=0;
    for(int i=0 ; i<26 ; i++)
    {
        if (s.size() == k)
            break;
        if (arr[i] == 0)
            continue;
        if (i-last == 1)
            continue;
        else
        {
            s+=char(i+'a');
            counter+=(i+1);
            last = i;
        }
    }
    if (s.size() == k)
        cout << counter << endl;
    else
        cout << -1 << endl;
    return 0;
}