#include<iostream>
int main()
{
	int n,i,j;
	std::cout<<"enter a num of rows and coloums";
	std::cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++){
			std::cout<<"*";
		}
		std::cout<<"\n"; 
	}
	return 0;
}
