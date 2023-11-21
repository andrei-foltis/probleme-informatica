#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char l[256], *p;
    cin.getline(l,255);
    char cuvant[256];
    cin.getline(cuvant, 255);
    p = strtok(l, " ");
    while(p)
    {
        cout<<p;
        if(strcmp(p, cuvant)==0)
            cout<<"*";
        cout<<" ";
        p=strtok(NULL, " ");
    }
}
