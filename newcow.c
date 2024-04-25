#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
void affiche_vache()
{
        printf("         ^__^\n\
         (oo)\\_______ \n\
         (__)\\       )\\/\\ \n\
            ||----w |\n\
            ||     ||\n");
}

int main ()
{
        affiche_vache();
}
*/

int genere_entier(){
    srand(time(NULL));
    return  rand() % 6;   
}    

char* genere_quote(){
    int entier = genere_entier();
    if (entier == 1)
        return "VOTRE RAPPORT EST MOCHE";
    else if (entier == 2 )
        return "     TAB TAB TAB   ";
    else if (entier == 3 )
        return "     c'est evident  ";
    else if (entier == 4 )
        return "tu es triste? arrete ";
    else 
        return "??? a quoi cela sert"; 
}

void affiche_vache(int argc, char *argv[]){

        if (argc > 1) {                                                                                      // Regarde si il y a des arguments.
                if ((argv[1][0] == '-' && argv[1][1] == 'e' && argv[1][2] == '\0') && (argv[2][2] == '\0'))  // Vérifie si les 2 arguments correspondent bien à -e et un 2e argument qui a 2 caractères.
                {
                        printf("         ^__^\n");
                        printf("         (%s)\\_______ \n",argv[2]);
                        printf("         (__)\\       )\\/\\ \n\
             ||----w |\n\
             ||     ||\n");
                } 
                else if (argv[1][0] == '-' && argv[1][1] == 'p' && argv[1][2] == '\0') {
                        printf("         ^__^\n");
                        printf("         (@@)\\_______ \n");                                              // Yeux @@ si -p
                        printf("         (__)\\       )\\/\\ \n\
             ||----w |\n\
             ||     ||\n");
                } 
                else if (argv[1][0] == '-' && argv[1][1] == 'g' && argv[1][2] == '\0') {
                        printf("         ^__^\n");
                        printf("         ($$)\\_______ \n");                              // Yeux $$ si -g
                        printf("         (__)\\       )\\/\\ \n\
             ||----w |\n\
             ||     ||\n");

                } 
                else if (argv[1][0] == '-' && argv[1][1] == 't' && argv[1][2] == '\0'){
                        printf("                         --------------------\n");
                        printf("                      < %s\\ \n",genere_quote());
                        printf("                         ---------------------\n");
                        printf("              ^__^                           \\   ^__^\n");
                        printf("      _______/(TT)                            \\  (oo)\\_______\n");
                        printf("  \\/\\(       /(__)                               (__)\\       )\\/\\\n");
                        printf("     | w----||                                       ||----w |\n");
                        printf("     ||     ||                                       ||     ||\n");
                        printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    
                        }
                
                
                else {
                        printf("         ^__^\n");
                        printf("         (oo)\\_______ \n");
                        printf("         (__)\\       )\\/\\ \n\
             ||----w |\n\
             ||     ||\n");
                }
                        
        }       
        else {                                                                                             // Cas ou il n'y a pas d'arguments.
                printf("         ^__^\n");
                printf("         (oo)\\_______ \n");
                printf("         (__)\\       )\\/\\ \n\
             ||----w |\n\
             ||     ||\n");}
        
}

       

int main (int argc, char *argv[])
{
    affiche_vache(argc, argv);

}
