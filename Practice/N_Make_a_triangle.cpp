#include<iostream>
using namespace std;
int main(){
  int n1,n2,n3,sum,def;
  cin>> n1>>n2>>n3;
  if (n1>= n2+n3)
  {
    sum = n2 + n3 ;
    def = n1 - sum + 1;
    cout<<def ;
  }
  else if (n2 >= n1+n3)
  {
    sum = n1 + n3 ;
    def = n2 - sum + 1;
    cout<<def ;
  }
  else 
  
  {
    if (n3>= n2 + n1)
    {
      sum = n2 + n1 ;
    def = n3 - sum + 1;
    cout<<def ;
    }
    else{

      cout<< 0;
    }
  
  }
  
  

  
  return 0;

}

