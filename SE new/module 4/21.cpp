#include<iostream>
using namespace std;
class  student{
	int roll_no;
	public:
		void get_stu()
		{
			cout<<"\n Enter Student RollNumber:- ";
			cin>>roll_no;
		}
		void display_stu()
		{
			cout<<"\n The Student RollNumber is :-"<<roll_no;
		}
};
class test:public student{
	protected:
	int mark1,mark2;
	public:
		void get_marks()
		{
			cout<<"\n Enter Maths Mark ";
			cin>>mark1;
			cout<<"\n Enter English  Mark ";
			cin>>mark2;
		}
		void display_mark()
		{
			cout<<"\n The Maths Mark is :- "<<mark1;
			cout<<"\n The English Mark is :- "<<mark2;
		}
};
class result : public test{
	int total;
	public:
		void get_total()
		{
			cout<<"\nTotal Marks";
			total = mark1+mark2;
			
	    }
	    void display_total()
	    {
	    	cout<<"\n Total Marks is:- "<<total;
		}
};

int main()
{  
	// obj is result class 
	result r1;
	
	r1.get_stu();
	r1.get_marks();
	r1.get_total();
	
	r1.display_stu();
	r1.display_mark();
	r1.display_total();
	return 0;
}
