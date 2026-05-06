#include<stdio.h>
/*
return-type function-name(para1,para2){
   //block
}
*/
 // create function that find area of square & rectangle
 // create function that find simple intrest returing value
void addition(int x,int y){//function definition
  int ans = x+y;
  printf("\n addition of %d and %d=%d",x,y,ans);
}
int square(int num){
	int s = num*num;
	return s;
}
float areaofcircle(int r){
	float area;
	area = 3.14*r*r;
	return area;
}
int main(){
	addition(10,20);//function calling
	addition(50,90);
	int ans =square(12);
	printf("\n square =%d",ans);
	float y=areaofcircle(2);
	printf("\n area of circle=%f",y);
	y=areaofcircle(4);
	printf("\n area of circle=%f",y);
	
}

	

