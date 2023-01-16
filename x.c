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
	nn[0] = "Weitmann";
	nn[1] = "Reidenbach";
	nn[2] = "Schmidt";
	nn[3] = "Maurer";
	nn[4] = "Buch";
	
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
