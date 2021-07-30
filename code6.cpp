#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int variable(char buffer[]){
char x[42][20] = {"auto","break","case","char","const","continue","default",
"do","double","else","enum","extern","float","for","goto",
"if","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union",
"unsigned","void","volatile","while"};
int k, f = 0;
for(k = 0; k < 40; ++k){
if(strcmp(x[k], buffer) == 0){
f = 1;
break;
}
}
return f;
}
 
int main(){
char ch, buffer[15], operators[] = "+-*/%=";
ifstream fin("lexicalanalyzerfileQ6.txt");
int i,j=0;
if(!fin.is_open()){
cout<<"error while opening the file\n";
exit(0);
}
while(!fin.eof()){
   ch = fin.get();
  
for(i = 0; i < 6; ++i){
   if(ch == operators[i])
   cout<<ch<<" is operator\n";
   }
  
   if(isalnum(ch)){
   buffer[j++] = ch;
   }
   else if((ch == ' ' || ch == '\n') && (j != 0)){
   buffer[j] = '\0';
   j = 0;
     
   if(variable(buffer) == 1)
   cout<<buffer<<" is keyword\n";
   else
   cout<<buffer<<" is indentifier\n";
   }
  
}
fin.close();
return 0;
}
