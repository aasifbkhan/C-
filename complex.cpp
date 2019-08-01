//Q11.write a C++ program to add two complex number using objects
#include <iostream> 

using namespace std;

class complexDemo
{
	int r,i;
	public:
	void getComp(int real, int imag)
	{
		r=real;
		i=imag;
	}
	void sum(complexDemo cd1, complexDemo cd2)
	{
		complexDemo cd3;
		cd3.r = cd1.r + cd2.r;
   		cd3.i = cd1.i + cd2.i;
   		cout<<"\n Addition Of Complex Number Is : "<<cd3.r<<"+"<<cd3.i<<"i";
	}
};

int main()
{
   int r1,i1,r2,i2;
   cout<<" First Complex Number:-"<<endl;
   cout <<" Enter real Number: "; 
   cin >>r1;
   cout<<" Enter imaginary Number: ";
   cin>>i1;
   
   cout<<"\n Second Complex Number:-"<<endl;
   cout <<" Enter real Number: "; 
   cin >>r2;
   cout<<" Enter imaginary Number: ";
   cin>>i2;
   
   complexDemo n1, n2, n3;
   n1.getComp(r1,i1);
   n2.getComp(r2,i2);
   n3.sum(n1,n2);
   return 0;
}
