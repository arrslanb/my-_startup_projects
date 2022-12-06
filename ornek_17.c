#include <stdio.h>
 
int main(void){
    int i, j;
    int tf = 0;
    for(i=101; i<200; i+=2){
        for(j=1;j<=i;j++){
            if(i%j==0)
                tf++;
                }
            if(tf == 2){
            tf=i;
            printf("asal sayý: %d \n", tf);
        }
        tf=0;
    }
    return 0;
}
