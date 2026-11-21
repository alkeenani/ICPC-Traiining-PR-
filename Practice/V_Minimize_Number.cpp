#include <iostream>
#include <vector>

using namespace std;
int main()
{
  int nums;
  cin >> nums;
  vector<int> arr(nums);
  for (int i = 0; i < nums; i++)
  {
    cin >> arr[i];
  }

  bool even = true;
  int opp = 0;
  while (even)
  {
    even = true;
    for (int i = 0; i < nums; i++)
    {
      if (arr[i] % 2 != 0)
      {
        even = false;
        break;
      }
    }
    if (even)
    {
      for (int i = 0; i < nums; i++)
      {
        arr[i] /= 2;
      }
      opp++;
    }
  }

  cout << opp<<endl;

  return 0;
}