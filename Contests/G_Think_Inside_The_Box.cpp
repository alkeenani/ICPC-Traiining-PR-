#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int side = min(max(a, 2 * b), max(2 * a, b));

        cout << side * side << '\n';
    }

    return 0;
}