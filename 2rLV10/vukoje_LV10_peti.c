#include <stdio.h>
void Parno(int *px){
    int a=*px;
    if(a%2==0){
        printf("%d je paran broj",*px);
    }
    else if(a%2==1){
        printf("%d nije paran broj",*px);
    }
}

main(){
    int a;
    int *pa;
    pa=&a;
    printf("Upisite broj:");
    scanf("%d",&a);
    Parno(pa);
}
