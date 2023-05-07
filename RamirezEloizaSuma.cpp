#include<iostream>
using namespace std;
int main()
{
	int l,c=0;
	float a=0,x;
	cout<<"Ingrese el limite:";
	cin>>l;
	do
	{
		cout<<"Ingrese x:";
		cin>>x;
		c=c+1;
		a=a+x;;
	}
	while(c<l);
	cout<<"El resultado fue:"<<a<<endl;
	return (0);
}
