#include<stdio.h>
#include<math.h>
main(){
    float  X, Fx, potencia;

    printf("Informe o valor de X: ");
    scanf("%f", &X);

    potencia= pow(X, 2);

    if(potencia - 16 < 0 ){
        printf("Valor nao encontrado");
    }else{
        Fx= ((5 * X) + 3) / sqrt(potencia - 16);
        printf("F(X) %.2f", Fx);
    }
    

}