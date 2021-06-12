#include <graphics.h>
#include <conio.h>
#include <stdio.h>

void Kocka();
void Romb();
void Kvadrat();
void Pravokutnik();

main(){
    initwindow(640,480);

    Kvadrat();
    Romb();
    Pravokutnik();
    Kocka();
    getch();
    closegraph();
}

void Kvadrat(){
    line(400,10,500,10);
    line(500,10,500,110);
    line(500,110,400,110);
    line(400,110,400,10);
}

void Romb(){
    line(100,100,150,50);
    line(150,50,200,100);
    line(200,100,150,150);
    line(150,150,100,100);
}

void Pravokutnik(){
    line(400,200,500,200);
    line(500,200,500,250);
    line(500,250,400,250);
    line(400,250,400,200);
}

void Kocka(){
    //kvadrat prednji
    line(100,310,200,310);
    line(200,310,200,410);
    line(200,410,100,410);
    line(100,410,100,310);
    //kvadrat straznji
    line(150,260,250,260);
    line(250,260,250,360);
    setlinestyle(1,1,1);
    line(250,360,150,360);
    line(150,360,150,260);
    //spojne linije
    line(100,410,150,360);
    setlinestyle(0,1,1);
    line(100,310,150,260);
    line(200,310,250,260);
    line(200,410,250,360);
}
