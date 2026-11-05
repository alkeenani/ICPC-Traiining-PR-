#include<iostream>
using namespace std;
int main(){
  int v,f,m,t;
  cin>>v>>f>>m>>t;

  while (true)
  {
  
 if (v < f) {
   cout<<"F"<<endl;
   break;
  }
  else {
    v -= f;
    
    if (v < m) {
      cout<<"M"<<endl;
      break;
    }
    else {
      v -= m;
      
      if (v < t) {
        cout<<"T"<<endl;
        break;
      }
      else{
          v -=t;
        }
    }

    
  
  }
  }
  
  return 0;
}