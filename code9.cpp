#include <iostream>
int x = 1;
int y = 3;
int z = 5;
using namespace std;

int main( int argc, char *argv[] ) {
   int a,y,z;  
a = 7;
y = 9;
z = 11;
   cout << "static-scoped y has the value: " << y << "\n";
   cout << "static-scoped y has the value: " << ::y << "\n";
   cout << "static-scoped z has the value: " << z << "\n";
   cout << "static-scoped z has the value: " << ::z << "\n";
int x = 15;
int w = 17;
{
   int a,b,z;  
a = 19;
b = 21;
z = 23;
   cout << "static-scoped w has the value: " << w << "\n";
   cout << "static-scoped x has the value: " << x << "\n";
   cout << "static-scoped y has the value: " << ::x << "\n";
}
}
