#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char v[101][21];
    int n;
    cin>>n;
    cin.get();
    for(int i=0; i<n; i++)
    {
        cin.getline(v[i], 20);
    }
    bool ok=true;
    for(int i=0; i<n-1 && ok; i++)
    {
        if(v[i][strlen(v[i])-1]!=v[i+1][1] || v[i][strlen(v[i])-2]!=v[i+1][0])
        {
            ok=false;
        }
    }
    if(ok)
    {
        cout<<"fazan";
    }
    else
    {
        cout<<"papagal";
    }



}
