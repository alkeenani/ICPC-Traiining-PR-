#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
  int t;
  cin>>t;
  for (int i = 0; i < t; i++)
  {
    int num1,num2;
    cin>>num1>>num2;
    if (num1%num2 ==0)
    {
      cout<<0<<endl;
    }
    else{
      cout<<num2-(num1%num2)<<endl;
    }
    
  }
  

}