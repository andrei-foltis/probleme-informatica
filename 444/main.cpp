#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[21];
    cin.getline(s, 20);
    for(int i=0; i<strlen(s); i++)
    {
        if(strchr("aeiou", s[i]))
        {
            s[i]='*';
        }
    }
    cout<<s;
}
