#include<iostream>
using namespace std;
class A 
{ 
	public:
	int i;
	void fun()
	{
		if(i%2==0)
		cout<<"even";
		if(i%2!=0)
		cout<<"odd";
		else
		cout<<"invalid";
	}
	
};
int main()
{
	A a;
	cout<<"enter the number";
	cin>>a.i;
	a.fun();

	return 0;
}

