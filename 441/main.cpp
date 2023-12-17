#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[256], *p;
    cin.getline(s, 255);
    p=strtok(s, " ");
    int q, nr=0;
    cin>>q;
    while (p)
    {
        if(strlen(p)==q)
        {
            nr++;
        }
        p=strtok(NULL, " ");
    }
    cout<<nr;
}
