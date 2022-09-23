#include<iostream>
int main()
{
	int a[5],i,j,t,sum,diff;
	std::cout<<"enter a numbers";
	for(i=0;i<5;i++)
	{
		std::cin>>a[i];
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=1;i<=5;i++)
	{
		sum=a[0]+a[4];
		diff=a[4]-a[0];
	}
	std::cout<<"maximum number is "<<a[4]<<"\n";
	std::cout<<"minimm num is:"<<a[0]<<"\n";
	std::cout<<"sum"<<sum<<"\n";
	std::cout<<"difference"<<diff;
	return 0;
}
