#include<stdio.h>

int main(void){
    int sayi = 0, i;
    do{
        printf("Bir sayi girin:");
        scanf("%d",&i);
        sayi += i;
        printf("%d \n", sayi);
    } while (0 <= i);
    return 0;
}
