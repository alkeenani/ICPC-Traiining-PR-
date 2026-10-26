#include<iostream>
using namespace std;
int main(){
  long long l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;
  if (l1<=r2&&l2<=r1)
  {
    cout<<l2 <<" "<< r1;
  }
  else{
    cout<<-1;;

  }
  
  return 0;
}
