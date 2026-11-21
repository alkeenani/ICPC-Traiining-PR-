#include <iostream>
using namespace std;
int main()
{

  int input;
  cin >> input;
  for (int i = 0; i < input; i++)
  {
    long long sum1 = 0, sum2 = 0, power = 1;

    long long n1, n2;
    cin >> n1 >> n2;
    sum1 = n1 * (n1 + 1) / 2;

    while (power <= n1)
    {
      sum2 += power;

      if (power > n1 / n2)
        break;

      power *= n2;
    }
    cout << sum1 - sum2 << endl;
    // cout<<sum2<<endl;
  }

  return 0;
}