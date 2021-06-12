#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

main(){
    int n,p,il=0,id=0;
    int xp=800, yp=900, xt,yt,lb=1,db=6;

    srand(time(NULL));
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    initwindow(xp,yp);
    setbkcolor(0);
    cleardevice();

    printf("Unesite broj tocaka: ");
    scanf("%d",&n);
    p=xp/2;
    while(il<n && id<n){
        xt=rand()%xp;
        yt=rand()%yp;
        if(xt<p){
            putpixel(xt,yt,lb);
            il++;
        }
        else if(xt>p){
            putpixel(xt,yt,db);
            id++;
        }
    }


    getch();
    closegraph();
}
