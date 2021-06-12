#include <stdio.h>

void Brojevi(int *px,int *py,int *pz);

main(){
    int a,k=0,l;
    int *pa,*pk,*pl;
    int polje[7];
    int i=0;
    pa=&a;
    pk=&k;
    pl=&l;
    printf("Unesite 7 brojeva:\n");
    for(int i=0;i<7;i++){
        scanf("%d",&polje[i]);
    }
    for(i=0;i<7;i++){
        *pa=polje[i];
        Brojevi(pa,pk,pl);
    }
    printf("Od brojeva koji ste upisali najveci je %d a najmanji %d",*pk,*pl);
}

void Brojevi(int *px,int *py,int *pz){
    if(*px<*pz){
        *pz=*px;
    }
    else if(*px>*py){
        *py=*px;
    }
}
