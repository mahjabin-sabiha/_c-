#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n=s.size();
    if(s.front() =='<' && s.back()=='>')
    {
    int k=0;
    for(int i=1;i<n-1;i++)
    {
        if(s[i]=='=')
        {
            k++;
        }
    }
    if(k>0 && k==n-2)
    {
        cout << "Yes"<< endl;
    }
    else {
        cout << "No"<< endl;
    }
}
else{
    cout<< "No"<<endl;
}
}