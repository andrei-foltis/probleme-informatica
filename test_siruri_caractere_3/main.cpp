#include <iostream>
#include <cstring>
//#include <fstream>
using namespace std;
//ifstream fin("date.in");
//ofstream fout("date.out");
int main() {
    char s[256], *p, v[30][21];
   // fin.getline(s, 255);
   strcpy(s,"***ion*avion*pinion***ion**avion*ion**");
    p=strtok(s, "*");
    int i=0, n=0;
    while(p)
    {
        n++;
        strcpy(v[i], p);
        p=strtok(nullptr, "*");
        i++;
    }
    while(n>1)
    {
        for(int k=1; k<n; k++)
        {
            if(strcmp(v[0], v[k])==0)
            {
                for(int d=k; d<n-1; d++)
                {
                    strcpy(v[d], v[d+1]);
                }
                n--;
                k--;
            }
        }
        if(n>1)
        {
            for(int d=0; d<n-1; d++)
            {
                strcpy(v[d], v[d+1]);
            }
            n--;
        }
    }

    cout<<v[0];

}
