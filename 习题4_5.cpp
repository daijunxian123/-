#include<iostream.h>
void main()
{
	int i;
	for(i=1;i<10;i++)
	{
		if(i*i%10==i)
			cout<<i<<" ";
	}
	for(i=10;i<100;i++)
	{
		if(i*i%100==i)
			cout<<i<<" ";
	}
	cout<<endl;
}
