#include <iostream>
using namespace std;
class addition
{
int x, y;
public:
addition(int a1, int b1)
{
x = a1;
y = b1;
cout<<"x ="<<x<<endl;
cout<<" y=" <<y<<endl;
cout<<"x+y ="<<x + y;
}
};
int main()
{
addition t1 = addition(10, 20);
return 0;
}


