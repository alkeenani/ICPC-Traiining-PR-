#include <iostream>
using namespace std;

int main() {
    int m ;
    cin>>m; 

    for (int i = 0; i < m; i++) {
        
        for (int k = 0; k < m - i - 1; k++) {
            cout << " ";
        }

        for (int j = 0; j < (2 * i + 1); j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}