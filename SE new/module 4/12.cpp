#include<iostream>
using namespace std;
class bank{
	int ac_no;
	float balance,dp_amt,wt_amt;
	public:
		void get()
		{
			cout<<"\nenter your account number";
			cin>>ac_no;
			cout<<"\nenter your balance";
			cin>>balance;
		}
		void deposite()
		{
			cout<<"enter deposite amount";
			cin>>dp_amt;
			balance=balance+dp_amt;
			cout<<"your current balance is "<<balance;
		}
		void withdraw()
		{
			cout<<"enter withdraw amount";
			cin>>wt_amt;
			balance=balance-wt_amt;
			cout<<"your current balance is "<<balance;
		}
};
int main()
{
	bank obj;
	int choice;
	cout<<"------welcome------"<<endl;
	cout<<"enter your choice\n 1 for deposite amount \n 2 for withdraw amount";
	cin>>choice;
	obj.get();
	switch(choice)
	{
		case 1:
			obj.deposite();
			break;
		case 2:
			obj.withdraw();	
			break;
			default:
				cout<<"enter valid choice";
	}
	return 0;
}
