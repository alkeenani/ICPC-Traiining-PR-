#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for (int i = 0; i < t; i++){
    
    int p1, p2, p3, p4;
    cin >> p1 >> p2 >> p3 >> p4;

    int w1 = max(p1, p2);
    int w2 = max(p3, p4);

    int l1 = min(p1, p2);
    int l2 = min(p3, p4);

    if (w1 > l2 && w2 > l1)
        cout << "YES\n";
    else
        cout << "NO\n";
    }
 

    return 0;
}