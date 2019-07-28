/*Q2. Write a C++ program to perform all the arithmetic expression using Inline function.
Answer:-*/
//arithmaticinline.c++

#include<iostream>
using namespace std;

inline float add(float a, float b)
{
	return(a+b);
}
inline float sub(float a, float b)
{
	return(a-b);
}
inline float mul(float a, float b)
{
	return(a*b);
}
inline float div(float a, float b)
{
	return(a/b);
}
inline int mod(int a, int b)
{
	return(a%b);
}

int main()
{
	int n;
	float a,b;
	cout<<"\n -----Arithmatic Operatin Using Inline Function-------"<<endl;
	cout<<" 1.Addition.\n 2.Subtraction.\n 3.Multiplication.\n 4.Division.\n 5.Modulus."<<endl;
	cout<<" Enter Your Choice = "<<endl;
	cin>>n;
	cout<<" Enter a = "<<endl;
	cin>>a;
	cout<<" Enter b = "<<endl;
	cin>>b;
	switch(n)
	{
		case 1:
			cout<<a<<" + "<<b<<" = "<<add(a,b);
			break;
		case 2:
			cout<<a<<" - "<<b<<" = "<<sub(a,b);
			break;
		case 3:
			cout<<a<<" * "<<b<<" = "<<mul(a,b);
			break;
		case 4:
			cout<<a<<" / "<<b<<" = "<<div(a,b);
			break;
		case 5:
			cout<<a<<" % "<<b<<" = "<<mod(int(a),int(b));
			break;
		default:
			cout<<"Invalid Choice";
	}
}
