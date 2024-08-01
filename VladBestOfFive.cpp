#include<bits/stdc++.h>
using namespace std;
int main(){
    int   t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        string s;
        cin >> s;
        int a=0,b=0;
        for(int j=1;j<=s.size();j++)
        {
            if(s[j]=='A') 
            {
                a++;
            }
            else 
            {
                b++;
            }

        }
         if(a>b)
         {
            cout << "A"<< endl;
         }
    
    else 
    {
        cout << "B" << endl;  
    }  
    }
                     
}