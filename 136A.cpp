#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> ans(n + 1);

    for (int giver = 1; giver <= n; giver++) {
        int receiver;
        cin >> receiver;
        ans[receiver] = giver; 
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}