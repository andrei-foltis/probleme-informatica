#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[256], x[21], y[21], *p, l[256]="";
    cin.getline(s, 255);
    cin.getline(x, 20);
    cin.getline(y,20);
    p=strtok(s, " ");
    for(int i=0; i<strlen(x); i++)
    {
        x[i]=tolower(x[i]);
    }
    while(p)
    {
        char aux[21]="";
        strcpy(aux, p);
        for(int i=0; i<strlen(aux); i++)
        {
            aux[i]=tolower(aux[i]);
        }
        if(strcmp(x, aux)==0)
        {
            strcat(l, y);
        }
        else
        {
            strcat(l, p);
        }
        strcat(l, " ");
        p=strtok(nullptr, " ");
    }
    cout<<l;
}
