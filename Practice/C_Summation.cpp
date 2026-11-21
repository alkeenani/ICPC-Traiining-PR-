#include<iostream>
#include<cmath>
using namespace std;
int main(){

  int num;
  
  long long sum=0;
  cin>>num;
  int arr[num];
  for (int i = 0; i < num; i++)
  {
    cin>>arr[i];
    sum+=arr[i];

  }
  cout<<abs(sum)<<endl;
  
  return 0;

}