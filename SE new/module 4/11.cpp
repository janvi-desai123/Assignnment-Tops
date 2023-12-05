#include<iostream>
using namespace std;
class car{
	string company,model;
	int year;
	public:
		void get()
		{
			cout<<"enter company name and model of car ";
			cin>>company>>model;
			cout<<"enyer year of company ";
			cin>>year;
		}
		void set()
		{
			cout<<"company of car is "<<company;
			cout<<"\n model of car is "<<model;
			cout<<"\n year of car is "<<year;
			
		}
};
int main()
{
	car obj;
	obj.get();
	obj.set();
	return 0;
}
