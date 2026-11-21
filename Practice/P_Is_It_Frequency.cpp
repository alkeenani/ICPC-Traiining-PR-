#include <iostream>
#include <vector>

using namespace std;
int main()
{

  int nums, s;
  cin >> nums >> s;
  vector<int> arr(nums);
  vector<int> f(s+1, 0);
  for (int i = 0; i < nums; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < nums; i++)
  {
    f[arr[i]]++;
  }

  for (int i = 1; i <= s; i++)
  {
    cout << f[i] << endl;
  }

  return 0;
}