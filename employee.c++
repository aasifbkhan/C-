/*Q1. Design a class employee which includes the following data members:
Emp number
Emp name 
Basic
Member functions:
To Assign initial value
To calculate net salary
To display Net salary with employee details.
Calculate the net salary using the formulae
Gross salary = Basic + DA + HRA, Net salary = Gross salary – Deductions
The following conditions apply for the calculations.
DA is 40 % of basic salary
HRA is 30 % of basic salary
III.   PF is deduction is 10 % of the basic salary.
Answer:-*/
//employee.c++

#include<iostream>
using namespace std;

class employee
{
	int emp_no;
	char* emp_name;
	float base_sal;
	
	public:
	void accept(int x,char y[],float z)
	{
		emp_no = x;
		emp_name = y;
		base_sal = z;
		calculate();
	}
	void calculate()
	{
		float DA = base_sal * 40 / 100;
		float HRA = base_sal * 30 / 100;
		float deduction = base_sal * 10 / 100;
		float gross = base_sal + DA + HRA;
		float net_sal = gross-deduction;
		display(DA, HRA, deduction, gross, net_sal);
	}
	void display(float DA,float HRA,float deduction, float gross, float net_sal)
	{
		cout<<"\n Employee No. :- "<<emp_no<<endl;
		cout<<" Employee Name :- "<<emp_name<<endl;
		cout<<" Basic Salary :- "<<base_sal<<endl;
		cout<<" DA :- "<<DA<<endl;
		cout<<" HRA :- "<<HRA<<endl;
		cout<<" PF :- "<<deduction<<endl;
		cout<<" Gross Salary :- "<<gross<<endl;
		cout<<" Net Salary :- "<<net_sal<<endl;
	}
};

int main()
{
	int a;
	char b[10];
	float c;
	cout<<"\n Enter Employee number=";
	cin>>a;
	cout<<"\n Enter Employee Name=";
	cin>>b;
	cout<<"\n Enter Salary=";
	cin>>c;
	employee emp;
	emp.accept(a,b,c);
}
