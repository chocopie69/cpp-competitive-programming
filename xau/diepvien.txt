#include <bits/stdc++.h>
using namespace std;

int posX[9] = {0,-1,1,0,0,1,-1,-1,1};
int posY[9] = {0,0,0,1,-1,1,-1,1,-1};

int main()
{
    bool flag = false;
    int n,x,y,curX = 0, curY = 0;
    cin >> x >> y >> n;
    string s;
    cin >> s;
    s = " "+s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'D')
        {
            curY--;
        }
        else if(s[i] == 'L')
        {
            curX--;
        }
        else if(s[i] == 'U')
        {
            curY++;
        }
        else if(s[i] == 'R')
        {
            curX++;
        }
        for(int j=0;j<9;j++)
        {
            if(x + posX[j] == curX && y+posY[j] == curY)
            {
                cout << i << endl;
                flag = true;
                break;
            }
        }
    }
    if(flag == false) cout << -1;
}
