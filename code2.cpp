#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the value of x to check condition:"<<endl;
	cin>>x;
	cout<<"Strong precondition for first result y value must be less than 3 \n y = 2*x + 1:"<<endl;
	cout<<"Strong precondition for second result y value must be greatre than 3 \n y = 3*x - 1:"<<endl;
	cout<<"Enter the value of y to check condition:"<<endl;
	cin>>y;
	if( x > y ) 
	{
	y = 2*x + 1;
	cout<<"result: first condition is satisfied so answer is :"<<y<<endl;
	} 
	else 
	{
		y = 3*x - 1;
	cout<<"result: second condition is satisfied so answer is :"<<y<<endl;
     }
}
