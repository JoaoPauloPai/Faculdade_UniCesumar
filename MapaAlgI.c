#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#define CLI 20
       //RA-20012120-5 
       //Nome-Jo�o Paulo Gomes da Silva
       //Curso-Baxarelado em Engenharia de Software
	  struct Conta_receber{
	  	 int codigo;
	     char nome[30];
         float conta;
         float notas;
         float totalCilente;
	  };
        int main(){
		setlocale(LC_ALL,""); 
		printf("     RA-20012120-5");
        printf("\n     Nome-Jo�o Paulo Gomes da Silva");
        printf("\n     Curso-Baxarelado em Engenharia de Software"); 
        struct Conta_receber clientes[CLI];
	    int i,j = 0;
     	int menu;
     	int codigo = 0;
        float totalCliente = 0;
        float totalNotas = 0;
        int cont = 0;
        int num = 0;
  
   do{
	    printf("\nSelecione a op��o : \n");
	    printf("Item - 1 - Cadastro de Clientes\n");
	    printf("Item - 2 - Imprimir todos os clintes em atraso\n");
	    printf("Item - 3 - Imprimir clinte e valor em atraso\n");
        printf("Item - 4 - Sair do Sistema");
	    scanf("%d",&menu);
	    system("cls");
        switch(menu){ 	
    	case 1: 
	    for(i = 0; i < 2; i++){
	   	    totalCliente = 0;
	   	    int contNota = 0;
	   	    cont = cont + 1;
	   	    clientes[i].codigo = cont;
	        printf("\nDigite o nome do %d Cliente: ",cont);
	        fflush(stdin);
		    gets(clientes[i].nome);
		    for(j = 0; j < 2; j++){
		    	contNota = contNota + 1;
		        printf("\nDigite o valor da %d conta:",contNota);
	            fflush(stdin);
	            scanf("%f",&clientes[i].conta);
    	        totalCliente = totalCliente + clientes[i].conta;
    	        clientes[i].totalCilente = totalCliente;
            }
            totalNotas = totalNotas + clientes[i].totalCilente;
        	}
	     break;
    	 case 2:
	      for(i = 0; i < 2; i++){
	      	    printf("\n------------------------------------------"); 
                printf("\nCLIENTE C�DIGO :%d",clientes[i].codigo);
                printf("\nCLIENTE NOME : %s", clientes[i].nome);
                printf("\nVALOR TOTAL NOTAS EM ATRASO R$ :%.2f",clientes[i].totalCilente);    
           }
         printf("\n----------------------------------------------");
	     printf("\nTOTAL A RECEBER DE TODOS OS CLIENTES R$:%.2f\n",totalNotas);
	    break;
        case 3:
         printf("\nPara pesquisar digite o c�digo do Cliente :");
         scanf("%d",&num);
	    if(num<= 2){
	    	totalCliente = 0;           
	     	i = num -1;
		     printf("\n------------------------------------------"); 
             printf("\nCLIENTE C�DIGO :%d",clientes[i].codigo);
             printf("\nCLIENTE NOME : %s", clientes[i].nome);
             for(j= 0; j <2; j++){
             	printf("\nValor da %d nota : ",j + 1);
             	printf("%.2f",clientes[i].conta);
             	totalCliente = totalCliente + clientes[i].conta;
			 }
             
             printf("\nVALOR TOTAL NOTAS EM ATRASO R$ :%.2f",totalCliente);
     }else{
     	printf("\nn�o foi possovel encontrar o codigo do cliente");
	 }
	 break;
	
    }
  }while(menu!=4);
       printf("Saindo do sistema!");
	   return 0;		
}

