#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());

    int subset_sum = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        subset_sum += a[i];
        count++;
        if (subset_sum > sum - subset_sum) {
            break;
        }
    }

    cout << count;
    return 0;
}
