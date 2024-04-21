#include <stdio.h>

#define text "Entrada e saida de dados"

int main (){
    
    // declaring variables to be used
    int age = 0;
    float height = 0.0;
    char name[50] = "";

    // Requesting information from user
    printf("%s\n", text);

    //Requesting age from user and insert its value in the age variable
    //using the format specifier "%d"
    printf("Digite sua idade:\n");
    scanf("%d", &age);

    //Requesting the height and inserting its value in the heoght var
    // using the format specifier "%f"
    printf("Digite sua altura em numeros decimais:\n");
    scanf("%f", &height);

    printf("Digite seu nome:\n");
    scanf("%s", name);

    printf("Dados informados: \n");
    printf("Idade: %d. \n", age);
    printf("Altura: %.2f. \n", height);
    printf("Nome: %s. \n", name);


    return 0;
}