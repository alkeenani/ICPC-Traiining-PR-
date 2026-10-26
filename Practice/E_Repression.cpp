#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    int sum;
    cin>> num1>>num2 >>num3;
  if (num1+num2>=num1+num3 && num1+num2 >= num2 + num3 )
  {
    sum = num1+num2;
    cout<<sum;
  }
  else 
  {
    sum = num2 + num3;
    cout<<sum;
    
  }
  
  

  return 0;
}