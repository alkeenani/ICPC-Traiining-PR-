#include <iostream>
using namespace std;

int main()
{
  string n;
  cin >> n;

  int count = 0;

  for (int i = 0; i < n.size(); i++)
  {
    if (n[i] == '2' || n[i] == '3' ||
        n[i] == '5' || n[i] == '7')
    {
      count++;
    }
  }

  int prime = 0;

  for (int i = 2; i < count; i++)
  {
    if (count % i == 0)
    {
      prime = 1;
      break;
    }
  }

  if (count > 1 && prime == 0)
    cout << "Lelouch" << endl;
  else
    cout << "Eren" << endl;

  return 0;
}