#include<iostream>
using namespace std;

class employee
{
	private:
	       int a,b,c;

	public:
          int d,e;
          void setdata(int a,int b, int c);
          void getdata()
          {
          	cout<<"the value of a is "<<a<<endl;
          	cout<<"the value of b is "<<b<<endl;
          	cout<<"the value of c is "<<c<<endl;
          	cout<<"the value of d is "<<d<<endl;
          	cout<<"the value of e is "<<e<<endl;
		  }

};

void employee :: setdata(int a1, int b2,int c3)
{
	a=a1;
	b=b2;
	c=c3;
}

int main()
{
	employee akanksha;
	akanksha.d=44;
	akanksha.e=83;
	akanksha.setdata(4,4,5);
	akanksha.getdata();
	return 0;
}
