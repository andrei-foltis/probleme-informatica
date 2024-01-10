#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main() {
    ifstream fin("date.txt");
    char v[21][101];
    int k=0, n=0;
    while(!fin.eof()){
        char ch;
        fin>>ch;
        v[k][0]=ch;
        int i=1;
        while(ch!='\n' && !fin.eof()){
            fin>>ch;
            v[k][i]=ch;
            i++;
        }
        n++;
        k++;
    }
    fin.close();

    for(int i=0; i<n; i++)
    {for(int j=0; j<strlen(v[i]); j++)
            cout<<v[i][j];
        cout<<'\n';
    }

    ofstream fout("date.txt");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<strlen(v[i]); j++)
        {
            if(j>0 && isupper(v[i][j])!=0)
            {
                v[i][j]=tolower(v[i][j]);
            }

        }
    }
    for(int i=0; i<n; i++)
        {for(int j=0; j<strlen(v[i]); j++)
            cout<<v[i][j];
        cout<<'\n';
    }
}
