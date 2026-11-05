#include<iostream>
#include<string>
using namespace std;
int main(){
  int input;
  string  s = "codeforces";
        bool found =false;

  // cout<<s.length();
  cin>> input;
  for (int i = 0; i < input; i++)
  {
    found=false;
    char c;
    cin>>c;
    for (int k = 0; k < s.length(); k++)
    {
      if (s[k]==c)
      {
        found=true;
        break;
      }
      
    
  }
  if (found)
  {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;

  }
  
  
}
  return 0;
}

