#include<iostream>
using namespace std;
int main(){
  int input;
  cin>>input;

  for (int i = 0; i < input; i++)
  {
    
    long long c,k,hours=0,crrunt = 1;
    cin>>c>>k;
    while (c>crrunt)
    {
     if (crrunt<=k)
        {
          crrunt+=crrunt;
          hours++;

        }
        else{
        long long remaining = c - crrunt;
        hours += (remaining + k - 1) / k;
        break;
        }
      
    
    

  
   
    
  }
  cout<<hours<<endl;
    
  

  }
  
  return 0;
}