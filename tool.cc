#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

string s[50];

int main()
{
    for(int i = 1; i <= 48; ++i) {
        getline(cin, s[i]);
        //[^n]:
        string temp;
        int p = 0;
        while(s[i][p] != ' ') {
            temp += s[p];
            ++p;
        }
        string after;
        ++p;
        for(p; p != s[i].length() - 1; ++p)
            after += s[i][p];
        s[i] = "[^" + temp + "]:" + after;
    }
    
    freopen("output.txt", "w", stdout);
    for(int i = 1; i <= 48; ++i)
        cout << s[i] << endl;
    return 0;
}
