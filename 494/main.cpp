#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char voc[]="aeiou", s[256];
    cin.getline(s, 255);
    for(int i=0; i<strlen(s); i++)
    {
        if(strchr(voc, s[i]) && islower(s[i])!=0)
        {
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
}
