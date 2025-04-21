#include<iostream>
#include<cmath>
using namespace std;
class c
{
	private:
	     int x,y;
	    
	public:
		friend void distance(c x1,c y1);	
	c(int a,int b)
	{
		x=a;
		y=b;
	}	
	
		
		void display(void)
		{
			cout<<"the value of coordinate("<<x<<","<<y<<")"<<endl;
		//	cout<<"the value of distance between coordinate"<<d<<endl;
		}
};
void distance(c x1,c x2)
{
	int d=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
		cout<<"the value of distance between coordinate"<<d<<endl;
}
 


int main()
{
	c c1,c2;
	c1.setnum(2,4);
	c1.display();
	c2.setnum(5,2);
	c2.display();
	
	return 0;     
}
