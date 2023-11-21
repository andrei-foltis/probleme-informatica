#include <iostream>

using namespace std;

int main()
{
    #include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char l[256], *p;
    cin.getline(l,255);
    p = strtok(l, " ");
    int ok=1;
    char cuvant[]=p;
    while (p)
    {
        char cuvant2[]=p;
        for(int i=0; i<strlen(cuvant)&&i<strlen(cuvant2); i++)
        {
                cout<<cuvant[i]<<" "<<cuvant2[i]<<"\n";
        }
        p = strtok(NULL, " ");
    }
}
}
