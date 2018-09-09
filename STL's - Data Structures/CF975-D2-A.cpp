#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string>sets;
    for(int i=0 ; i<n ; i++)
    {
        string s, answer;
        cin >> s;
        bool arr[26] = {0};
        for(int j=0 ; j<s.size() ; j++)
        {
            arr[s[j]-'a'] =1;
        }
        for(int j=0 ; j<26 ; j++)
        {
            if (arr[j] == 1)
                answer+=(char)(j+'a');
        }
        sets.insert(answer);
    }
    cout << sets.size() << endl;
    return 0;
}