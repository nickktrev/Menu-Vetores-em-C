#include <stdio.h>
#include <locale.h>
#define num 10

int v[];

//prencher vetor
preencheVetor(){
    int x;
    for(x=0;x<num;x++)
        {
        printf("Insira um valor:");
        scanf("%i", &v[x]);
        }   return 0;
}

//mostrar vetor
int mostrarVetor (){
    int x;
   for(x=0;x<num;x++){
    printf("%i | ", v[x]);
  }
  return 0;
}

//vetor ordem inversa
int inversoVetor (){
    int x;
    for(x=9; x>=0; x--){
        printf("%i | ", v[x]);
        }
        return 0;
}

//múltiplos de 2
int mp2 (){
    int x;
    printf("Números múltiplos de 2: \n");
    for(x=0;x<num;x++){
        if (v[x]%2 == 0)
        printf(" %i | ", v[x]);
       } return 0;
}

//múltiplos de 5
int mp5 () {
    int x;
    printf("Números múltiplos de 5: \n");
    for(x=0;x<num;x++){
        if (v[x]%5 == 0){
            printf(" %i | ", v[x]);}
    }  return 0;
}

int ordenarVetor(){

		int x, i;
		for(i=0;i<num;i++){
			for(x=0;x<num-i-1;x++){

				if(v[x] > v[x+1]){
					int aux = v[x];
					v[x] = v[x+1];
					v[x+1] = aux;
				}
			}
		} printf("Números ordenados: \n");
		mostrarVetor();
		return 0;
}

int main()
{
    int op;
    setlocale(LC_ALL, "Portuguese");
    preencheVetor();
    do{printf("\n\tMENU DE OPÇÕES:\n");
    printf("\t 1 - Preencher vetor\n");
    printf("\t 2 - Mostrar vetor\n");
    printf("\t 3 - Mostrar vetor na ordem inversa.\n");
    printf("\t 4 - Mostrar valores múltiplos de 2.\n");
    printf("\t 5 - Mostrar valores múltiplos de 5.\n");
    printf("\t 6 - Ordenar vetor.\n");
    printf("\t 7 - SAIR.\n");
    printf("\t *Escolha uma opção:*\n");
    scanf("%d", &op);
    fflush(stdin);
    switch(op) {
        case 1 : preencheVetor();
        break;

         case 2 : mostrarVetor();
        break;

         case 3 : inversoVetor();
        break;

         case 4 : mp2();
        break;

         case 5: mp5();
        break;

         case 6 : ordenarVetor();
        break;

         case 7 :
        break;

    default : puts("\n\t Opção invalida");break;
    }
    getchar();
    }while(op!= 7);

    return 0;
}
