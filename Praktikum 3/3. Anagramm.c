#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef enum {false, true} bool;

//checks if s1` = s2`
bool ist_anagramm(char *st1, char *st2){
    if (strcmp(st1, st2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//sorts letters alphabetically (s1`, s2`)
const char *SortString(char *s)
{
    int count;
    int i, j;
    char temp;

    int n = strlen(s);

    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    return s;
}

int main(void){

    char s1 [50];
    char s2 [50];
    char st1[50];
    char st2[50];
    int o_len,d_len;

    printf("geben sie das erste Wort ein:\n");
    scanf("%s", &s1);

    for(int i = 0; s1[i]; i++){                     //makes all letters lowercase
        s1[i] = tolower(s1[i]);
    }

    printf("geben sie das zweite Wort ein\n");
    scanf("%s", &s2);

    for(int i = 0; s2[i]; i++){                     //makes all letters lowercase
        s2[i] = tolower(s2[i]);
    }

    strcpy(st1, s1);
    o_len = strlen(s1);
    d_len = strlen(st1);

    strcpy(st2, s2);
    o_len = strlen(s2);
    d_len = strlen(st2);

    if (ist_anagramm(SortString(st1), SortString(st2)))
    {
        printf("%s ist ein Anagramm von %s", s1, s2);
    }
    else
    {
        printf("%s ist kein Anagramm von %s", s1, s2);
    }
    return 0;
}


