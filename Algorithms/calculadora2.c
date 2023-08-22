#include <sdtio.h>

int numero1;
int numero2;
int resultado;
char operacao;


printf("Insira uma operação: \n");
scanf("%c", &operacao);

print("Insira dois numeros: \n");
scanf("%d %d", &numero1, &numero2);

if (operacao == '+'){
    resultado = numero1 + numero2 ;
}
else if(operacao=='-') {
    resultado = numero1 - numero2;
}
else if(operacao == '/'){
    resultado = numero1 / numero2;
}
else  if(operacao == '*'){
    resultado= numero1 * numero2;
}
else if(operacao == '%'){
    resultado = numero1 % numero2;
}
else{
    printf("Operação inválida");
}