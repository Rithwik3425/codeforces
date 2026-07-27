#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> arr(n, vector<int>(4));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 4; ++j) {
                cin >> arr[i][j];
            }
        }

        int maxLen = 0;

        for(int i = 0; i < n; i++) {
            int leftRank = i;
            int rightRank = n-i+1;

            if((leftRank < arr[i][0] || leftRank > arr[i][1]) && (rightRank < arr[i][2] || rightRank > arr[i][3])) {
                maxLen++;
            }
        }
        cout << maxLen << "\n";
    }
    return 0;
}