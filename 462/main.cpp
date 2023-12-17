#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[21];
    cin.getline(s, 20);
    int n=strlen(s);

    if(strchr(s, 'a')) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') {
                for (int j = i; j < n; j++) {
                    s[j] = s[j + 1];
                }
                n--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << s[i];
        }
        cout<<"\n";
    }


    if(strchr(s, 'e')) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'e') {
                for (int j = i; j < n; j++) {
                    s[j] = s[j + 1];
                }
                n--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << s[i];
        }
        cout<<"\n";
    }


    if(strchr(s, 'i')) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'i') {
                for (int j = i; j < n; j++) {
                    s[j] = s[j + 1];
                }
                n--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << s[i];
        }
        cout<<"\n";
    }


    if(strchr(s, 'o')) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'o') {
                for (int j = i; j < n; j++) {
                    s[j] = s[j + 1];
                }
                n--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << s[i];
        }
        cout<<"\n";
    }
    if(strchr(s, 'u')) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'u') {
                for (int j = i; j < n; j++) {
                    s[j] = s[j + 1];
                }
                n--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << s[i];
        }
        cout<<"\n";
    }
}
