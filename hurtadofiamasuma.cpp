#include<iostream>
using namespace std;
int main()
{
	int l,c=0;
	float a=0,x;
	cout<<" ingrese el limite:";
	cin>>l;
	do{
		cout<<" ingese x:";
		cin>>x;
		c=c+1;
		a=a+x;
	} while(c<l);
	cout<<" el resultado fue:" <<a<<endl;
	


	return(0);
}
