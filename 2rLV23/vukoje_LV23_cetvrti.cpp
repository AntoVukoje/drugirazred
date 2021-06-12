#include <graphics.h>
#include <conio.h>
#include <stdio.h>

main(){
    //Inicializacija
    int tocketrokuta[10]={110,100,210,200,10,200,110,100};
    int tockeosmerokuta[18]={300,300,325,325,350,325,375,300,375,275,350,250,325,250,300,275,300,300};
    int gd = DETECT, gm;
    //Graphics Prozor
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,800);
    setbkcolor(0);
    cleardevice();
    //Glavni kod
    drawpoly(4,tocketrokuta);
    setfillstyle(3,2);
    fillpoly(9,tockeosmerokuta);
    //zatvaranje prozora
    getch();
    closegraph();
}
