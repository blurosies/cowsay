#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<unistd.h>
void update() {
    printf("\033[H\033[J");
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", x, y);
}


void affiche_vache_l(int x,int y)
{
    gotoxy(x,y);
    printf("  __\n");
    gotoxy(x+1,y);
    printf(" <  \\ \n");
    gotoxy(x+2,y);
    printf("  ----\n");
    gotoxy(x+3,y);
    printf("        \\   ^__^\n");
    gotoxy(x+4,y);
    printf("         \\  (o-)\\_______\n");
    gotoxy(x+5,y);
    printf("            (__)\\       )\\/\\\n");
    gotoxy(x+6,y);
    printf("             U  ||----w |\n");
    gotoxy(x+7,y);
    printf("                ||     ||\n");
}



void affiche_vache(int x, int y){
    gotoxy(x,y);
    printf("  __\n");
    gotoxy(x+1,y);
    printf(" <  \\ \n");
    gotoxy(x+2,y);
    printf("  ----\n");
    gotoxy(x+3,y);
    printf("        \\   ^__^\n");
    gotoxy(x+4,y);
    printf("         \\  (oo)\\_______\n");
    gotoxy(x+5,y);
    printf("            (__)\\       )\\/\\\n");
    gotoxy(x+6,y);
    printf("                ||----w |\n");
    gotoxy(x+7,y);
    printf("                ||     ||\n");
    
    
}

int main ()
{       
        update();
        affiche_vache(10,20);
        usleep (150000);
        update();
        affiche_vache(10,19);
        usleep (150000);
        update();
        affiche_vache(10,18);
        usleep (150000);
        update();
        affiche_vache(10,17);
        usleep (150000);
        update();
        affiche_vache(10,16);
        usleep (150000);
        update();
        affiche_vache_l(10,15);
        sleep (1);;
        update();
        affiche_vache(10,14);
        usleep (150000);
        update();
        affiche_vache(10,13);
        usleep (150000);
        update();
        affiche_vache(10,12);
        usleep (150000);
        update();
        affiche_vache(10,11);
        usleep (150000);
        update();
        affiche_vache(10,10);
        usleep (150000);
        update();
}