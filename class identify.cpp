#include<iostream>
using namespace std;
class student{
	public:
		int roll;
		string name;
		int marks;
};
int main(){
	student s1,s2;
	s1.roll=1;
	s1.name="bitisha";
	s1.marks=97;
	s2.roll=3;
	s2.name="ritisha";
	s2.marks=93;
	cout<<s1.roll<<endl;
	cout<<s1.name<<endl;
	cout<<s1.marks<<endl;
	cout<<s2.roll<<endl;
	cout<<s2.name<<endl;
	cout<<s2.marks<<endl;
	return 0;
}
