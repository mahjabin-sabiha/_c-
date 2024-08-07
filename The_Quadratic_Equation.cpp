#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b>>c;
    int q=b*b-4*a*c;
    
    cout << fixed << setprecision(2)<< "\n";
    if(q<0)
    {
        cout << "Imaginary"<<"\n";
    }
    else if(q==0)
    {
        cout << "Real and Equal"<<"\n";
        double x=(-b)/(2.0*a);
        cout <<x<<"\n";
    }
    else
    {
        cout << "Real and Unequal"<<"\n";
        double s=sqrt(q);
        double x1=(-b+s)/2.0*a,x2=(-b-s)/2.0*a;
        cout <<min(x1,x2)<<" "<< max(x1,x2)<< "\n";
        
    }
    return 0;
}