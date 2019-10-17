#include<stdio.h>

double Converter_De_quilogramas_Para_libras(double Massa){
   
    return Massa * 2.205; //Esta função retorna a conversão de quilogramas para libras.  
}

double Converter_de_libras_para_quilogramas(double Massa){
   
    return Massa / 2.205; //Esta função retorna a conversão de libras para quilogramas .
     
}

int main() {
   
    double Massa; // Valor de massa
char tipo; //Tipo de medida de massa

printf("Informe qual o peso da massa\n");
scanf("%lf", &Massa); //Recebendo o peso da massa.
printf("Informe qual o tipo massa:\n");
scanf("%s", &tipo); //Recebendo o tipo que mede o peso da massa.


if(tipo == 'K' ){ //Teste para o recebimento do tipo de medida da massa.
   Massa = Converter_De_quilogramas_Para_libras(Massa); // Atribuindo a Massa para receber o valor retornado pela função Converter_De_quilogramas_Para_libras
   printf("%.2f libras", Massa); //Exibindo o valor convertido em M/s  
  } else if(tipo == 'L' ){ // Teste para recebimento da Massa em Libras.
   Massa = Converter_de_libras_para_quilogramas(Massa); // Atribuindo a Massa para receber o valor retornado pela função Converter_de_libras_para_quilogramas
   printf("%.2f quilogramas", Massa); // Exibindo o valor convertido em quilogramas
  }
 
return 0;
}
