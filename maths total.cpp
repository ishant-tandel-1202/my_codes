#include<stdio.h>
main(){
	int maths,phy,chem,total,subtotal;
	printf("\n Enter maths phyand chem marks :");
	scanf("%d,%d,%d",&maths,&phy,&chem);
	if (maths>=65 && phy>=55 && chem>=50)
	{
		total=maths+phy+chem;
		subtotal=maths+phy;
		if(total>=190 || subtotal>=145){
			printf("\n Eligible");
		}
		else{
			printf("\n not inner Eligible");
		}
	}
	else{
		printf("\n not eligible");
	}
}
