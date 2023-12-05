#include<iostream>
using namespace std;
class marks{
	public:
	float pr;
	string address;
	public:
		marks(float pr,string address)
		{
			this->pr=pr;
			this->address=address;
		}
		
	
};
class student{
	public:
	int roll_no;
	string name;
	marks *info;
	student(int roll_no,string name,marks *info)
	{
		this->roll_no=roll_no;
		this->name=name;
		this->info=info;
	}
	void display()
	{
		cout<<name<<" "<<roll_no<<" "<<info->pr<<" "<<info->address;
	}		
	void set_grade()
	{
		if(info->pr>80)
		{
			cout<<" A+";
		}
		else if(info->pr>65)
		{
			cout<<" B";
		}
		else if(info->pr>35)
		{
			cout<<" pass";
		}
		else if(info->pr>0 && info->pr<=35)
		{
			cout<<" fail";
		}
		else{
			cout<<" enter valid pr";
		}
	}
};
int main()
{
	marks obj(70.80,"ahm");
	student s1(101,"xyz",&obj);
	s1.display();
	s1.set_grade();
	return 0;
}

