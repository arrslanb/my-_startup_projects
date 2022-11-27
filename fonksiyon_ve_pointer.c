#include<stdio.h>

void yerdegis(int *a,int *b){
	
	int gecici = *a;
	
	*a = *b ;
	
	*b = gecici;
		
}

int main(){
	
	
	int a = 5 , b=10;
	
	yerdegis(&a,&b);
	
	printf("a:%d b:%d",a,b);	


	return 0 ;
}
