#include<stdio.h>
#include<string.h>

//Hauptprogramm
int main () {
	/*
	*
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *                        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
		
	//Vornamen
	char* vn[5];
	vn[0] = "Laura";
	vn[1] = "Janine";
	vn[2] = "Marlon";
	vn[3] = "Marius";
	vn[4] = "Sharon";
	
	//Nachnamen
	char* nn[5];
	vn[0] = "Weitmann";
	vn[1] = "Reidenbach";
	vn[2] = "Schmidt";
	vn[3] = "Maurer";
	vn[4] = "Buch";
	
	//Ausgabe Array
	char ausgabe[81];
	
	for (int i=0; i<5; i++){
		
		strcpy(ausgabe,vn[i]);
		int vnL = strlen(vn[i]);
		int nnL = strlen(nn[i]);
		int space = 79-vnL-nnL;
		for(int j=0; j<space; j++) {
			strcat(ausgabe,"_")
		}		
		strcat(ausgabe,nn[i]);		
		printf("\n%s",ausgabe);	
	}
	
	
	//Ende
	printf("\n\n");
	return 0;
}

/**
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

 */
