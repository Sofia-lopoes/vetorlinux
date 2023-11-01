#include <stdio.h>
#include <stdlib.h> 
  
 void main() {
         int vetor [10];
   int n;
    for (n=0; n<10; n++){
 	printf(" selecione o numero do vetor %d:\n", n );
		scanf("%d", &vetor [n]);
  }

    for (n=0; n<10; n++){ 
 	(vetor [n]=vetor [n]*2 );
	printf("O valor Multiplicado é: %d \n", vetor [n] );
}
}
