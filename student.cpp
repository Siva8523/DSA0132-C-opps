#include<iostream>
using namespace std;
class student
{
	int x,y,reg,mark1,mark2,mark3,total;
	string name;
	public:
		void input();
		void display();
	};
void student::input(){
	cout<<"enter student name:";
	cin>>name;
	cout<<"enter student reg"<<"\n";
	cin>>reg;
	cout<<"enter mark1"<<"\n";
	cin>>mark1;
	cout<<"enter mark2"<<"\n";
	cin>>mark2;
	cout<<"enter mark3"<<"\n";
	cin>>mark3;
}
void student::display(){
	total=(mark1+mark2+mark3)/3;
	cout<<" student name is"<<name<<"\n";
	cout<<" student reg number is"<<reg<<"\n";
	cout<<"mark1="<<mark1<<"\n";
	cout<<"mark2="<<mark2<<"\n";
	cout<<"mark3="<<mark3<<"\n";
	if(mark1>50||mark2>50||mark3>50){
		cout<<";total avverage is :"<<total;}	
}
int main()
{
	student a;
	a.input();
	a.display();
	return 0;
}
