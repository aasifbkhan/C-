/*Q6. Write a program to demonstrate invocation of constructor and destructor.
Answer:-*/
#include<iostream>
using namespace std;

class constructorDemo
{
    public:
    constructorDemo()
    {
        cout<<"\n You are in default Constructor";
    }
    constructorDemo(int n)
    {
        cout<<"\n You are in parameterized Constructor";
    }
};

int main()
{
    constructorDemo cd;
    constructorDemo cd1(1);
    cd1.~constructorDemo();
    constructorDemo cd;	//[Error] redeclaration of 'constructorDemo cd'
    constructorDemo cd1(1);//[Error] 'constructorDemo cd1()' redeclared as different kind of symbol

    constructorDemo cd2();
    constructorDemo cd3(1);
}
