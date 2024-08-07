#include<bits/stdc++.h>
using namespace std;
int main(){
    double x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;  
    cin >> x3 >> y3;
    double p=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    double q=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    double r=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    if(p==q==r ){
    
        cout << "Equilateral Triangle";
    
    }
    else if(p==0 && q==0 && r==0){
         cout << "Equilateral Triangle";
    }
    else if(p==q && q!=r || p==r && q!=p || q==r && p!=r)
    {
        cout <<"Isosceles Triangle";
    }
    else if(p!=q!=r)
    {
        cout << "Scalene Triangle";
    }
    cout << fixed << setprecision(4)<<"\n";
    double per=p+q+r;
    double s=(per)/2;
    double area=sqrt((s*(s-p)*(s-q)*(s-r)));
    cout << area << " "<< per << endl;
}