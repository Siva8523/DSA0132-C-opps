#include<iostream>
using namespace std;
class biggest
{
    int x,y,m;
	public:
		void input();
		void display();
};

void biggest::input(){
	cout<<"enter the first number:";
	cin>>x;
	cout<<"enter second number";
	cin>>y;
	
}
void biggest::display(){
	if(x>y){
	cout<<"biggest number is"<<x;
   }
   else{
   	cout<<"biggest number is:"<<y;}
}
int main(){
	biggest a;
	a.input();
	a.display();
	return 0;
}
