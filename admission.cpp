#include<iostream>
using namespace std;
class student
{
	int reg;
	string name;
	public:
		void getdata()
		{
			cout<<"enter student name:";
			cin>>name;
			cout<<"enter student reg num:";
			cin>>reg;
		}
};
class test:public student
{
	int m1,m2,m3;
	public:
		void getdata1()
		{
			cout<<"enter m1 marks:";
			cin>>m1;
			cout<<"enter m2 marks:";
			cin>>m2;
			cout<<"enter m3 marks:";
			cin>>m3;
		}
};
class sport
{
	int sp;
	public:
		void getdata2(){
		cout<<"enter sports points:";
		cin>>sp;
			
			}
};
class admission:public test,public sport
{
	int m1,m2,m3,sp,reg,total;
	string name;
	public:
	void getdata3(){
	total=m1+m2+m3+sp;


	if(total>200)
	{
		cout<<"name"<<name;
		cout<<"reg"<<reg<<"\n";
		cout<<"total marks is more than 200 "<<"\n";
		cout<<"so got admission";
	}
	else{
		cout<<"name"<<name;
		cout<<"reg"<<reg<<"\n";
		cout<<"total marks is less than 200 ";
		cout<<"so  do not got admission";
		
	}}};
	int main()
	{
		admission v;
		v.getdata();
		v.getdata1();
		v.getdata2();
		v.getdata3();
		return 0;
   }
