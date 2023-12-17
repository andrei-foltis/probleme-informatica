#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[101], l[101];
    cin.getline(s, 100);
    cin.getline(l, 100);
    int n=strlen(s)-1, m=strlen(l)-1;
    char p[101];
    int j=0;
    bool ok=false, ok2=true;
    for(n; n>=0  && ok2==true; n--)
    {
        if(s[n]==l[m])
        {
            p[j]=s[n];
            ok=true;
        }
        else
        {
            ok2=false;
        }
        m--;
        j++;
    }
    char f[101];
    int k=0;
    for(int i=strlen(p)-1; i>=0; i--)
    {
        f[k]=p[i];
        k++;
    }
    if(ok==false)
        cout<<"fara sufix";
    else
        cout<<f;
}