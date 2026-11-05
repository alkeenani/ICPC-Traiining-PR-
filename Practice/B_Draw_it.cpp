#include<iostream>
using namespace std;
int main(){
  char S;
  int input;
  cin>> S>>input;


  for (int i = 0; i < input; i++)
  {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
      cout<<S;
    }
    cout<<"\n";
  }
  
  return 0;
}