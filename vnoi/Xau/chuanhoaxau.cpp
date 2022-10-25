#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    while(s[0] == ' ')
    {
        s.erase(0,1);
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
        {
            if(s[i] == s[i+1]) s.erase(i,1);
        }
        else
        {
            if(i == 0 || s[i-1] == ' ') {
                s[i] = toupper(s[i]);
            } else s[i] = tolower(s[i]);
        }
    }
    cout << s;
}

