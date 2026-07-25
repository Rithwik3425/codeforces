#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string vowels = "aoyeui";

    for (char c : s) {
        char lower_c = tolower(c);

        if (vowels.find(lower_c) == string::npos) {
            cout << '.' << lower_c;
        }
    }
    cout << '\n';

    return 0;
}