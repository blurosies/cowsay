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
    update();
    gotoxy(x+6,y);
    printf("            ^__^\n");
    gotoxy(x+7,y);
    printf("            (o-)\\_______\n");
    gotoxy(x+8,y);
    printf("            (__)\\       )\\/\\\n");
    gotoxy(x+9,y);
    printf("             U  ||----w |\n");
    gotoxy(x+10,y);
    printf("                ||     ||\n");
    gotoxy(x+11,y);
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    sleep (1);
    
}



void affiche_vache(int x, int y,int z){

    update();
    gotoxy(x+z-8,y);
    printf("   ----\n");
    gotoxy(x+z-7,y);
    printf(" < mooo > \n");
    gotoxy(x+z-6,y);
    printf("   ----\n");
    gotoxy(x+z-5,y);
    printf("                  /\\ /\\\n");
    gotoxy(x+z-4,y);
    printf("        \\   ^__^ /  \\  \\\n");
    gotoxy(x+z-3,y);
    printf("         \\  (oo)\\_______\n");
    gotoxy(x+z-2,y);
    printf("            (__)\\       )\\/\\\n");
    gotoxy(x+z-1,y);
    printf("                \\\\----w \\\n");
    gotoxy(x+z,y);
    printf("                 \\\\     \\\\\n");
    gotoxy(x+11,y);
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    usleep (150000);
    
}



int main ()
{         
        affiche_vache(10,20,8);
    
        affiche_vache(10,19,8);
        
        affiche_vache(10,18,8);
        
        affiche_vache(10,17,8);
        
        affiche_vache(10,16,9);
        
        affiche_vache_l(10,15);
        
        affiche_vache(10,14,9);
        
        affiche_vache(10,13,8);
        
        affiche_vache(10,12,8);
        
        affiche_vache(10,11,8);
        
        affiche_vache(10,10,8);
        
}


