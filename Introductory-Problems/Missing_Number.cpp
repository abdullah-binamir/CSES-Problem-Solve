#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    // 1 to n sum formula: n * (n + 1) / 2
    long long expected_sum = n * (n + 1) / 2;
    long long actual_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        actual_sum += x;
    }

    cout << (expected_sum - actual_sum) << "\n";

    return 0;
}
