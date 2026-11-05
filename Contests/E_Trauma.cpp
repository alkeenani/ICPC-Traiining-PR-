#include<iostream>
using namespace std;
int main(){
      ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  long long  N,M;
  cin>>N>>M;
  long long sum=0;

  // long long a = (M % 2 == 0) ? (M / 2) * (M + 1) : M * ((M + 1) / 2)
  sum=(((M*(M+1))/2) - (N*(N-1)/2) );
  cout<<sum<<endl;

}