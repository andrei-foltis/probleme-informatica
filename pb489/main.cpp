#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream fin("date.in");
int main()
{
    char s[256], *p;
    int v[100], cm=0;
    while(fin.getline(s, 255))
    {
        p=strtok(s, " ");
        int i=0;
        while(p)
        {

            bool ok=true;
            for(int i=0; i<strlen(p) && ok==true; i++)
            {
                //if(isdigit(p[i])==0)
                //{
                  //  ok=false;
                //}
                if(strchr("0123456789.,",p[i])==NULL)
                    ok=false;
            }
            if(ok==true)
            {
                i++;
            }
            p=strtok(NULL, " ");
        }
        cout<<i<<"\n";
        if(cm<i)
        {
            cm=i;
        }
    }
    cout<<cm;

}
