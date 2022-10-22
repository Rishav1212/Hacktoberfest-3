#include<iostream>
using namespace std;
int main(){
   int a = 154;
   if(a & 0x01) 
{
  cout<<a<<" is an odd number";
   }
 else
{
      cout<<a<<" is an even number";
   }
   printf(" ");
   return 0;
}
