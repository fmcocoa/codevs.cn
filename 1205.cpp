#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int pos = s.length();
    for (int i = s.length() - 1; i >= 0; i--) {
        if (i == 0) {
            cout << s.substr(i, pos - i);
            break;
        } else if (s[i] == ' ') {
            cout << s.substr(i + 1, pos - i - 1) << ' ';
            pos = i;
        }
    }

    return 0;
}
