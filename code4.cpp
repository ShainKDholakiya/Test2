#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	cout<<"Enter the value of m: "<<endl;
	cin>>m;
	while (n != 0)
	 {
	 if(n < m)
	  {
	m=m-n;
	cout<<m<<endl;
	 cout<<" n and m value are swap to each other and again check condition "<<endl;
	  }
	else
	  {
	  int temp = m;
	  m = n;
	  n = temp;
	  }
	  }
}
