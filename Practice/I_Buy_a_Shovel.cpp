#include<iostream>
using namespace std;
int main(){
  int num1,num2;
  cin>>num1>>num2;
  for (int i = 1; ; i++)
  {
   int sum = num1 *i;
    if (sum%10==0||sum%10==num2)
    {
      cout << i << endl;
      break;
    }
    
    
  }
  
  return 0;
}