#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream indata;
	char ch;
	int words=0, lines=0,chr=0;
	indata.open("sequence.txt");
		indata.get(ch);
	while(indata)
	{
	if(ch=='\n')
	lines++;
		indata.get(ch);
	}
		indata.get(ch);
	while(indata)
	if(ch== ' ')
	{
	words++;
	chr++;
}
indata.get(ch);
while(indata)
{
	chr++;
	indata.get(ch);
}
cout<<"lines ="<<lines<<"\nWords ="<<words<<"\n characters = "<<lines<<endl;
return 0;
}
