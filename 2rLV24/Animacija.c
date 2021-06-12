#include <graphics.h>
#include <conio.h>
#include <stdio.h>

main(){
    //Inicializacija
    int x=0,y;
    int gd = DETECT, gm;
    //Graphics Prozor
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,800);
    setbkcolor(0);
    cleardevice();
    //Glavni kod
    while(x<800){
        putpixel(x,400,2);
        x++;
        cleardevice();
    }
    //zatvaranje prozora
    getch();
    closegraph();
}
