#include<iostream>
 int main()
 {
 	std::string nam1;
 	std::string nam2;
 	std::cout<<"enter user nam1:";
 	std::cin>>nam1;
 	std::cout<<"enter user nam2:";
 	std::cin>>nam2;
 	if(nam1==nam2){
 		std::cout<<"is a valid name";
	 }
	 else{
	 	std::cout<<"is a invalid user name";
	 }
	 return 0;
 }
