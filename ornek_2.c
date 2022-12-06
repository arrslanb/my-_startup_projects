#include<stdio.h>
int main(){
	
	int s1,s2;
	printf("sayilari sirasiyla giriniz:\n");
	scanf("%d%d",&s1,&s2);
	if(s2>s1){
		printf("en buyuk %d",s2);
	}
	else{
		printf("en buyuk s1");
	}
	
	return 0;
}
