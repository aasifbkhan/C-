/*Q5. Write a C++ program for adding two timestamp using object as function argument.
Answer:-*/
#include <iostream>
using namespace std;
class timeDemo
{
    int hh,mm,ss;
    public:
    void getTime(int h,int m,int s)
    {
        hh=h;
        mm=m;
        ss=s;
    }
    void sum(timeDemo t1, timeDemo t2)
    {
        	timeDemo t3;
         	t3.ss=t1.ss+t2.ss;
t3.mm=t1.mm+t2.mm+(t3.ss/60);
	t3.hh=t1.hh+t2.hh+(t3.mm/60);
	 t3.mm=t3.mm%60;
	 t3.ss=t3.ss%60;
	 cout<<" Total Time is: "<<t3.hh<<":"<<t3.mm<<":"<<t3.ss;
    }
};
int main()
{
	int h1,m1,s1;
	int h2,m2,s2;
	cout<<" Enter first time :- "<<endl;
	cout<<" Hours: ";
	cin>>h1;
	cout<<" Minutes: ";
	cin>>m1;
	cout<<" Seconds: ";
	cin>>s1;
	cout<<" Enter second time :- "<<endl;
	cout<<" Hours: ";
	cin>>h2;
	cout<<" Minutes: ";
	cin>>m2;
	cout<<" Seconds: ";
	cin>>s2;
	
	timeDemo t4,t5,t6;
	t4.getTime(h1,m1,s1);
	t5.getTime(h2,m2,s2);
    	t6.sum(t4,t5);
	return 0;
}