#include <iostream>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int input;
  cin >> input;

  for (int i = 0; i < input; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c)
    {
      cout << "STAIR" << endl;
    }
    else if (b > a && b > c)
    {
      cout << "PEAK" << endl;
    }
    else
    {
      cout << "NONE" << endl;
    }
  }

  return 0;
}