#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n, maxi=-1;
   cin >>n;

   map<string,int>m;
   string s, counter;
   cin >> s;

   for(int i=0 ; i<n-1 ; i++)
   {
       string a;
       a += s[i];
       a += s[i+1];
       m[a]++;
   }

   map<string,int>::iterator it;
   for(it = m.begin() ; it != m.end() ; it++)
   {
       if (it->second > maxi)
       {
           maxi = it->second;
           counter = it->first;
       }
   }
   cout << counter << endl;
   return 0;
}