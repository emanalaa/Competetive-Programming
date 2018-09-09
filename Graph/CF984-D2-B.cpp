#include<bits/stdc++.h>

using namespace std;
int n,m;
char arr[101][101];

bool valid(int i, int j)
{
    if ( i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

bool solve(int i, int j)
{
    int bombs = 0 ;
    if (valid(i,j+1) && arr[i][j+1] == '*')
      bombs++;
    if (valid(i,j-1) && arr[i][j-1] == '*')
        bombs++;
    if (valid(i-1,j+1) && arr[i-1][j+1] == '*')
      bombs++;
    if (valid(i-1,j-1) && arr[i-1][j-1] == '*')
      bombs++;
    if (valid(i-1,j) && arr[i-1][j] == '*')
      bombs++;
    if (valid(i+1,j+1) && arr[i+1][j+1] == '*')
      bombs++;
    if (valid(i+1,j-1) && arr[i+1][j-1] == '*')
      bombs++;
    if (valid(i+1,j) && arr[i+1][j] == '*')
      bombs++;
    if ( arr[i][j] == '.' && bombs == 0)
        return true;
    else if (arr[i][j]-'0' == bombs)
        return true;
    else
        return false;
}

int main()
{
    cin >> n >> m;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
            cin >> arr[i][j];
    }

    bool a = true;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if (arr[i][j] == '*')
                continue;
            else
                a = solve(i,j);
           if ( a == false)
           {
               cout << "NO" << endl;
               return 0;
           }
        }
    }
    cout << "YES" << endl;
    return 0;
}