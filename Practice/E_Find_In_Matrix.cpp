#include<iostream>
#include<vector>
using namespace std;
int main(){

  int rows, cols,find;
  bool Lol = false; 
cin >> rows >> cols;

vector<vector<int>> arr(rows, vector<int>(cols));
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cin >> arr[i][j];
    }
}

cin>>find;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {

      if (arr[i][j]==find)
      {
        Lol=true;
        break;
      }
      
        
    }
}

if (Lol)
{
  cout<<"YES"<<endl;
}
else{
  cout<<"NO"<<endl;

}







  return 0;

}