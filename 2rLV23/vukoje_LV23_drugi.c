#include <graphics.h>
#include <conio.h>
#include <stdio.h>

main(){
    //Inicializacija
    int x,y;
    int gd = DETECT, gm;
    //Graphics Prozor
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,800);
    setbkcolor(0);
    cleardevice();
    //Glavni kod

    //zatvaranje prozora
    getch();
    closegraph();
}
