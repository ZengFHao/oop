#include <stdio.h>
#include <math.h>
int function(int,int);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",function(a,b));
	return 0;
}
int function(int a,int b)
{
	int cnt=0,n,temp,num,max,min;
	max=(a>b)?a:b;
	min=(b<a)?b:a;
	for(int i=min;i<=max;i++)
	{
		int sum=0;
		int a=0;
		n=1;
		num = i;
		do{
			num /= 10;
			n++;
		}while(num>9);
		if(n<3)
		{
			continue;
		}
		num = i;
		for(int j=0;j<n;j++)
		{
			temp = num%10;
			num /= 10;
			sum += pow(temp,n);
			a=sum;
		} 
		if(i==sum){
			cnt++;
			printf("%d ",i);
		}
	
		
	}
	return cnt;
}
