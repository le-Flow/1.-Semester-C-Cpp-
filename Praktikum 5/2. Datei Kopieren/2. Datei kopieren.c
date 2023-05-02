#include <stdio.h>
#include <ctype.h>

int main(){
    char *filename = "Bee_Movie.txt";
    FILE *fp = fopen("Bee_Movie.txt", "r");
    char *newfilename = "BEEMOVIE.txt";
    FILE *newfp = fopen("BEEMOVIE.txt", "w");

    if (fp == NULL){
        printf("Datei nicht gefunden! %s", filename);
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF){
    	if (!isspace(ch)){
    		fputc(toupper(ch), newfp);
        	putchar(toupper(ch));
     	}
	}		
}