#include<iostream>
using namespace std;

int main()
{
	int num = 10;
	if(num % 2 == 0) // if number is divided by 2, then it is even
	{
		cout<<num<<" is Even"<<endl;
	}
	else
	{
		cout<<num<<" is Odd"<<endl;
	}
	return 0;
}