#include<bits/stdc++.h>
using namespace std;
int ans;
int binary_2_decimal(int a)
{
    cout<<"/n in";
   int temp=a;
   int p=1;
   
   while(temp>0)
   {
    int val=temp%10;
     ans+=val*p;
    p*=2;
    temp/=10;
    
   } 
   return ans;
}

void dec_2_binary(int a)
{
 int binary[32];
 int i=0;
 while(a>0)
 {
    binary[i]=a%2;
    
    a/=2;
  i++;
 }
 for(int j=i-1;j>=0;j--)
 {
    cout<<binary[j];
 }

}

int main()
{
    
    cout<<"By Pranjal Sharma UIET CSJMU";
    int s=10010;
    cout<<"Now  binary to decimal";
    cout<<binary_2_decimal(s);
    cout<<"Now decimal to binary";

dec_2_binary(11);
   
    return 0;
}