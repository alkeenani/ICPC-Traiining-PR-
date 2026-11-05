#include<iostream>
using namespace std;
int main(){
  int sun;
  cin>> sun;
  for (int i = sun; i > 0  ; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout<<"*";
    }
    cout<<"\n";
    
  }
  
  return 0;
}