#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >>s;

    if (s.size() < 3)
    {
        cout << "No" << endl;
        return 0;
    }
    
    map<string,int>m;
    for(int i=0 ; i<s.size()-2 ; i++)
    {
        string a = s.substr(i,3);
        m[a]++;
    }

    if (m["ABC"] || m["ACB"] || m["BAC"] || m["BCA"] || m["CAB"] || m["CBA"])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}