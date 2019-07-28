/*Q3. Write a C+ program to calculate simple and compound interest using default argument. Print the output with default argument and without using argument.

Answer:-*/
//Calculation of Intrest Using Default Arguments
#include<iostream>
#include<math.h>
using namespace std;

class intrest
{
	public:
	float simpleInterest(float p,int n, float r=8)
	{
		return((p*r*n)/100.0);
	}
	float compoundIntrest(float p,int n, float r=7)
	{
		return (p*pow((1+r/100),n));
	}	
};
int main()
{
	float amt, principal;
	int time;
	intrest i;
	cout<<"\n Please enter principal: ";
	cin>>principal;
	cout<<" Please enter Time: ";
	cin>>time;
	amt=i.simpleInterest(principal,time);
	cout<<"\n The Simple Intrest amount is: "<<amt<<endl;
	amt=i.compoundIntrest(principal,time);
	cout<<" Compund Intrest amount is: "<<amt<<endl;
	return 0;
}
