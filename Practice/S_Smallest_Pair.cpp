#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int mn = 0;

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (i == 0 && j == 1)
        {
          mn = arr[i] + arr[j] + j - i;
        }

        else if (mn > (arr[i] + arr[j] + j - i))
        {
          mn = arr[i] + arr[j] + j - i;
        }
      }
    }
    cout << mn << endl;
  }

  return 0;
}