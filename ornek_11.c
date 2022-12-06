#include<stdio.h>
int main(){
	
	int s1;
	printf("sayi 1:");
	scanf("%d",&s1);
	
	if(s1%3==0  &&  s1%5==0){
		
		printf("sayi hem 3e hem 5e bolunuyor...");
	}	
	

	else{
		
		printf("bolunmuyor..");
	}
	
	
	
	
	return 0;
}
