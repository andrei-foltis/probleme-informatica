#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char l[256], *p;
    cin.getline(l, 255);
    p=strtok(l, ",.;!? ");
    int cm=0;
    char s[256]="";
    while(p)
    {

        if(strlen(p)>cm)
        {
            cm=strlen(p);
            strcpy(s, p);
        }
        else if(strlen(p)==cm && strcmp(s, p)>0)
        {
            strcpy(s, p);
        }
        p=strtok(NULL, ",.;!? ");
    }
    cout<<s;
}
