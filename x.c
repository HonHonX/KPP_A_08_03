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
	
	char ausgabe[81];
		
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
	
	for (int i=0; i<5; i++){
		
		strcpy(ausgabe,vn[i]);
		int vnL = strlen(vn[i]);
		int nnL = strlen(nn[i]);
		int space = 79-vnL-nnL;
		for(int j=0; j<space; j++)
			strcat(ausgabe,"_");		
		strcat(ausgabe,nn[i]);		
		printf("\n%s",ausgabe);	
	}
	
	
	//Ende
	printf("\n\n");
	return 0;
}
