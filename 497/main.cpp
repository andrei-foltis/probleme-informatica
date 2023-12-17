#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.get();
    char v[100][21];
    for(int i=0; i<n; i++)
    {
        cin.getline(v[i],20);
    }
    for(int i=0; i<n-1; i++)
    {
        int k=0;
        for(int j=i+1; j<n; j++)
        {
            bool ok=true;
            if(strlen(v[i])==strlen(v[j]))
            {
                for(int d=0; d<strlen(v[i]); d++)
                {
                    if(!strchr(v[i], v[j][d]))
                        ok=false;
                }

            }
            else
            {
                ok=false;
            }
            if(ok)
            {
                char aux[21]="";
                strcpy(aux, v[j]);
                strcpy(v[j], v[i+k+1]);
                strcpy(v[i+k+1], aux);
                k++;
            }
        }
        i=i+k;
    }
    for(int i=0; i<n; i++)
    {

        cout<<v[i]<<" ";
        bool ok=true;
        if(strlen(v[i])==strlen(v[i+1]))
        {
            for(int d=0; d<strlen(v[i]); d++)
            {
                if(!strchr(v[i], v[i+1][d]))
                    ok=false;
            }

        }
        else
        {
            ok=false;
        }
        if(!ok)
            cout<<"\n";

    }
}
