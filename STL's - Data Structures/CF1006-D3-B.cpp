#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<pair<int,int> >p;
    int n,k;
    cin >> n >> k;

    int arr[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
        p.push({arr[i],i});
    }

    int counter = k, profit=0;
    priority_queue<int, vector<int>, greater<int> >j;
    while (counter > 0)
    {
        j.push(p.top().second);
        profit+=p.top().first;
        p.pop();
        counter--;
    }

    cout << profit << endl;
    int last = 0, c=0;
    while(j.size() > 1)
    {
        cout << j.top() + 1 - last << " ";
        c += (j.top()+1-last);
        last = j.top()+1;
        j.pop();
    }
    cout << n-c << endl;
    return 0;
}