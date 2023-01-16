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
 22   char ausgabe[81];
 23   printf("\n");
 24   for(int i=0; i<5; i++){
 25     strcpy(ausgabe, vorname[i]);
 26     int laenge_eins = strlen(vorname[i]);
 27     int laenge_zwei = strlen(nachname[i]);
 28     int laenge = 79 - laenge_eins - laenge_zwei;
 29     for(int n=0; n<laenge; n++){
 30       strcat(ausgabe, " ");
 31     }
 32     strcat(ausgabe, nachname[i]);
 33     printf("%s\n", ausgabe);
 34     printf("\n");
 35 
 36   }
 37   printf("\n\n");
 38 
 39 }
 */
