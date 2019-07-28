/*Q7. Write a C++ program to add two float values using parameterized constructor and copy constructor.
Answer:-*/

#include<iostream>
using namespace std;

class myConstructor
{
	float p,q;
	public:
	myConstructor(float a,float b)
	{
		cout<<" You are in Parameterized Constructor"<<endl;
		p=a;
		q=b;
	}
	myConstructor(myConstructor &my)
	{
		cout<<" You are in Copy Constructor"<<endl;
		p=my.p;
		q=my.q;
		cout<<" Additon of a + b = "<<p+q;
	}
};

int main()
{
	float a,b;
	cout<<" Enter a = ";
	cin>>a;
	cout<<" Enter b = ";
	cin>>b;
	myConstructor mc(a,b);
	myConstructor mc1=mc;
	return 0;
}
