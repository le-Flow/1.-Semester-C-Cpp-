#include <stdio.h>
#include <string.h>

#define MAXV 50
#define MAXN 50
#define MAXL 100
#define clearStdin() while(getchar() != '\n')


typedef struct student {
    unsigned int matrikelnummer;
    unsigned char fachsemester;
    char vorname[MAXV];
    char nachname[MAXN];
} student;

void menu();

void init(student sl[MAXL]) {
    for (int i = 0; i < MAXL; i++){
        sl[i].matrikelnummer = 0;
        sl[i].fachsemester = 0;
        strcpy(sl[i].vorname, "n.n.");
        strcpy(sl[i].nachname, "n.n.");
    }
    return;
}

void eingeben(student sl[MAXL]) {
    int eingabe;

    reset:
    printf("1   Neuen eintrag hinzufuegen\n"
           "2   Zurueck zum Hauptmenue\n");

    failsafe:
    printf("\nDie eingabe muss zwischen 1-2 sein!\nEingabe:");
    clearStdin();
    scanf("%d", &eingabe);

    switch (eingabe) {
        case 1:
            for (int i = 0; i < MAXL; i++) {
                if (sl[i].matrikelnummer == 0) {
                    printf("Vorname: ");
                    clearStdin();
                    scanf("%s", sl[i].vorname);

                    printf("Nachname: ");
                    clearStdin();
                    scanf("%s", sl[i].nachname);

                    printf("Matrikelnummer: ");
                    clearStdin();
                    scanf("%d", &sl[i].matrikelnummer);

                    printf("Fachsemester: ");
                    clearStdin();
                    scanf("%c", &sl[i].fachsemester);
                    goto reset;
                }
            }
            printf("Keine freier Platz vorhanden!\n");
            goto reset;
        case 2:
            return;
        //default: goto failsafe;
    }
}

void suchen(student sl[MAXL]) {
    char buffer[MAXN];

    printf("Nachname des Studenten eingeben: ");
    clearStdin();
    scanf("%s", buffer);

    for (int i = 0; i < MAXL; i++) {
        if (strcmp(buffer, sl[i].nachname) == 0) {
            printf("Student ist enthalten!\n");
            return;
        }
    }
    printf("Student ist nicht enthalten!\n");
}


void loeschen(student sl[MAXL]) {
    int eingabe;
    char buffer[MAXN];

    reset:
    printf("1   Eintrag Loeschen\n"
           "2   Zuruek zum Hauptmenue\n");
    printf("Die eingabe muss zwischen 1-2 sein!\nEingabe:");
    clearStdin();
    scanf("%d", &eingabe);

    switch (eingabe) {
        case 1:
            printf("Geben sie einen Nachname an:");
            scanf("%s", buffer);

            for (int i = 0; i < MAXL; i++) {
                if (strcmp(buffer, sl[i].nachname) == 0) {
                    sl[i].matrikelnummer = 0;
                    sl[i].fachsemester = 0;
                    strcpy(sl[i].nachname, "n.n.");
                    strcpy(sl[i].vorname, "n.n.");

                    printf("Student wurde geloescht!\n");
                    goto reset;
                }
            }
            printf("Student ist nicht enthalten!\n");
            goto reset;
        case 2:
            return;
        //default: goto reset;
    }
}

void print(student sl[MAXL]) {
    for (int i = 0; i < MAXL; i++) {
        printf("%d.\nName: %s %s \n", i + 1, sl[i].vorname, sl[i].nachname);
        printf("Matrikelnummer: %d \n", sl[i].matrikelnummer);
        printf("Fachsemester: %c\n", sl[i].fachsemester);
    }
}

int main(void) {
    student studenten[MAXL];
    int eingabe = 0;

    while(1) {
        printf("Bitte waehlen Sie:\n"
               "1       Student eingeben\n"
               "2       Student suchen\n"
               "3       Student loeschen\n"
               "4       Liste drucken\n"
               "5       Liste initialisieren\n"
               "6       Programm beenden\n");

        failsafe:
        printf("Die eingabe muss zwischen 1-6 sein!\nEingabe:");
        scanf("%d", &eingabe);

        switch (eingabe) {
            case 1:
                eingeben(studenten);
                break;
            case 2:
                suchen(studenten);
                break;
            case 3:
                loeschen(studenten);
                break;
            case 4:
                print(studenten);
                break;
            case 5:
                init(studenten);
                break;
            case 6:
                exit(0);
            default:
                goto failsafe;
        }
    }
    return 0;
}