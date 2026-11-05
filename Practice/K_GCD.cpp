
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int num1,num2;
  cin>>num1>>num2;

  int g = 1;

    
    for (int i = min(num1, num2); i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            g = i; 
            break;             
        }
    }
    cout<<g;
  
//   int arr1[100],arr2[100];
//   int count1 = 0,count2=0,count3=0;
//   for (int i = 1; i <= num1; i++)
//   {
//     if (num1%i==0)
//     {
//       arr1[count1] = i;
//       // rank1++;
//       // rank1.push[i];
//       count1++;
      
//     }
    
//   }
//   for (int j = 1; j <= num2; j++)
//   {
//     if (num2%j==0)
//     {
//       // rank2++;
//       arr2[count2] = j;
//       count2++;

//     }
    
//   }
//   for (int k = 0; k < count1; k++){
// for (int f = 0; f < count2; f++)
//   {
//     if(arr1[k]==arr2[f]){
//       count3++;
//     }
//   }
//   } 
  
  
//   cout<<count3;
    
  return 0;
}