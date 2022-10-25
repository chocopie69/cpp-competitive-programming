#include <bits/stdc++.h>
using namespace std;

int cnt[10];

int main(){
    string s;
    getline(cin,s);
    for (int i=0;i<s.size();i++){
        if(int(s[i]) - 48 >= 0 && int(s[i]) - 48 <= 9)
        {
            cnt[ int(s[i]) - 48 ] ++;
        }
    }
    for(int i=0;i<=9;i++)
    {
        cout << cnt[i] << " ";
    }
}
