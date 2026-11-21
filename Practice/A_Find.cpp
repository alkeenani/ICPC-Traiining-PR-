#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num1,num2,index;;
    cin>>num1>>num2;
    bool f = false; 

    int arr[num1];
    for (int i = 0; i < num1; i++){
      cin>>arr[i];
      if(arr[i]==num2){
        index = i;
        f= true;
        break;
      }
      
    }
    if (f)
    {
      cout<<index<<endl;
    }
    else{
      cout<<"Not Found"<<endl;
      
    }
    
  
  return 0;
}