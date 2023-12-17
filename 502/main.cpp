#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.get();
    char v[31][31], a[61][31];
    for(int i=0; i<n; i++)
    {
        cin.getline(v[i], 30);
    }
    int j=0;
    for(int i=0; i<n; i++)
    {
        char *p;
        p=strtok(v[i], " ");
        while(p)
        {
            strcat(a[j], p);
            j++;
            p=strtok(nullptr, " ");
        }
    }
    for(int i=0; i<2*n; i++)
    {
        cout<<a[i]<<"\n";
    }
    int perechi_nume=0;
    for(int i=0; i<2*n; i+=2)
    {
        bool ok=false;
        for(int p=i+2; p<2*n-2; p+=2)
        {
            if(strcmp(v[i], v[p])==0)
            {
                ok=true;
            }
        }
        if(ok)
        {
            perechi_nume++;
        }
    }
    int perechi_prenume=0;
    for(int i=1; i<2*n-2; i+=2)
    {
        bool ok=false;
        for(int p=i+2; p<2*n; p+=2)
        {
            if(strcmp(v[i], v[p])==0)
            {
                ok=true;
            }
        }
        if(ok)
        {
            perechi_prenume++;
        }
    }
    cout<<perechi_nume<<"\n"<<perechi_prenume;
}
