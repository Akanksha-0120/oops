#include<iostream>
#include<string>
using namespace std;
class binary
{
	string s;
	public:
		void read(void);
		void chk_bin(void);
		void ones(void);
		void display(void);
		
};
void binary::read(void)
{
	cout<<"enter binary number"<<endl;
	cin>>s;
}
void binary::chk_bin(void)
{
	for(int i=0;s.length();i++)
	{
		if(s.at(i)!='0'&&s.at(i)!='1')
		{
			cout<<"incorrect binary format"<<endl;
			exit(0);
		}
	}cout<<endl;
}

void binary::ones(void)
{
	for(int i=0;s.length();i++){
	
	if(s.at(i)=='0')
	{
		s.at(i)='1';
	}
	else
	{
		s.at(i)='0'; 
	}
 }
}
void binary::display(void)
{
	cout<<"displaying binary number"<<endl;
	
	for(int i=0;s.length();i++)
	{
		cout<<s.at(i);
	}
}
int main()
{
	binary b;
	b.read();
	b.chk_bin();
	b.display();
	b.ones();
	b.display();
	return 0;
}











