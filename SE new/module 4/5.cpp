#include<iostream>
using namespace std;
class bank
{
	int ac_no,balance,dp_amt,wt_amt;
	string name,ac_type;
	public:
		void add_values()
		{
			cout<<"enter name of customer"<<endl;
			cin>>name;
			cout<<"enter account number"<<endl;
			cin>>ac_no;
			cout<<"enter account type"<<endl;
			cin>>ac_type;
			cout<<"enter balance"<<endl;//500
			cin>>balance;
		}
		int depoiste()
		{
			cout<<endl<<"enter deposite amount"<<endl;//500
			cin>>dp_amt;
			balance=balance+dp_amt;//1000
			return balance;
		}
		int withdraw()
		{
			cout<<endl<<"enter withdraw amount"<<endl;
			cin>>wt_amt;//200
			if(wt_amt>balance)
			{
				cout<<"\ndon't have enough balance\n";
				return balance;
			}
			else{
				balance=balance-wt_amt;
				return balance;//800
			}
		}
		
		void display_info()
		{
			cout<<"name of customer is: "<<name<<endl;
			cout<<"current balance is: "<<balance<<endl;
			
		}
};
int main()
{
	bank c1;
	cout<<"---------enter details---------\n";
	c1.add_values();
	cout<<"after deposite your current balance is: "<<c1.depoiste()<<endl;
	cout<<"after withdraw your current balance is: "<<c1.withdraw()<<endl;
	cout<<endl<<"---------information of customer---------\n";
	c1.display_info();
	
	
	return 0;
}
