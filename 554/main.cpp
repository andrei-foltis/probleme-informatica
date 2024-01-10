#include <iostream>

using namespace std;
struct date {
    int zi, luna, an;
} date[20];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> date[i].zi >> date[i].luna >> date[i].an;
    }
    int zi_min = 99, luna_min = 99, an_min = 99;
    for (int i = 0; i < n; i++) {
        if (date[i].zi < 9) {
            if (zi_min > date[i].zi - 9)
                zi_min = date[i].zi;
        } else if (zi_min > 9 - date[i].zi)
            zi_min = date[i].zi;
        if (zi_min < 0)
            zi_min = zi_min * (-1);
        if (luna_min > date[i].zi - 1)
            luna_min = date[i].luna;
        if (date[i].an < 2024) {
            if (an_min > date[i].an - 2024)
                an_min = date[i].an;
        } else if (an_min > 2024 - date[i].an)
            an_min = date[i].an;

    }
    cout<<zi_min<<" "<<luna_min<<" "<<an_min;
}
