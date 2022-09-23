#include<iostream>
using namespace std;
int main(){
	char str1,str2,brv=0,r;
	int num, n,choice,digit,rev=0;
	cout<<"enter your choice(1,2):";
	cin>>choice;
	switch (choice){
		case 1:
		cout<<"enter the number:"<<endl;
        cin>>num;
        n=num;
		do
		{
			digit = num%10;
			rev=(rev*10)+digit;
			num=num/10;
		}while(num!=0);
		cout<<"the rev of the number:"<<rev<<endl;
		if(n==rev)
		cout<<"the number is a pallindrome,";
		else
		cout<<"the number is not a pallindrome";
		break;
			case 2:
				cout<<"enter a word:"<<endl;
                cin>>str1;
                str1=r;
		do{
			str2=r%10;
			brv=(brv*10)+str2;
			r=r/10;
		}while(r!=0);
		cout<<"the reverse of string:"<<brv<<endl;
		if(str1==brv)
		cout<<"is a pallindrome.";
		else
		cout<<"is not a pallindrome.";
		break;
		default:
			cout<<"error";
			break;
	}
	return 0;
}
