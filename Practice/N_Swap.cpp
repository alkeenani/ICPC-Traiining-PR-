#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){


  int nums;
  cin>>nums;
  vector <int> arr(nums);
  for (int i = 0; i < nums; i++)
  {
    cin>>arr[i];

  }


int maxI = max_element(arr.begin(),arr.end()) - arr.begin();
int minI = min_element(arr.begin(), arr.end()) - arr.begin();  
  // cout<<max<<endl;
  // cout<<min<<endl;
  int container = arr[minI] ;

  arr[minI] = arr[maxI];
  arr[maxI] = container;


  for (int i = 0; i < nums; i++)
  {
    cout<< arr[i]<<" ";
  }
  
  return 0;

}