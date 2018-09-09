#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;
   deque<int>d;

   for(int i=0 ; i<n ; i++)
   {
       int x;
       cin >> x;
       d.push_back(x);
   }
   sort(d.begin(),d.end());

   if (d.size() == 1)
   {
       cout << d.front() << endl;
       return 0;
   }
   else if (d.size() == 2)
   {
       cout << d.front() << endl;
       return 0;
   }

   while(d.size() >=2 )
   {
        if (d.size() > 1)
            d.pop_back();
        if (d.size() > 1)
            d.pop_front();
   }

  cout << d.front() << endl;

   return 0;
}