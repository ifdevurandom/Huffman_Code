#include <stdio.h>
#include <math.h>


void main(){
	FILE* pf;
	int lettere[25];
	int a;
	pf = fopen("ciao", "r");
	if(pf == NULL){
			printf("Impossibile aprire il file");
			return 0;
	}
	else{
		printf("Funziona fino ad ora \n");
	}
	while(!feof(fp)){
			fscanf(pf,a);
			if(a-97<25){
		        	    lettere[a-97]++; //leggo la distanza dalla lettera "a" del nostro elemento, in questo modo aggiungo +1 alla lettera corrispondente
 				   }
	}	       
	//generazione albero a 5 hop, 2^5=32 e noi abbiamo 25 lettere per cui 7 non saranno usati e quindi possiamo rimuoverli
	

return 0;
}

			

