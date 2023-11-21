#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int main()
{
    int m, n, v[51][51], a[51][51]={0};
    fin>>m>>n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            fin>>v[i][j];
        }
    }
    int m1, n1;
    fin>>m1>>n1;
    int nrc=0;
    int x=0, y=0;
    int i=0;
    while(m1>=1&&n1>=1&&m1<=m&&n1<=n)
    {
        nrc++;
        if(v[m1][n1]==1)
        {
            y=-1;
            x=-1;
        }
        if(v[m1][n1]==2)
        {
            y=-1;
            x=1;
        }
        if(v[m1][n1]==3)
        {
            x=1;
            y=1;
        }
        if(v[m1][n1]==4)
        {
            x=-1;
            y=1;
        }
        v[m1][n1]=0;
        a[m1][n1]++;
        m1=m1+y;
        n1=n1+x;
    }
    fout<<nrc<<" ";
    int nrmx=INT_MIN;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[i][j]>nrmx)
                nrmx=a[i][j];
        }
    }
    fout<<nrmx;
}
