#include<bits/stdc++.h>
using namespace std;
int ans;
int binary_2_decimal(int a)
{
   
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

string dec_2_binary(int a)
{
string s1;
 int i=0;
 while(a>0)
 {
    
    int val =(a%2);
    s1+= to_string(val);
    
    a/=2;
  i++;
 }
 reverse(s1.begin(), s1.end());
return s1;
}

int main()
{

    cout<<"By Pranjal Sharma UIET CSJMU";
    int a=9;
    
    int s=10010;
    cout<<"Now  binary to decimal\n";
    cout<<binary_2_decimal(s);
    cout<<"Now decimal to binary\n";

 cout<<dec_2_binary(11);
   
    return 0;
}