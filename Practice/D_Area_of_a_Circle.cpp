#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main(){
  double PI = 3.14159 ,R;
  cin>> R;
  cout<< fixed << setprecision(4);
  cout<< "A="<< PI * pow(R,2) << endl;
  return 0;
}