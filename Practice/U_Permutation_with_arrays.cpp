#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

  int nums;
  bool equel = true;
  cin >> nums;
  vector<int> arr1(nums), arr2(nums);

  for (int i = 0; i < nums; i++)
  {
    cin >> arr1[i];
  }
  for (int j = 0; j < nums; j++)
  {
    cin >> arr2[j];
  }

  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());

  for (int i = 0; i < nums; i++)
  {
    if (arr1[i] != arr2[i])
    {
      equel = false;
      break;
    }
  }

  if (equel)
  {
    cout << "yes" << endl;
  }
  else
  {
    cout << "no" << endl;
  }

  return 0;
}