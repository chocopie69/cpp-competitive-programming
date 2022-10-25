#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,chu="";
    getline(cin,s);
    s = s + " ";
    int k = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
        {
            if(i > 0 && s[i-1] != ' ')
            {
                k++;
                chu = "";
            }
        } else
        {
            chu+=s[i];
        }
    }
    cout << k << endl;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
        {
            if(i > 0 && s[i-1] != ' ')
            {
                cout << chu << endl;
                chu = "";
            }
        } else
        {
            chu+=s[i];
        }
    }
}
