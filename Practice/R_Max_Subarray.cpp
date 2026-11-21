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

    for (int i = 0; i < n; i++)
    {
      int maxi = arr[i];

      for (int j = i; j < n; j++)
      {
        if (arr[j] > maxi)
        {
          maxi = arr[j];
        }

        cout << maxi << " ";
      }

      
    }
    cout<<"\n";
  }

  return 0;
}