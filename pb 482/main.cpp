#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char l[256], *p;
    cin.getline(l, 255);
    char cuvant[256];
    cin.getline(cuvant, 255);
    p=strtok(l, " ");
    int nr_aparitii=0;
    while(p)
    {
        if(strcmp(cuvant, p)==0)
            nr_aparitii++;
        p=strtok(NULL, " ");
    }
    cout<<nr_aparitii;
    return 0;
}
