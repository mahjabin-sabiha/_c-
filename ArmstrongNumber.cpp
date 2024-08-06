#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num_of_digit=0;
    cin >> n;
    int temp=n;
    while(temp!=0)
    {
        temp/=10;
        num_of_digit++;
    }
    
    int sum=0;
    int digit;
    int num=n;
    while(num!=0)
    {
        digit=num%10;
        sum+=pow(digit,num_of_digit);
        num/=10;
    }
   if(sum==n)
   {
    cout <<"Yes"<< endl;
   }
   else{
    cout << "No"<< endl;
   }
   return 0;
}