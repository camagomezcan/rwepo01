#include<iostream>
using namespace std;

int primos (int x,int i)
{
double a;
int p, m=0;
while(i<1000)
	{	
	a = x%i;
	if (a == 0)
		{
		 m = m+1;
		}
	i = i+1;
	
	}	
	p=m;
	return p;
}
	
int main() 
	
{
	int x, p, i=1;
	cout<<"Dijite el numero"<<endl;
	cin>>x;
	
    p = primos(x,i);
		
	if (p >= 3)
	
		{
			cout<<x<<" no es numero primo "<<endl;
		}
	else
		{
			cout<<x<<" es numero primo"<<endl;
		}
	return 0;
}
 
		

