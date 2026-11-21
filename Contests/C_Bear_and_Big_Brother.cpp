#include<iostream>
using namespace std;
int main(){
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int us1,us2,years=0;
  cin>>us1>>us2;
  while (us1<=us2)
  {
    us1 = us1 * 3;
    us2 = us2 * 2;
    years++;
  }
  cout<<years<<endl;
  return 0 ;
}