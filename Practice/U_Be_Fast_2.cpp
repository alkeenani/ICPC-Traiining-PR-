#include <iostream>
using namespace std;
int main(){
  long long l ,r,k;
  cin>> l >>r>>k;

  
  cout<< (r -l)+1 - (r/k - (l-1)/k) ;
  return 0;
}
