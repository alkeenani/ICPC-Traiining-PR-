#include<iostream>
#include<string>
using namespace std;
int main(){
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int input;
  cin>>input;
  string s = to_string(input);
  string output = "";
  string outputEdit = "";
  for (int i = 0; i < s.length(); i++) {
    if (s[i]=='0')
    {
      continue;
    }
    
    output+=s[i];
    // cout<< s[i]<<endl;
  }


 for (int j = output.length() - 1; j >= 0; j--) {
         outputEdit+=output[j];
    }
  
  
  if (s==outputEdit )
  {
    cout<<outputEdit << endl<<"YES"<<endl;
  }
  else{
    cout<<outputEdit << endl<<"NO"<<endl;
    
  }
  
  

}