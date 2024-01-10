#include <iostream>
using namespace std;
struct animale
{
    int cod;
    int nrExemplare;
    int varsta[10];
}s[21];
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i].cod;
        cin>>s[i].nrExemplare;
        cin>>s[i].varsta[0];
    }
    for(int i=0; i<n; i++){
        cout<<s[i].cod<<"\n";
        cout<<s[i].nrExemplare<<"\n";
        cout<<s[i].varsta[0]<<"\n";
    }
}
