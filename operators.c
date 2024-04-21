#include <stdio.h>
#include <locale.h> //To include Portuguese in output

int main(){
    setlocale(LC_ALL, "Portuguese"); // CTRL+shift+P > ge File Encoding - Save Witch Encoding - Wetern Iso 8859-1
    // Declaring variables
    int A, B, soma, subtr, divi, multpl;
    


    //Requesting input from user
    printf("Digite o primeiro valor\n");
    scanf("%d", &A);
    
    printf("Digite o segundo valor\n");
    scanf("%d", &B);
    //Actions to be made when user put the values
    soma = A + B;
    subtr = A - B;
    divi = A / B;
    multpl = A * B;
    //printing the results
    printf("soma: %d\n", soma);
    printf("subtração dos valores: %i\n", subtr);
    printf("divis dos valores: %d\n", divi);
    printf("multiplicação dos valores: %d\n", multpl);
 


    return 0;
}