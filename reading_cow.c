#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<unistd.h>
#include <string.h>

void update() {
    printf("\033[H\033[J");
}

void affiche_vache(int argc, char *argv[]) {
	char *v = argv[1];
	int l = strlen(v);
	char t;	
	
	while (v[0] != '\0')
	{
        update();
		printf(" -----\n");
		printf("< %s >\n",v);
		
		t = v[l-1];
		v[l-1] = '\0';
		l = strlen(v);
		
		
        printf("        \\   ^__^\n");
    
        printf("         \\  (oo)\\_______\n");
        
        printf("            (__)\\       )\\/\\\n");
        
        printf("             %c  ||----w |\n" , t );
        
        printf("                ||     ||\n");
    
	     usleep(1000000);
         
	}
}


int main(int argc, char *argv[]) {
	if (argc < 2)
	{
		printf("Pas assez d'arguments\n");
		return 1;
	}
	affiche_vache(argc, argv);
	return 0;
}