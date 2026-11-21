#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int num, count = 0;
  cin >> num;
  vector<int> arr(num);

  for (int i = 0; i < num; i++)
  {
    cin >> arr[i];
  }

  int min = *min_element(arr.begin(), arr.end());

  for (int i = 0; i < num; i++)
  {
    if (arr[i] == min)
    {
      count++;
    }
  }

  if (count%2==0)
  {
    cout<<"Unlucky"<<endl;
  }
  else{
    cout<<"Lucky"<<endl;
    
  }
  
  
  // for (int i = 0; i < num; i++)
  // {
  //   if (arr[i]%2!=0)
  //   {
  //     if (arr[i]>num)
  //     {
  //       cout<<"Lucky"<<endl;
  //       break;
  //     }
  //     else{

  //       cout<<"Unlucky"<<endl;
  //       break;
  //     }

  //   }

  // }

  return 0;
}