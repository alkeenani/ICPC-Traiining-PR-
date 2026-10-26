#include <iostream>
#include <iomanip>

using namespace std;
int main(){

  double degree1,degree2,degree3,we,av;
  cin>>degree1>>degree2>>degree3;
  av= ((degree1 * 2)+(degree2 * 3)+(degree3 * 5)) / (2 +3 +5);
  cout<< fixed << setprecision(1);
  cout<< "MEDIA = "<<av<<endl;

  return 0;
}