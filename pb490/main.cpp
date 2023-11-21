#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char l[21];
    cin.getline(l, 20);
    bool ok=false;
    int j=strlen(l)-1;
    while(j>=0 && ok==false)
    {
        if(strchr("aeiou", l[j])==NULL)
        {
            ok=true;
        }
        if(ok==false)
            j--;
    }
    ok=false;
    int i=0;
    while(i<strlen(l) && ok==false)
    {
        if(strchr("aeiou", l[i])!=NULL)
        {
            ok=true;
            int aux=l[i];
            l[i]=l[j];
            l[j]=aux;
        }
        if(ok==false)
            i++;
    }
    cout<<l;
}
