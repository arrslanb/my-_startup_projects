#include<stdio.h>
    int carpim (int dizi[],int size){ // size olarak boyutunu belirtmek zorundayýz
	
	int carpim = 1;
	int i ;
	
	for(i=0;i<size;i++){
		
	carpim = carpim * dizi[i];
				
	}
	return carpim ;

}

    int main(){
	
	int dizi[6] = {1,2,3,4,5,6};
    printf("%d",carpim(dizi,6)); // dizi yazarak dizideki elamanlarý çaðýrdýk.
		
	return 0;
}
