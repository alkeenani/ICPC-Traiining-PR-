#include <iostream>
#include <cmath>
using namespace std;
int main(){
  long long n1,n2,n3,n4;
  cin>>n1>>n2>>n3>>n4;
  //  cout<<n2 *log(n1)<<endl; // 3.21888
  // cout<<n4* log(n3)<<endl; // 2.77259
  // cout<<pow(n1,n2)<<endl; // 25
  // cout<<pow(n3,n4)<<endl; // 16

  
  if (n2 *log(n1) > n4* log(n3))
  {
   cout<<"YES" <<endl;
  }
  else{
    cout<<"NO" <<endl;

  }
  
  return 0;
}