#include <stdio.h>

//Funktionen
//---------------------------------------------------------
int textLaenge(char input[]) {
    int laenge = 0;
    while(input[laenge] != '\0' && input[laenge] != '\n') {
        laenge++;
    }
    return laenge;
}

void textUmdrehen(char input[], char invert[], int laenge) {
    for(int i = 0; i < laenge; i++) {
    invert[i] = input[laenge - 1 - i];
    }
    invert[laenge] = '\0';
}

//---------------------------------------------------------

int main() {
    char input[100];
    char invert[100];
    int laenge;
    
    do {
        printf("Gib hoechstens 99 Zeichen ein: \n");
        fflush(stdin);
        fgets(input, 99, stdin);
        
        laenge = textLaenge(input);
        textUmdrehen(input, invert, laenge);
        
        printf("Deine Zeichen in umgekehrter Reihenfolge: %s\n", invert);
    
        printf("Druecke Enter, um das Programm zu beenden. Um es fortzufuehren, gib weitere Zeichen ein.\n");
        
    }while(laenge > 0);
    
return 0;
}