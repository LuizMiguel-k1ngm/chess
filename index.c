#include <stdio.h>


void movBispo(int casa, int max){
	if( casa > max) return;
	printf("casa %d: direita \n ", casa );
	movBispo(casa+1, max);
	
	
}


void movTorre(int casa, int max){
	if(casa > max) return;
	printf("casa %d: cima, direita\n ", casa );
	movTorre(casa+1, max);
	
	
}

void movRainha(int casa, int max){
	if(casa > max) return;
	printf("casa %d: esquerda\n", casa);
	movRainha(casa+1, max);
	
}


void movCavalo(int contador){
	  if (contador < 2) {
        printf("cima\n");
        movCavalo(contador + 1); 
    } else {
        printf("direita\n");
    }
	
	
	
}


main(){
	printf("Movimento da Torre\n");
	movTorre(1, 5);
	printf("------------------------------------------------------------------\n");
	
	
	printf("Movimento do Bispo\n");	
	movBispo(1,5);
	printf("------------------------------------------------------------------\n");
	
	printf("Movimento da Rainha\n");	
	movBispo(1,8);
	printf("------------------------------------------------------------------\n");
	
	
	printf("Movimento cavalo\n");
	movCavalo(0);
	
	
	
}
