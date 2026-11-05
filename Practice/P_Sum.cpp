#include <iostream>

using namespace std;
int main(){
    int input ;
    cin>>input;
    for (int i = 0; i < input; i++)
    {
      int n1,n2,n3;
      cin>>n1>>n2>>n3;
      if (n1 == n2 + n3 || n2 == n1 + n3 || n3 == n1 + n2)
{
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}
      
      
    }
    
  return 0;
}