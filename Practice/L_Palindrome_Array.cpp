#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int nums,count=0;
cin>>nums;

vector <int> arr(nums) ; vector<int>arr1(nums);
for (int i = 0; i < nums; i++)
{
  cin>>arr[i];
  arr1[i]=arr[i];

}
reverse(arr.begin(),arr.end());

for (int i = 0; i < nums; i++)
{
    if (arr[i]==arr1[i])
    {
      count++;
    }
    
}

  if (count==nums)
  {
    cout<<"YES"<<endl;
  }
  else{

    cout<<"NO"<<endl;
  }
  
  return 0 ;
}