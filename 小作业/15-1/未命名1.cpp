#include <stdio.h>
char *compress(char *src);
int main(){
	//char a[30]="aaaaabbbabaaaaaaaaaaaaabbbb";
	//char a[10]="abbb";
	//char a[10]="aabbba";
	char a[10]="baaaab";
	char *p=compress(a);
	while(*p!=NULL){
		printf("%d ",*p);
		p++;
	}
	return 0;
	
} 
char *compress(char *src){
	char*p=src;
	static char a[1000]={0};
	int subscript=0;
	int count =1;
	bool flag=0;
	while(*p!=NULL){
		if(*p==*(p+1) && *p==*(p+2) && flag==0){
			flag=1;
			a[subscript]=*p;
			subscript++;
		}
		if(*p==*(p+1) && flag==1){
			count++;
			p++;
		}else if(*p!=*(p+1) || flag==0){
			flag=0;
			if(count==1){
				a[subscript]=*p;
				subscript++;
			}else
			{
				a[subscript]=count;
				subscript++;
			}
			count=1;
			p++;
		}else{
			p++;
		}
	}
	return &a[0];
	
}
