#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

  int nums;
  cin>>nums;

    vector <int> arr(nums);

  for (int i = 0; i < nums; i++)
  {
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());

  for (int i = 0; i < nums/2; i++)
{
    cout << arr[i] << " ";
}
  for (int i = nums/2-1; i >= 0; i--)
{
    cout << arr[i] << " ";
}

  cout<<"\n";

sort(arr.begin(), arr.end(), greater<int>());
  for (int i = 0; i < nums/2; i++)
{
    cout << arr[i] << " ";
}
  for (int i = nums/2-1; i >= 0; i--)
{
    cout << arr[i] << " ";
}


  
  
  return 0;
}