#include<iostream>
using namespace std;
class programming
{
	string x="cpp";
	public:
		programming();
		programming(string);
		void display();
};
programming::programming()
{
	cout<<"i love programming language";
}
programming::programming(string x)
{
	cout<<"i love "<<x<<endl;
}
void programming::display()
{
	cout<<x<<endl;
}
int main()
{
	programming p1(),p2("programming language");
	//p1.display();
	p2.display();
	return 0;
}
