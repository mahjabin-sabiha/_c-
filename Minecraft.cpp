/*In minecraft, to craft a shovel, 2 sticks and 1 block of Iron is needed. Again to craft a sword, 1 stick and 2 block of Iron is needed.

Each tool (Both Sword and Shovel) can be sold for 1 dollars. You have a sticks and b Iron blocks. What is the maximum amount of dollars you can earn by crafting and selling swords and shovels ?

Input

The number of sticks a and the number of Iron Blocks, b. (1 <= a,b <= 109) 

Output

A single integer , indicating the maximum dollars you can earn.
Example

Input

7 15

Output

7

*/



#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    
    cin>>a>>b;
    int result=min({a,b,(a+b)/3});
    cout << result << endl;
}
    