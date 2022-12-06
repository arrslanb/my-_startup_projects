#include<stdio.h>
int main(){
	
	int toplam=0,i;
	
	for(i=1;i<100;i++){
		if(i%3==0 && i%5!=0){
			toplam = toplam + i;	
				}
	}
	
	printf("%d",toplam);

	return 0;
}
