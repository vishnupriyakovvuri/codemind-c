#include<stdio.h>
int main()
{
	int n,m,r,c,d,k,i;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		c=0;
		d=0;
	k=i;
	while(k>0)
	{
		r=k%10;
		if(r!=0&&i%r==0)
		{
			d++;
		}
		c++;
		k=k/10;
	}
	if(c==d)
	{
		printf("%d ",i);
	}
}
} 