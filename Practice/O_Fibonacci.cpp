#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int input;
  cin>>input;
vector<long long> arr(input + 1);

  arr[0]=0;
  arr[1]=1;
  for (int i = 2; i < input; i++)
  {
    arr[i] = arr[i-1] + arr[i-2];

  }

  for (int j =0;j<input;j++){
    cout << arr[j] << " ";
  }
  
  
  

}