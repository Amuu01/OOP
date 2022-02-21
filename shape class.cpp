//Multiple inheritence
#include<iostream>
using namespace std;
class rectangle  //base class
{
	protected:
	double len,br;
	public:
		void get_rect()
		{
			cout<<"Input Length:";
			cin>>len;
			cout<<"Input Breadth:";
			cin>>br;
		}
};
class circle //base class
{
	protected:
	double radius;
	public:
		void get_circle()
		{
			cout<<"Input Radius:";
			cin>>radius;
		}
};
class shape:public rectangle,public circle //derived class
{
	double area;
	public:
		void show_rect()
		{
			area=len*br;
			cout<<"Area of Rectangle:"<<area;
		}
		void show_circle()
		{
			area=3.14*radius*radius;
			cout<<"Area of Circle:"<<area;
		}
};
int main()
{
	shape sh;
	sh.get_rect();
	sh.show_rect();
	cout<<"\n-----------------------\n";
	sh.get_circle();
	sh.show_circle();
	return 0;
}
