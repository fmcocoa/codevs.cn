#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class SubExpr {
public:
    int term_count;
    string terms[20];

    SubExpr(string s) : term_count(0) {
        int pos;
        while ((pos = s.find('-', 1)) != -1 || (pos = s.find('+', 1)) != -1) {
            terms[term_count++] = s.substr(0, pos);
            s = s.substr(pos);
        }
        terms[term_count++] = s;
    }
};

int main() {
    string expr;

    cin >> expr;

    int pos = expr.find('=');
    string l_expr = expr.substr(0, pos);
    string r_expr = expr.substr(pos + 1);

    SubExpr left(l_expr);
    SubExpr right(r_expr);

    int l_x;
    int r_x;
    int l_c = 0;
    int r_c = 0;
    char x;

    for (int i = 0; i < left.term_count; i++) {
        if (isalpha(left.terms[i][left.terms[i].length() - 1])) {
            x = left.terms[i][left.terms[i].length() - 1];
            l_x = atoi((left.terms[i].substr(0, left.terms[i].length() - 1)).c_str());
        } else {
            l_c += atoi(left.terms[i].c_str());
        }
    }

    for (int i = 0; i < right.term_count; i++) {
        if (isalpha(right.terms[i][right.terms[i].length() - 1])) {
            r_x = atoi((right.terms[i].substr(0, right.terms[i].length() - 1)).c_str());
        } else {
            r_c += atoi(right.terms[i].c_str());
        }
    }

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(3);
    cout << x << '=' << (r_c - l_c) / (double)(l_x - r_x) << endl;

    return 0;
}
