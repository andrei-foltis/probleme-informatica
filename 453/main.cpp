#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[51];
    cin.getline(s, 50);
    for(int i=1; i<=strlen(s); i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<s[j];
        }
        cout<<"\n";
    }
}
