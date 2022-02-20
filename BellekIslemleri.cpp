#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int *p=new int[5];
	for(int i=0;i<5;i++)
	{
		*(p+i)=i*i;
		cout<<"Adresi : "<<p+i<<"\t";
		cout<<"Degeri : "<<*(p+i)<<endl;
	}
	p=new int[8];
	cout<<"\nBellek ayrildiktan sonra"<<endl;
	for(int i=0;i<8;i++)
	{
		*(p+i)=i*i;
		cout<<"Adresi : "<<p+i<<"\t";
		cout<<"Degeri : "<<*(p+i)<<endl;
	}
	delete[] p;
	for(int i=0;i<8;i++)
	{
		*(p+i)=i*i;
		cout<<"Adresi : "<<p+i<<"\t";
		cout<<"Degeri : "<<*(p+i)<<endl;
	}
	return 0;
}
