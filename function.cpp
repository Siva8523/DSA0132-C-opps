#include<iostream>
using namespace std;
class add
{
    int x,y;
	public:
		void input();
		void display();
};

void add::input(){
	cout<<"enter the first number:";
	cin>>x;
	cout<<"enter second number";
	cin>>y;
	
}
void add::display(){
	cout<<"sum of two numbers"<<x+y;
}
int main(){
	add a;
	a.input();
	a.display();
	return 0;
}
