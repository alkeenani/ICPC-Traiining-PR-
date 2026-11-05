#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int N;
    double R, L;
 
    cin >> N >> R >> L;
 
    const double PI = 3.141592653589793;
 
    double totalVolume = N * PI * R * R * L;
 
    cout << fixed << setprecision(6) << totalVolume << endl;
 
    return 0;

}
//?π× R² × L