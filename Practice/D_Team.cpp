#include<iostream>
using namespace std;
int main(){
  int sol,val=0;
  cin>>sol;
  for (int i = 0; i < sol; i++)
  {
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1+num2+num3==2||num1+num2+num3==3){
    val++;
    }
  }
  cout<<val;
  
  return 0;
}