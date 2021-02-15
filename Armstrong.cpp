#include<stdio.h>
int main()
{
	int b,c,d,e=0;
	while(b<=1000)
	{
		while(c!=0)
		{
			d=c%10;
			e=e+(d*d*d);
			c=c/10;
		}
		if(b==e)
		{
		   printf("%d\n",b);
	    }
		b++;
		c=b;
		e=0;
	}
	return 0;
}
