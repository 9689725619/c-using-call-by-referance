#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a,b;
	cout<<"enter value for a";
	cin>>a>>b;
	swap(a,b);
	cout<<"after swap a="<<a<<" & b="<<b;
	return 0;}
	void swap(int&p,int&q){
		int temp;
		temp=p;
		p=q;
		q=temp;
		
		
	}
	

