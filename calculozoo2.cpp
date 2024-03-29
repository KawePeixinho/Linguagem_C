#include <stdio.h >
#include <stdlib.h>
#include <locale.h>

void limpar_entrada(){
char c;
while ((c = getchar()) != '\n' && c != EOF){}
}
int main(){
char opcao;
const char* nome;
int numero ;
int qtd_animais ;
float qtd_diaria , qtd_mensal , custo_mensal , qtd_comida , valor_kg ;
setlocale(LC_ALL, "Portuguese");
do{
do{
printf("Olá, seja bem-vindo/a!! \n\n");
printf("Esses são os animais do zoológico: \n 1 - Capivara \n 2 - Vaca \n 3 - Ovelha \n 4 - Tigre \n 5 - Urso \n") ;
printf("Escolha um dos animais pelo número: ") ;
scanf("%i", &numero);
}
while(numero >= 6 or numero <= 0);
printf("\n\nAgora, informe a quantidade que há no zoológico: ");
scanf( "%i", &qtd_animais ) ;
if(numero == 1){
qtd_comida = 25.0 ;
valor_kg = 110.40 ;
nome = "capivara";
}
else if(numero == 2){
qtd_comida = 70.0 ;
valor_kg = 55,90 ;
nome = "vaca";
}
else if(numero == 3){
qtd_comida = 35.0 ;
valor_kg = 140.60 ;
nome = "ovelha";
}
else if(numero == 4){
qtd_comida = 60.0 ;
valor_kg = 100.0 ;
nome = "tigre";
}
else if (numero == 5){
qtd_comida = 90.0 ;
valor_kg = 120.0 ;
nome = "urso";
}
qtd_diaria = qtd_comida * qtd_animais ;
qtd_mensal = qtd_diaria * 30 ;
custo_mensal = valor_kg * qtd_mensal ;
printf("\nespécie: %s\n", nome);
printf("consome diariamente: %.1f KG\n", qtd_diaria);
printf("mensalmente o animal consome: %.1f KG\n", qtd_mensal);
printf("o custo mensal é de R$%.2f \n\n\n", custo_mensal) ;
printf("deseja realizar outro cálculo, (s/n): ");
limpar_entrada();
scanf("%c", &opcao);
}
while( opcao == 's');
printf("\n");
printf("FIM DO PROGRAMA");
return 0 ;
}
