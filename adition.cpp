#include<iostream>
using namespace std;
class Number
{
	public:
		int value;
};
int add(int a ,int b)
{
	return a+b;
}
int main(){
	int a,b;
	Number ob1,ob2;
	cout<<"enter the number ="<<endl;
	cin>>a>>b;
	ob1.value=a;
	ob2.value=b;
	cout<<add(ob1.value,ob2.value);
	return 0;
}
