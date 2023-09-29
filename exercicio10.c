#include<stdio.h>
#include<string.h>
main(){

    int cidades=0, cidades_RS=0, codigo_cidade, cidade_indice_menor=0, cidade_indice_maior=0, veiculos_passeio=0, acidentes, maior_indice=0, menor_indice=9999, total_veiculos=0, total_acidentes=0, opcao, total_acidentes_RS=0;
    float media_veiculos, media_acidentes_RS;
    char estado[5];

    do{
        printf("----------------------------\n");
        printf("Informe o codigo da cidade: ");
        scanf("%d", &codigo_cidade);
        fflush(stdin);
        printf("Estado: ");
        fgets(estado, 5, stdin);
        fflush(stdin);
        printf("Numero de veiculos de passeio: ");
        scanf("%d", &veiculos_passeio);
        printf("Numero de acidadentes com vitimas: ");
        scanf("%d", &acidentes);

        cidades++;
        total_veiculos += veiculos_passeio;
        total_acidentes += acidentes;

        if(acidentes > maior_indice){
            maior_indice = acidentes;
            cidade_indice_maior = codigo_cidade;
        }

        if(acidentes < menor_indice){
            menor_indice= acidentes;
            cidade_indice_menor = codigo_cidade;
        }
        
        if(strstr (estado, "RS")){
            cidades_RS++;
            total_acidentes_RS += acidentes;
        }
        printf("------------------\n");
        printf("Deseja continuar\n");
        printf("[1] Sim [0] Nao \n-->");
        scanf("%d", &opcao);
    }while(opcao > 0);
    
    media_veiculos= (float)total_veiculos/cidades;
    media_acidentes_RS = (float)total_acidentes_RS/ cidades_RS;
    printf("===============ESTATITICAS===============\n");
    printf("Menor indice de acidentes:\n");
    printf("Cidade : %d \nIndice de acidentes: %d\n", cidade_indice_menor, menor_indice);
    printf("--------------------------\n");
    printf("Maior indice de acidentes:\n");
    printf("Cidade : %d \nIndice de acidentes: %d\n", cidade_indice_maior, maior_indice);
    printf("--------------------------\n");
    printf("Media de veiculos das cidades brasileiras: %.2f\n", media_veiculos);
    printf("Media de acidentes com vitimas entre as cidade do RS: %.2f\n", media_acidentes_RS);




}