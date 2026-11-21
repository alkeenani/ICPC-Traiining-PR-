#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int num;
cin>>num;


  vector <int> arr(num);

  for (int i = 0; i < num; i++)
  {
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  for (int i = 0; i < num; i++)
  {
    cout<<arr[i]<<" ";
  }

  cout << '\n';

    for (int i = num - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }  
  

  return 0;

}