#include<iostream>
using namespace std;
class printnumber
{
	int n1;
	char *p;
	float n2;
	double n3;
	long int n4;
	public:
		printnumber(int);
		printnumber(char*);
		printnumber(float);
		printnumber(double);
		printnumber(long int);   
};
printnumber::printnumber(int a)
{
	n1=a;
	cout<<"integer is"<<a;
}
printnumber::printnumber(char* b) 
{
	p=b;
	cout<<"character is"<<b;
}
printnumber::printnumber(float c)
{
	n2=c;
	cout<<"float is"<<c;
}
printnumber::printnumber(double d)
{
	n3=d;
	cout<<"double is"<<d;
}
int main()
{
	printnumber p1(88),p2("hi"),p3(3.15),p4(5.2344),p5(12346);
	return 0;
}
