#include <stdio.h>

int main(){

    int NPT, populacao;
    char estado[5], codigo[5], cidade[50];
    float PIB, km;
    
    // Primeira carta

    printf("Seja bem vindo(a), informe os parâmetros da sua carta trunfo: \n");
    printf("Carta da vez: 1\n");
    printf("Digite o UF do estado: ");
    scanf("%s", &estado);
    printf("Digite o código da sua carta (exemplo: UF + 01): ");
    scanf("%s", &codigo);
    printf("Agora, digite o nome da cidade (Caso composto, utilize Sensitive Case ao invés de espaço): ");
    scanf("%s", &cidade);
    printf("Qual a quantidade de habitantes na cidade atualmente? ");
    scanf("%d", &populacao);
    printf("Agora, informe a área da cidade: ");
    scanf("%f", &km);
    printf("Informe o Produto Interno Bruto (PIB) da cidade: ");
    scanf("%f", &PIB);
    printf("Para concluir, informe quantos pontos turísticos há na cidade: ");
    scanf("%d", &NPT);

    printf("Sua carta foi cadastrada com sucesso! \n");
    printf("Aqui estão os dados cadastrados na carta nº1 \n");

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", km);
    printf("PIB: %.2f Bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);

    // Segunda carta

    printf("Informe os parâmetros da sua carta trunfo: \n");
    printf("Carta da vez: 2\n");
    printf("Digite o UF do estado: ");
    scanf("%s", &estado);
    printf("Digite o código da sua carta (exemplo: UF + 02): ");
    scanf("%s", &codigo);
    printf("Agora, digite o nome da cidade (Caso composto, utilize Sensitive Case ao invés de espaço): ");
    scanf("%s", &cidade);
    printf("Qual a quantidade de habitantes na cidade atualmente? ");
    scanf("%d", &populacao);
    printf("Agora, informe a área da cidade: ");
    scanf("%f", &km);
    printf("Informe o Produto Interno Bruto (PIB) da cidade: ");
    scanf("%f", &PIB);
    printf("Para concluir, informe quantos pontos turísticos há na cidade: ");
    scanf("%d", &NPT);

    printf("Sua carta foi cadastrada com sucesso! \n");
    printf("Aqui estão os dados cadastrados na carta nº2 \n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", km);
    printf("PIB: %.2f Bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);



}