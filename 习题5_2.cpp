#include <iostream.h>
float S,n;
float f(float n)
{
	int x,i;
	float t;
	x=0;
	t=0;
	for(i=1;i<=n;i++)
	{
		x=x+i;
		t=t+1.0/x;
	}
	return t;
}
void main()
{
	cout<<"请输入一个整数n:";
    float f(float n);
	cin>>n;
	S=f(n);
	cout<<"S="<<S<<endl;
}