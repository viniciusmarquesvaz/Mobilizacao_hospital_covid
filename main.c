#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>






int main() {
char nome[50];
char sexo[50];
int cpf,idade;
int vl=0;
int pontos,i=0; 
char febre,dor_cabeca,nasal,garganta,tosse,respirar,dor_corpo,diarreia,contato,locais;


setlocale(LC_ALL,"Portuguese");
printf("\t\t\t  ____     _     ____      _      ____  _____   ____      ___   \n");
printf("\t\t\t / ___|   / \   |  _ \    / \    / ___||_   _| |  _ \    / _ \  \n");
printf("\t\t\t| |      / _ \  | | | |  / _ \   \___ \  | |   | |_) |  | | | | \n");
printf("\t\t\t| |___  / ___ \ | |_| | / ___ \   ___) | | |   |  _ <   | |_| | \n");
printf("\t\t\t \____|/_/   \_\|____/ /_/   \_\ |____/  |_|   |_| \_\   \___/  \n\n");
printf("\t\t\t\t\t Bem vindo ao menu de cadastro!\n");
printf("\t Programa de triagem inicial para atendimento aos suspeitos de COVID e dos n�o suspeitos:\n");
printf("\n\n\n\n");


printf("Digite seu nome por favor: \n");
scanf("%s",nome);
fflush(stdin);
printf("informe qual o seu sexo abaixo: [masculino] [feminino] [outro] \n");
scanf("%s",sexo);
fflush(stdin);
printf("Digite o seu CPF por favor [apenas n�meros]:  \n");
scanf("%d",&cpf);
fflush(stdin);
printf("Digite sua idade abaixo\n");
scanf("%d",&idade);
fflush(stdin);
system("cls");



printf("\n\t\t\t digite [s] para sim e [n] para o question�rio abaixo as perguntas abaixo: \n\n\n ");


do{

printf("tem febre?\n");
scanf("%c",&febre);
fflush(stdin);
  
  switch(febre){
  	case 's':
  	vl= 5+vl;
  	break;
  	case 'n':
  	vl= vl+0;	
  }
   }while(febre!='s' && febre!='n');

do{

printf("Tem dor de cabe�a?\n");
scanf("%c",&dor_cabeca);
fflush(stdin);
 switch(dor_cabeca){
  	case 's':
  	vl= 1+vl;
  	break;
  	case 'n':
  	vl= vl+0;	
  }

}while(dor_cabeca!='s' && dor_cabeca!='n');


do{

printf("Tem secre��o nasal ou espirros?\n");
scanf("%c",&nasal);
fflush(stdin);
switch(nasal){
  	case 's':
  	vl= 1+vl;
  	break;
  	case 'n':
  	vl= vl+0;	
}
}while(nasal!='s' && nasal!='n');


do{


printf("Tem dor/irrita��o na garganta?\n");
scanf("%c",&garganta);
fflush(stdin);

switch(garganta){
  	case 's':
  	vl= 1+vl;
  	break;
  	case 'n':
  	vl= vl+0;	

}
}while(garganta!='s' && garganta!='n');


do{

printf("Tem tosse seca?\n");
scanf("%c",&tosse);
fflush(stdin);
switch(tosse){
  	case 's':
  	vl= 3+vl;
  	break;
  	case 'n':
  	vl= vl+0;	
	}
	}while(tosse!='s' && tosse!='n');

do{

printf("Tem dificuldade respirat�ria?\n");
scanf("%c",&respirar);
fflush(stdin);
switch(respirar){
  	case 's':
  	vl= 10+vl;
  	break;
  	case 'n':
  	vl= vl+0;	
	}
	}while(respirar!='s' && respirar!='n');


do{

printf("Tem dores no corpo?\n");
scanf("%c",&dor_corpo);
fflush(stdin);
switch(dor_corpo){
  	case 's':
  	vl= 1+vl;
  	break;
  	case 'n':
  	vl= vl+0;	
	}
	}while(dor_corpo!='s' && dor_corpo!='n');

do{

printf("Tem diarr�ia?\n");
scanf("%c",&diarreia);
switch(diarreia){
  	case 's':
  	vl= 1+vl;
  	break;
  	case 'n':
  	vl= vl+0;	
	}
	}while(diarreia!='s' && diarreia!='n');
fflush(stdin);
do{

printf("Esteve em contato, nos ultimos 14 dias,com um caso diagnosticado com COVID-19?\n");
scanf("%c",&contato);
fflush(stdin);
switch(contato){
  	case 's':
  	vl= 10+vl;
  	break;
  	case 'n':
  	vl= vl+0;	
	}
	}while(contato!='s' && contato!='n');

do{

printf("Esteve em locais com grande aglomera��o?\n");
scanf("%c",&locais);
switch(locais){
  	case 's':
  	vl= 3+vl;
  	break;
  	case 'n':
  	vl= vl+0;	
	}
	}while(locais!='s' && locais!='n');

system("cls");

if(vl>=0 && vl<=9){
	printf("\t\t DADOS DO PACIENTE: \n");
printf("Paciente: %s \n",nome);
printf("sexo: %s\n",sexo);
printf("cpf: %d\n",cpf);
printf("idade: %d\n",idade);
printf("A pontua��o de sintomas foi de: %d\n",vl);
printf("\n");
system("color 02"); //caracteres todos verde no prompt para demonstrar alerta de que o risco � baixo
printf("\t\t O PACIENTE DEVE SER DESLOCADO A ALA DE RISCO BAIXO.\n");
}else
 if(vl>=10 && vl<=19){
	printf("\t\t DADOS DO PACIENTE: \n");
printf("Paciente: %s \n",nome);
printf("sexo: %s\n",sexo);
printf("cpf: %d\n",cpf);
printf("idade: %d",idade);
printf("A pontua��o de sintomas foi de: %d\n",vl);
printf("\n");
system("color 0e"); //caracteres todos amarelos no prompt para demonstrar alerta de que o risco � amarelo
printf("\t\tO PACIENTE DEVE SER DESLOCADO A ALA DE RISCO M�DIO.\n");
}else
if(vl>=20){
	printf("\t\t DADOS DO PACIENTE: \n");
printf("Paciente de nome: %s \n",nome);
printf("sexo : %s\n",sexo);
printf("cpf: %d\n",cpf);
printf("idade: %d\n",idade);;
printf("A pontua��o de sintomas foi de: %d\n",vl);
printf("\n");
system("color 04"); // caracteres todos vermelhos no prompt para demonstrar alerta de que o risco � alto
printf("\t\tO PACIENTE DEVE SER DESLOCADO A ALA DE RISCO ALTO.\n");
}






return 0;

}















                                                           
     
	
