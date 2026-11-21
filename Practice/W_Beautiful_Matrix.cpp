#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
int main()
{
  int numRow = 0 ,numCol = 0;

  vector<vector<int>> arr(5, vector<int>(5));
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (arr[i][j]==1)
      {
        numRow =i;
        numCol =j;
      }
      
    }
  }
  cout<<abs(numRow - 2) + abs(numCol - 2)<<endl;
  
  return 0;
}