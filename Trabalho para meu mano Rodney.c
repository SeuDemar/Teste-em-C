#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>


void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void tela()
{
    int t;
    system("color 0E");
    system("cls");
    gotoxy(1, 1);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(1, 2);
    printf("| Teste");
    gotoxy(60, 2);
    printf("Estrutura de dados |");
    gotoxy(1, 4);
    printf("|");
    gotoxy(32, 2);
    printf("UNICV");
    gotoxy(79, 4);
    printf("|");
    gotoxy(1, 3);
    printf("+-----------------------------------------------------------------------------+");
    for (t = 5; t < 24; t++)
    {
        gotoxy(1, t);
        printf("|");
        gotoxy(79, t);
        printf("|");
    }
    gotoxy(1, 22);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(3, 23);
    printf("MSG :");
    gotoxy(1, 24);
    printf("+-----------------------------------------------------------------------------+");
    
}

void TelaCadastroMovimentacao()
{
    tela();
    printf("**Especificacoes da movimentacao**");
    gotoxy(03, 5);
    printf("Codigo Do Produto......: ");
    gotoxy(03, 6);
    printf("Data da Movimentacao...: ");
    gotoxy(03, 7);
    printf("Data da movimentacao...: ");
    gotoxy(03, 8);
    printf("Tipo de Movimentacao...: ");
    gotoxy(03, 9);
    printf("Quantidade.............: ");
    gotoxy(03, 10);
    printf("Valor Unitario.........: ");
    gotoxy(03, 11);
    printf("Valor Total............: ");
    gotoxy(1, 19);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(1, 20);
    printf("|       Quantidade       |       Custo Medio       |       Valor Total        |");
    gotoxy(1, 21);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(1, 22);
    printf("|                        |                         |                          |");
    gotoxy(1, 23);
    printf("+-----------------------------------------------------------------------------+");
}

void MenuDeCadastroProduto(){

}

void ConsultarProduto() {
    
    tela();

    gotoxy(03, 05);
    printf("1 - Consultar Fichario do Produto Geral");
    gotoxy(03, 05);
    printf("2 - Consultar as ordens de codigo");
    gotoxy(03, 05);
    printf("3 - Consultar o codigo alfabetica");
    gotoxy(03, 05);
    printf("4 - Consultar codigo especifico");
    gotoxy(03, 05);
    printf("5 - Retornar menu principal");
}

int main() {   
    int opc;

    tela();
    
    gotoxy(03, 05);
    printf("1 - Menu cadastro de produtos");
    gotoxy(03, 06);
    printf("2 - Menu movimentacao do estoque ");    
    gotoxy(03, 07);
    printf("3 - Finalizar programa");
    gotoxy(03, 8);
    printf("Digite uma opcao : ");
    gotoxy(1, 24);
    scanf("%d", &opc);

    switch (opc)
    {
    case 1 :
        ConsultarProduto();

        break;
    
    default:
        break;
    }

    return 0;

}

