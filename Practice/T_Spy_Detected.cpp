#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  for (int i = 0; i < t; i++)
  {

    int nums;
    cin>>nums;
    vector<int>arr(nums);

    for (int i = 0; i < nums; i++)
    {
      cin>>arr[i];

    }

    int common;
    if (arr[0] ==arr[1]||arr[0] ==arr[2])
    {
      common = arr[0];
    }
   
    else {
      common = arr[1];
    }
   
    
    // cout<< common <<endl;
    int index=0;

    for (int i = 0; i < nums; i++)
    {
      if (arr[i]!=common)
      {
        index = i + 1;
      }
      
    }
    cout<<index<<endl;
    
    
  }
  
  return 0;

}