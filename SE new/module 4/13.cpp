#include<iostream>
using namespace std;
class tringle{
	int s1,s2,s3;
	public:
		void get()
		{
			cout<<"enter length of three sides of tringle";
			cin>>s1>>s2>>s3;
		}
		void determineType() {
    if (s1 == s2 && s2 == s3) {
      cout << "Equilateral Triangle" << endl;
    } else if (s1 == s2 || s1 == s3 || s2 == s3) {
      cout << "Isosceles Triangle" << endl;
    } else {
      cout << "Scalene Triangle" << endl;
    }
  }
};
int main()
{
	tringle obj;
	obj.get();
	obj.determineType();
	
}
