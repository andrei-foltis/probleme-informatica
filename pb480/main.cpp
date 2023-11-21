#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char l[256], *p, s[256]="";
    cin.getline(l, 255);
    p=strtok(l, ",.;!? ");
    while(p)
    {

        int i=0, j=0;
        if(strlen(s)>0)
        {
            char *p2=strtok(s, " ");
            while(p2)
            {
                int c=strcmp(p,p2);
                if(c<0)
                {
                    strcat(s+j, " ");
                    strcpy(s+j+1, p);
                    strcat(s, " ");
                    strcat(s, p2);
                    i=i+strlen(p)+strlen(p2)+2;

                }
                else if (c==0)
                {
                    strcat(s, " ");
                    strcat(s, p);
                    i=i+strlen(p)+strlen(p2)+2;

                }
                else
                {
                    j=i;
                    i=i+strlen(p2)+1;
                }


                p2=strtok(NULL, " ");
            }
        }
        else
            strcpy(s, p);

        p=strtok(NULL, ",.;!? ");
    }
    cout<<s;

}
