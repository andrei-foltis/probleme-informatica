#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char l[256], *p;
    cin.getline(l,255);
    p = strtok(l, " ");
    int ok=1;
    char cuvant[256];
    strcpy(cuvant, p);
    while (p)
    {
        char cuvant2[256];
        strcpy(cuvant2, p);
        int egal=1;
        for(int i=0; i<strlen(cuvant)&&i<strlen(cuvant2)&&egal==1; i++)
        {
            int c1=cuvant[i];
            int c2=cuvant2[i];
            if(c2>c1)
            {
                egal=0;
            }
            else if(c2<c1)
            {
                egal=0;
                ok=0;
            }
        }
        strcpy(cuvant, p);
        p = strtok(NULL, " ");
    }
    if(ok==1)
        cout<<"ordonate";
    else
        cout<<"dezordonate";
}
