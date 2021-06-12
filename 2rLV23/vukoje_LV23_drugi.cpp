#include <graphics.h>
#include <conio.h>
#include <stdio.h>

main(){
    //Inicializacija
    int i;
    int gd = DETECT, gm;
    //Graphics Prozor
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,800);
    setbkcolor(0);
    cleardevice();
    //Glavni kod
    setfillstyle(1,14);
    for(;;){
        for(i=0;i<350; i++){
            pieslice(200+i, 240, 30-i %31, 330 + i %31,50); //200+i je x kordinata jer se i stalno povecava te se pacman krece prema desno,240 je visina,30-i %31 kut gdje pocinju usta, 330 + i %31 kut gdje zavrsavaju usta
            delay(5);//delay pauzira program na odredenu duljinu, ovdje je 5 milisekundi
            cleardevice();
        }
        for(i=0; i<160; i++){
            pieslice(550,240+i, 300-i %31, 240 + i %31,50);
            delay(5);
            cleardevice();
        }
        for(i=0;i<360; i++){
            pieslice(550-i, 400, 210-i %31, 150 + i %31,50);
            delay(5);
            cleardevice();
        }
        for(i=0; i<160; i++){
            pieslice(200,400-i, 120-i %31, 60 + i %31,50);
            delay(5);
            cleardevice();
        }
    }
    //zatvaranje prozora
    getch();
    closegraph();
}
