#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    set<int> distinct_numbers;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        distinct_numbers.insert(x);
    }
    
    cout << distinct_numbers.size() << "\n";
    
    return 0;
}
