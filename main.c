#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct {
    void *next;
    int data;
} Node;

Node *cab = NULL;

Node *addNode(int data)
{
    Node *new = NULL;

    if(cab == NULL)
    {
        new = malloc(sizeof(Node));
        new -> data = data;
        new -> next = NULL;
    }

}
void printMenu()
{
    printf("Escolha uma das opcoes abaixo:");
    printf("\n1. Adicionar um Node");
    printf("\n2. Remover um Node");
    printf("\n3. Inserir um Node");
    printf("\n4. Imprimir a lista");
    printf("\n5. Sair do Programa");
}
int main()
{
    int option = -1;
    while(option != 5)
    {
        printMenu();
        printf("\n\nSua opcao: ");
        scanf("%i",&option);
        switch(option)
        {
            case 1:
                //function add
                break;
            case 2:
                //function remove
                break;
            case 3:
                //function insert
                break;
            case 4:
                //print the whole list
                break;
            case 5:
                printf("\nVoce escolheu sair do programa");
                break;
            default:
                printf("\nOpcao Invalida");
                break;
        }
    }
    return 0;
}