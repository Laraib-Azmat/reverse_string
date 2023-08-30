#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main(){
int l;
char chr;

 string str;   // also take char str[100]
cout<<"enter string   :  ";
getline(cin,str,'\n');                  //cin.getline(str,20)

l=str.length();                         // strlen(str)
for (int i=0;i<l/2;i++){
	chr=str[i];
	str[i]=str[l-1-i];
	str[l-1-i]=chr;}
	
	cout<<"reverse string: "<<str;
	return 0;
}



	
	

