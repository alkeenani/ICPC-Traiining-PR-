#include<iostream>
#include<vector>
using namespace std;
int main(){
  int nums,queris;
  cin>>nums>>queris;
  vector<int> arr(nums);
  for (int i = 0; i < nums; i++)
  {
    cin>> arr[i];
  }

  for (int i = 0; i < queris; i++)
  {
    int n1,n2,target;
    cin>>n1>>n2>>target;

    int count = 0;
    for (int i = n1; i <= n2; i++)
    {
        if (arr[i-1]==target)
        {
          count++;
        }
        
    }    
    cout<<count<<endl;
  }

  
  return 0;

}