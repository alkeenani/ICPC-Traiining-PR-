#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int num;
  cin>>num;
  vector <int> arr(num);
  for (int  i = 0; i < num; i++)
  {
    cin>> arr[i];
  }

int mn = arr[0],index=1;



for (int i = 1; i < arr.size(); i++)
{
    if (arr[i] < mn)
    {
        mn = arr[i];
        index=i+1;
        
    }
}

cout << mn << " "<<index;


  
  return 0;

}