#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double num1,num2,sum;
  cin>>num1>>num2;
    sum = num1 / num2;
    cout << "floor "<<num1<<" / " <<num2 << " = "<<floor(sum)<<endl;
    cout << "ceil "<<num1<<" / " <<num2 << " = "<<ceil(sum)<<endl;
    cout << "round "<<num1<<" / " <<num2 << " = "<<round(sum)<<endl;
  
  return 0;
}





