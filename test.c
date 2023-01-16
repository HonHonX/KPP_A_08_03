#include <stdio.h>
#include <string.h>

void main(){

  int zahl;
  char* vorname[5];
   vorname[0] = "Montag";
   vorname[1] = "Dienstag";
   vorname[2] = "Mittwoch";
   vorname[3] = "Donnerstag";
   vorname[4] = "Freitag";

  char* nachname[5];
   nachname[0] = "Montag";
   nachname[1] = "Dienstag";
   nachname[2] = "Mittwoch";
   nachname[3] = "Donnerstag";
   nachname[4] = "Freitag";


  char ausgabe[81];
  printf("\n");
  for(int i=0; i<5; i++){
    strcpy(ausgabe, vorname[i]);
    int laenge_eins = strlen(vorname[i]);
    int laenge_zwei = strlen(nachname[i]);
    int laenge = 79 - laenge_eins - laenge_zwei;
    for(int n=0; n<laenge; n++){
      strcat(ausgabe, " ");
    }
    strcat(ausgabe, nachname[i]);
    printf("%s\n", ausgabe);
    printf("\n");

  }
  printf("\n\n");

}
