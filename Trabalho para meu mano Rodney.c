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
    gotoxy(1, 24);
    printf("+-----------------------------------------------------------------------------+");
    
}

int main() {
    tela ();
    gotoxy();
    printf("Codigo Do Produto......: ");
    gotoxy();
    printf("Data da Movimentacao...: ");
    gotoxy();
    printf("Data da movimentacao...: ");
    gotoxy();
    printf("Tipo de Movimentacao...: ");
    gotoxy();
    printf("Quantidade.............: ");
    gotoxy();
    printf("Valor Unitario.........: ");
    gotoxy();
    printf("Valor Total............: ");
    gotoxy();
    printf("+-----------------------------------------------------------------------------+");
    gotoxy();
    printf("|       Quantidade       |       Custo Medio       |       Valor Total        |");
    gotoxy();
    printf("+-----------------------------------------------------------------------------+");
    gotoxy()
    printf("|                        |                         |                          |");
    gotoxy();
    printf("+-----------------------------------------------------------------------------+");
}

