#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, height;
    cin >> n >> height;

    for(int i=1 ; i<n ; i++)
        cout << fixed << setprecision(12) << height * sqrt(i/n) << " ";
    cout << endl;
    return 0;
}