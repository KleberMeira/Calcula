#include<stdio.h>
#include<stdlib.h>

float achar_resultado(float numero, float expo)
{
    float i, resultado = 1;
for(i=0; i<expo; i++) 
		{
		
			resultado*=numero; 
		
		}		

 return resultado;
}



float achar_base( int expoente, int resultado) 
{
	float  base, result_temp, potencia;
	int i,j;

		for (i=1; i<=resultado; i++)
		{
			//armazena o valor de cada numero do looping
			potencia=1;
				//calcula a potencia	
				for(j=1; j<=expoente;j++)
				{
					potencia=potencia*i;
				}
			//compara o resulatado com a potencia, se for igual a base recebe i
			if(potencia==resultado)
			{
				base=i;				
			}
		}
return base;
}


float achar_expoente( float base, float resultado )
{
	/*Basicamente todos vÃ£o funcionar da mesma forma, sÃ£o dois FOR
	o primeiro ele vai correr de 1 atÃ© o resultado isso Ã© nescessario pois ele vai verificar
	todos os numeros atÃ© ele achar o expoente certo que iguala potencia com o resultado*/
	
      float base_temporaria, expoente;
      int i;
      
      // LAÇO DE REPETIÇÃO PARA MULTIPLICAR O NUMERO POR ELE MESMO
      
      base_temporaria=1;
      for(i=0; base_temporaria <= resultado; i++)
	 	{
 		// OPERAÇÃO PARA MULTIPLICAR A BASE POR ELA MESMA
		 base_temporaria = base_temporaria * base;	
				}       
			expoente = i-1;
			        
return expoente;
}






int main(void)
{
	
	
float base,expoente,resultado;
int  volta=1;
int menu;
int opcao;

do{
  printf(" ---------------- Menu -------------------\n\n");
  printf(" Digite [1] para saber o valor do resultado.\n\n");
  printf(" Digite [2] para saber o valor do base.\n\n");
  printf(" Digite [3] para saber o valor da expoente.\n\n");
  printf(" Digite [4] para sair do programa.\n\n\n\n");
  printf(" Digite a opcao desejada\n\n ");
  scanf("\n%d", &menu);
  
  switch(menu)
	{
    
    
    case 1:
		{         
			printf("\t\n\nDigite o valor da base : ");
			scanf("%f",&base);
			printf("\n\n");
			printf("Digite o valor do expoente: ");
			scanf("%f",&expoente);
			printf("\n\n");
				if(base > 0)
				{
					printf(" --------------------------------------\n\n\n");
					printf("\n\n\n\n\n O resultado eh: %f \n\n\n\n\n ", achar_resultado(base,expoente));         
				}else if( base <= 0)
				{
					printf("Invalido! Base tem que ser diferente de zero ou positivo\n\n");
				}else if( base <= 0)
				{
					printf("hj");                                          
				}else
				{                    
					printf("Erro");                         
				}
			printf("Voce que continuar do programa?  SIM [1]  NAO [2]");
			scanf("%d", &opcao);
			
			if(opcao==1){
				volta = 0;
			}
			else{
				volta = 1;
			}   	
				
		break;
		}
              
             
    case 2:
        {
            printf("\n\n Digite o valor do Expoente: ");
            scanf("%f", &expoente);
       
            printf("\n Digite o valor do Resultado: ");
		    scanf("%f", &resultado);
                           
			printf("\n\n\n\n O Valor da base e: %.3f \n\n\n\n", achar_base(expoente, resultado));
        
		printf("Voce que continuar do programa?  SIM [1]  NAO [2]");
			scanf("%d", &opcao);
			
			if(opcao==1){
				volta = 0;
			}
			else{
				volta = 1;
			}                       
                           
        break;
        }                       
             
    case 3:
        {     
			printf("\n Escreva a base: ");
			scanf("%f", &base); 
	
			// Entradas do numero 
			printf("\n Escreva o resultado: ");
			scanf("%f", &resultado); 
                           
			printf("\n\n\n\ O Valor do expoente e: %.3f \n\n\n\n", achar_expoente(base, resultado)); 
            printf("Voce que continuar do programa?  SIM [1]  NAO [2]");
			scanf("%d", &opcao);
			
			if(opcao==1){
				volta = 0;
			}
			else{
				volta = 1;
			}               
        break;    
        }
        
        case 4:
        	{
        		
        		printf("\n Fim da execucao, obrigado!\n\n\n\n");
        		volta = 1;
        	break;
			}
        
                          
             default:
                  { 
                           printf("\n\n\n\n\n\n\n\n\n --------------------------------------\n\n");
                           printf("\nOpcao Incorreta!!\n");
                           printf("\n\n\n\n\nEscolha uma das opcoes abaixo \n\n\n");
                           volta = 0;
                           break;
                  }
	}
  }while(volta==0);    

system("pause");
return 0;

}
