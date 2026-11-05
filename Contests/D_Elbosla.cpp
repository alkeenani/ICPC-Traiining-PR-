#include<iostream>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
string letters = "ABCDFGHIJKLMNOPQSTUVWXYZ";

char c;
cin >> c;

int index = letters.find(c);
cout<<letters[(index+12)%24];

}