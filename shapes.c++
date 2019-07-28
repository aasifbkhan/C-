/*Q4. Write a C++ program to overload volume function to calculate volume of given geometric figures:

Sphere
Cylinder
Circle
Cube
Rectangle
Answer:-*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class shapes
{
	public:
	float volume(int r,float pi)
	{
//		volume of sphere
		return (4*(pi*r*r*r)/3);
	}
	float volume(float r, float h)
	{
//		volume of cylinder
		return (3.14*r*r*h);
	}
	float volume(float pi,int r,float h)
	{
//		volume of cone
		return (pi*r*r*(h/3));
	}
	float volume(float a)
	{
//		volume of cube
		return (a*a*a);
	}
	float volume(float l,float h, float w)
	{
//		volume of rectangle
		return (l*h*w);
	}
};

int main()
{
	shapes s;
	int n;
	do{
	    cout<<" 1.Volume Of Sphere.\n 2.Volume Of Cylinder.\n 3.Volume Of Cone.\n 4.Volume Of Cube.\n 5.Volume Of Rectangle."<<endl;
	    cout<<" Enter Your Choice = "<<endl;
	    cin>>n;
	    float r,h,w,pi,ans;
	    int r1;
	
	    switch(n)
	    {
		    case 1:
			    cout<<"\n Enter Redius: ";
			    cin>>r1;
			    ans=s.volume(r1,pi=3.14);
			    cout<<"\n Volume Of Sphere = "<<ans<<endl;
			    break;
		    case 2:
			    cout<<"\n Enter Redius: ";
			    cin>>r;
			    cout<<" Enter height: ";
			    cin>>h;
			    ans=s.volume(r,h);
			    cout<<" Volume Of Cylinder = "<<ans<<endl;
			    break;
		    case 3:
			    cout<<"\n Enter Redius: ";
			    cin>>r;
			    cout<<" Enter height: ";
			    cin>>h;
			    ans=s.volume(pi=3.14,r1,h);
			    cout<<" Volume Of Cone = "<<ans<<endl;
			    break;
		    case 4:
			    cout<<"\n Enter Edge: ";
			    cin>>r;
			    ans=s.volume(r);
			    cout<<" Volume Of Cube = "<<ans<<endl;
			    break;
		    case 5:
			    cout<<"\n Enter length: ";
			    cin>>r;
			    cout<<" Enter height: ";
			    cin>>h;
			    cout<<"\n Enter Width:";
			    cin>>w;
			    ans=s.volume(r,h,w);
			    cout<<" Volume Of Rectangle = "<<ans<<endl;
			    break;
			case 6:  void exit();
		    default:
			    cout<<"Invalid Choice";
	    }
	}while(n<6);
	return 0;
}