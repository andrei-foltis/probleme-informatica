#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[71], voc[]="aeiou";
    cin.getline(s, 70);
    for(int i=0; i<strlen(s); i++)
    {
        if (strchr(voc, s[i]))
        {
            if(s[i]==s[i+1])
            {
                cout<<s[i]<<s[i+1]<<" ";
                cout<<i<<" "<<i+1<<"\n";
            }
        }
    }
}
