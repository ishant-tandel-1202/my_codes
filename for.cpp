#include<stdio.h>
main(){
	int num,i;
	printf("\n enter num");
	scanf("%d",&num);//25
	for(i=1;i<=10;i++){
		printf("\n %d * %d = %d",num,i,num*i);
	}
}
