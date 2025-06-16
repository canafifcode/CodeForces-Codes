#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, int> target_counts;
        target_counts[0] = 3;
        target_counts[1] = 1;
        target_counts[2] = 2;
        target_counts[3] = 1;
        target_counts[5] = 1;

        map<int, int> current_counts;
        int result = 0;

        for (int i = 0; i < n; i++) {
            current_counts[a[i]]++;

            bool complete = true;
            for (const auto& pair : target_counts) {
                if (current_counts[pair.first] < pair.second) {
                    complete = false;
                    break;
                }
            }

            if (complete) {
                result = i + 1;
                break;
            }
        }

        cout << (result > 0 ? result : 0) << endl;
    }
}