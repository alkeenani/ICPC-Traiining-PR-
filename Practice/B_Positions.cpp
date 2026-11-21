#include<iostream>
using namespace std;
int main(){

  int num;
  cin>>num;
  int arr[num];
  for (int i = 0; i < num; i++)
  {
    cin>>arr[i];
    if (arr[i]<=10)
    {
    cout<<"A["<<i<<"] = "<<arr[i]<<endl;
    }
    
  }
  
  return 0;
}