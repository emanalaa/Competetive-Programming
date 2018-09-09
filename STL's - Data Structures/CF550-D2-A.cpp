#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    map<string,vector<pair<int,int>> >m;
    for(int i=0 ; i<s.size()-1 ; i++)
    {
       m[s.substr(i,2)].push_back({i,i+1});
    }

    if (m["BA"].size() == 0 || m["AB"].size() == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    for(int i=0 ; i<m["AB"].size() ; i++)
    {
        for(int j=0 ; j<m["BA"].size() ; j++)
        {
            if (m["BA"][j].first != m["AB"][i].second && m["BA"][j].second != m["AB"][i].first)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}