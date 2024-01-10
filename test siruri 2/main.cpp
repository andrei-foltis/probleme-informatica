#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[101]="", *p, l[101]="";
    cin.getline(s, 100);
    p=strtok(s, " ");
    while(p)
    {
        if(p[0]!='-')
        {
            strcat(l, p);
            strcat(l, " ");
        }
        p=strtok(nullptr, " ");
    }
    cout<<l;
}
