#include <stdio.h>
main(){
    int x;
    int *px;
    px=&x;
    printf("Unesite krajnu granicu raspona:");
    scanf("%d",&x);
    for(int i=0;i<*px;i++){
        if(i%2==0){
            printf("%d je paran broj\n",i);
        }
    }
}
