#include<stdio.h>

double Converter_De_kmh_Para_ms(double vel){
   
    return vel / 3.6 ; //Esta função retorna a conversão de Km/h por M/s.  
}

double Converter_de_Ms_para_kmh(double vel){
   
    return vel * 3.6; //Esta função retorna a conversão de M/s por Km/h.
     
}

int main() {
   
    double vel; //velosidade

char tipo; //Tipo de velocidade

printf("Informe qual a velocidade:\n");
scanf("%lf", &vel); //Recebendo a velocidade.
printf("Informe qual o tipo velocidade:\n");
scanf("%s", &tipo); //Recebendo qual o tipo da velocidade.


if(tipo == 'K' ){ //Teste para recebimento de velocida em km/h.
   vel=Converter_De_kmh_Para_ms(vel); // Atribuindo a velocidade para receber o valor retornado pela função Converter_De_kmh_Para_ms
   printf("%.2f M/s", vel); //Exibindo o valor convertido em M/s  
  } else if(tipo == 'M' ){ // Teste para recebimento de velocida em M/s.
   vel = Converter_de_Ms_para_kmh(vel); // Atribuindo a velocidade para receber o valor retornado pela função Converter_de_Ms_para_kmh
   printf("%.2f Km/h", vel); // Exibindo o valor convertido em Km/h
  }
 
return 0;
}
