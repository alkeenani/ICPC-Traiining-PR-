#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0;i<t;i++) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long total = 0;
        long long count = 0;

        for (int i = 0; i < n; i++) {

            if (i == 0 || arr[i] < arr[i - 1]) {
                count = 1;
            }
            else {
                count++;
              
              }
              
              total += count;
        }

        cout << total << endl;
    }

    return 0;
  }