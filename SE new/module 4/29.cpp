#include<iostream>
using namespace std;
class max1{
	
	int no1,no2;
	public:
		void get()
		{
			cout<<"Enter your No1 and No2 :-";
			cin>>no1>>no2;
	
		}
	friend void find(max1);
};
void find(max1 m1)
{
	
	if(m1.no1>m1.no2)
	{
		cout<<"no1 is max";
	}
	else
	{
		cout<<"no2 is max";
	}
}
int main()
{
	max1 m;
	m.get();
	find(m);
	return 0;
}
