#include<stdio.h>
int main(){
	int n;
	scanf("%d ",&n);
	int m;
	int sum1=0,sum2=0;
	int num1=0,num2=0;
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		if(m%2!=0){
			sum1+=m;
			num1++;
		}
		else{
			sum2+=m;
			num2++;
		}
	} 
	printf("%d\n%d\n%d\n%d",sum1,num1,sum2,num2);
	return 0;
	
	
	
}
