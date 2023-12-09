#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[101], l[101];
    cin.getline(s, 100);
    cin.getline(l, 100);
    int n;
    char p[101];
    bool ok=false, ok2=true;
    if(strlen(s)<strlen(l))
    {
        n=strlen(s);
    }
    else
    {
        n=strlen(l);
    }
    for(int i=0; i<n && ok2==true; i++)
    {
        if(s[i]==l[i])
        {
            p[i]=s[i];
            ok=true;
        }
        else
        {
            ok2=false;
        }
    }
    if(ok==false)
        cout<<"fara prefix";
    else
        cout<<p;
}
