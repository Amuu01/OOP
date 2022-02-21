#include<cmath>
#include<iostream>
using namespace std;
class object_2D
{
	float area;
	public:
		void cal_area(int radius) //circle
		{
			area=3.14*radius*radius;
			cout<<"Area of circle:"<<area<<endl;
		}              
		
		void cal_area(float side)  //square
		{
			area=side*side;
	        cout<<"Area of square: "<<area<<endl;
		}
		void cal_area(int,int,int);   //triangle
		float cal_area(int,int);        //rectangle
};

void object_2D::cal_area(int x,int y,int z)
{
	float s=(x+y+z)/2;
	area=sqrt((s-x)*(s-y)*(s-z)*s);
	cout<<"Area of Triangle: "<<area<<endl;
}
float object_2D::cal_area(int len,int br)
{
	area=len*br;
    return(area);
}

int main()
{
	int ch,rad;
	float side1,side2,side3;
	float ar;
	object_2D C,R,S,T;
	
	while(1)
	{
		system("cls");
		cout<<"Area of Diffrent Objects!!!"<<endl;
		cout<<"1. Area of Circle"<<endl;
		cout<<"2. Area of Triangle"<<endl;
		cout<<"3. Area of Square"<<endl;
		cout<<"4. Area of Rectangle"<<endl;
		cout<<"5. exit"<<endl;
		cout<<"Enter Your Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"Enter The Radius of circle: ";
			       cin>>rad;
				   C.cal_area(rad);
				   break;
			case 2:cout<<"Enter the Sides of a Triangle: ";
			       cin>>side1>>side2>>side3;
			       T.cal_area(side1,side2,side3);
			       break;
			case 3:cout<<"Enter the side square: ";
			       cin>>side1;
			       S.cal_area(side1);
				   break;
			case 4:cout<<"Enter the sides of a rectangle: ";
			       cin>>side1>>side2;
				   ar=R.cal_area(side1,side2);
				   cout<<"Area of Rectangle: "<<ar<<endl;
				   break;
		    case 5:cout<<"Operation Ended.";
			       exit(0);
			default:cout<<"***Wrong Choice***";
			        exit(0);
		}
		system("pause");
	}
	return 0;
}
