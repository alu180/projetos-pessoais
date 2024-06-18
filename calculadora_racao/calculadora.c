#include<stdio.h>
#include<math.h>  



int main(){
  float racao_foguinho;
  float racao_athena;
  //float racao_foguinho_diaria = racao_foguinho * 2;
  //float racao_athena_diaria = racao_athena * 2;
  //float racao_foguinho_semanal = racao_foguinho_diaria * 7;
  //float racao_athena_semanal = racao_athena_diaria * 7;
  //float racao_foguinho_mes = racao_foguinho_semanal * 4;
  
  //float racao_athena_mes = racao_athena_semanal * 4;

  printf("coloque quanto de racao o foguinho come:");
  int deu_certo = scanf("%f", &racao_foguinho);

  printf("coloque quanto de racao a athena come:");
  
  deu_certo = scanf("%f", &racao_athena);

  float racao_foguinho_diaria = racao_foguinho * 2;
  float racao_foguinho_semanal = racao_foguinho_diaria * 7;
  float racao_foguinho_mes = racao_foguinho_semanal * 4;
  float racao_athena_diaria = racao_athena * 2;
  float racao_athena_semanal = racao_athena_diaria * 7;
  float racao_athena_mes = racao_athena_semanal * 4;
  float racao_total = racao_foguinho_mes + racao_athena_mes;

  printf("-------------------------------------------------------\n");
  printf("                    racao        \n");
  printf("-------------------------------------------------------\n");
  printf("            diaria           semanal         mes\n"); 


  //printf("a racao do foguinho diaria eh: %.2f\n",racao_foguinho_diaria);

  //float racao_foguinho_semanal = racao_foguinho_diaria * 7;


  //printf("a racao do foguinho semanal eh: %.2f\n",racao_foguinho_semanal);

  //float racao_foguinho_mes = racao_foguinho_semanal * 4;

  //printf("a racao do foguinho mes eh: %.2f\n",racao_foguinho_mes);

  //float racao_athena_diaria = racao_athena * 2;


  

  //printf("a racao da athena diaria eh: %.2f\n",racao_athena_diaria);


  //float racao_athena_semanal = racao_athena_diaria * 7;


  //printf("a racao da athena semanal eh: %.2f\n",racao_athena_semanal);

  //float racao_athena_mes = racao_athena_semanal * 4;
  

  //printf("a racao da athena mes eh: %.2f\n",racao_athena_mes);

  

  //float racao_total = racao_foguinho_mes + racao_athena_mes;

  printf("foguinho");

  printf("%9.1f %17.1f %14.1f\n", racao_foguinho_diaria, racao_foguinho_semanal, racao_foguinho_mes);

  printf("athena");

  printf("%11.1f %17.1f %14.1f\n", racao_athena_diaria, racao_athena_semanal, racao_athena_mes);

  printf("--------------------------------------------------------\n");
  printf("TOTAL DE RACAO                    %18.2f gramas\n", racao_total);

  
  
  
  
  //printf("o total de racao eh: %.2f\n",racao_total);

  














  return 0;
}