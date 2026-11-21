#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int i;
  cin >> i;

  if (i == 0)
  {
    cout << 1;
  }
  else if (i % 4 == 1)
  {
    cout << 8;
  }
  else if (i % 4 == 2)
  {
    cout << 4;
  }
  else if (i % 4 == 3)
  {
    cout << 2;
  }
  else
  {
    cout << 6;
  }

  return 0;
}