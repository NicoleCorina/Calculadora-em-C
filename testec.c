#include <stdio.h>

int soma();
int subtracao();
void imprime_resultado();

void main() {
    int resultado;
    int digito1;
    int digito2;
    int operacao;

    printf ("digite o numero 1:") ;
    scanf("%i", &digito1);
    printf ("digite o numero 2:") ;
    scanf("%i", &digito2);
    printf ("escolha a operacao 1 para soma\n , 2 para subtracao\n , 3 para divisao\n , 4 para divisao") ;
    scanf("%i", &operacao);

    if(operacao == 1){
        soma();    
    }

    if (operacao == 2)  {
        subtracao();
    }     
 
    resultado = soma(digito1, digito2);
    imprime_resultado(resultado, digito1, digito2);

}


int subtracao (int N1, int N2)
{
    int result;
    result = N1 - N2;
    return (result);
}


int soma(int N1, int N2) 
{
  int result;
  result = N1 + N2;
  return(result);
}

int divisao (int N1, int N2)
{
    int result;
    result = N1 / N2;
    return(result)
}


int multiplicacao (int N1, int N2)
{
    int result;
    result = N1 * N2;
    return(result)
}

void imprime_resultado(int M1, int M2, int M3){
        printf ("resultado vale: %d\n", M1) ;
        printf ("um numero foi %d\n", M2) ;
        printf ("e o outro foi %d\n", M3);
}