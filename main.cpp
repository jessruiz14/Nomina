//SISTEMA DE NOMINA
#include <stdio.h>
#include <stdlib.h>
int main ()
{
int x;
float y;	
char opc;



printf("\n \n SISTEMA DE NOMINA \n \n");

printf("\n a Cedula\n ");
printf("\n b Nombre del usuario \n");
printf("\n c Area de trabajo \n");
printf("\n d Convenios \n ");
printf("\n e Faltas \n");
printf("\n f Subsidios \n ");
printf("\n g Antiguedad \n ");
printf("\n h Horas extras  \n");
printf("\n i Comisiones \n");
printf("\n j Salir \n");
printf("\n \n Elige la opcion \n");
fflush(stdin);
scanf("%c",&opc);
switch(opc){
        	case 'a':
		printf("\n \n Dame tu numero de cedula: \n");
		scanf("%d",&x);
		printf("No. es %d",x);
		break;
		
			case 'b':
		printf("\nIntroduce tu nombre de usuario\n");
		fflush(stdin);
	    scanf("%c",&opc);
		break;
		
			case 'c':
		printf("\n \n Area de trabajo: \n");
		fflush(stdin);
        scanf("%c",&opc);
		break;
		
		case 'd':
		printf("\n \n Convenios: \n");
		fflush(stdin);
        scanf("%c",&opc);
		break;
		
		case 'e':
		printf("\n \n Faltas: \n");
        scanf("%d",&x);
        printf("Faltas es %d",x);
		break;
		
		case 'f':
		printf("\n \n Subsidios: \n");
        scanf("%f",&y);
        printf("$ es: %.2f",y);
		break;
		
		case 'g':
		printf("\n \n Antiguedad: \n");
		scanf("%d",&x);
		printf("Anios  es %d",x);
		break;
		
		case 'h':
		printf("\n \n Horas extras:: \n");
		scanf("%f",&y);
		printf("No. de horas es: %.1f",y);
		break;
		
		case 'i':
		printf("\n \n Comisiones: \n");
		scanf("%d",&x);
		printf("$ %d",x);
		break;
		
		case 'j':
		printf("\n \n Salir. \n");
		break;
		
		
		
	}
	return 0;
}



