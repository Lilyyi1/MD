#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s, pieces;
    while(1) {
        s.clear(), pieces.clear();
        while(cin >> pieces, pieces != "-") {
           if(s.length() != 1 && !(s[s.length() - 1] == ' ' || pieces[0] == ' '))
               pieces = " " + pieces;
           s += pieces;
        }
        cout << s << endl;
        puts("Waiting for next input...");
    }
    return 0;
}
