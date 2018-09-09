#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[101]={0};
    for(int i=0 ; i<n ; i++)
    {
       int x;
       cin >> x;
       arr[x]++;
    }

    int counter=0;
    for(int i=1; i<101; i++)
    {
        if (arr[i]-counter>0)
            counter+= arr[i]-counter;
    }
    cout << counter << endl;
    return 0;
}