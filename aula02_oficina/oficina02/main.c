#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool ehprimo(int num, int i){
    if(i>3)i++;
    if(num%i == 0) return false;
    if(i>=sqrt(num)) return true;
    return ehprimo(num,i+1);
}

bool primo(int num){
    if(num<=1)return false;
    if(num==2)return true;
    return ehprimo(num,2);
}

int main()
{
    bool resultado;

    resultado = primo(347);
    if (resultado) printf("\n eh primo");
    if (!resultado) printf("\n nao eh primo");
    return 0;
}
