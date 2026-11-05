#include<iostream>
using namespace std;
int main(){
  int input;
  cin>>input;



  for (int i = 0; i <input ; i++)
  {
    long long n;
    cin>> n;
  

    long long sum1 = 0,sum2=0,power = 1;

  while (power <= n) {
    sum2+=power;
    power *= 2;
  }
    sum1 =(n*(n+1)/2);
    
    
    cout<< sum1 -(sum2*2)<<endl ;
  }
  return 0;
}