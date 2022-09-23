#include<iostream>
int main()
{
	int age,vote;
	std::cout<<"enter a age";
	std::cin>>age;
	if(age>=18)
	{
		std::cout<<"he is eligible for vote"<<"\n";
	}
	else if(age<18)
	{
		std::cout<<"he is not eligible for vote:"<<"\n";{
		vote=18-age;
	 std::cout<<"need more:"<<vote<<"years";}
	}
	else if(age<0){
		std::cout<<"you not yet born";
	}
	else{
		std::cout<<"enter a valid age";
	}
	
	 
	 return 0;
}
