#include <iostream>
#include <windows.h>

using namespace std;
void printMaze();
void printPlayer();
void printEnemy();
void erasePlayer();
void eraseEnemy();
void movePlayerLeft();
void movePlayerRight();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();

int pX = 30, pY = 20;
int eX = 2, eY = 2;

int main()

{
    system("cls");
    printMaze();
    printEnemy();
    printPlayer();
    while (true)
    {
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        moveEnemy1();
        moveEnemy2();
        moveEnemy3();
        Sleep(50);
    }


}
void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ')
    {
        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}
void movePlayerRight()
{
    if (getCharAtxy(pX + 14, pY) == ' ')
    {
    
        erasePlayer();
        pX = pX + 1;
        printPlayer();
    }
}

void printMaze()
{

    cout << "########################################################################################" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "########################################################################################" << endl;
}

void printPlayer()
{
    gotoxy(pX, pY);
    cout << "      /\\     ";
    gotoxy(pX, pY + 1);
    cout << "     /  \\    ";
    gotoxy(pX, pY + 2);
    cout << "|~~~|    |~~~|";
    gotoxy(pX, pY + 3);
    cout << "|~~~|    |~~~|";
    gotoxy(pX, pY + 4);
    cout << "    |    |    ";
    gotoxy(pX, pY + 5);
    cout << "    \\~~~/    ";
}
void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "              ";
    gotoxy(pX, pY + 1);
    cout << "              ";
    gotoxy(pX, pY + 2);
    cout << "              ";
    gotoxy(pX, pY + 3);
    cout << "              ";
    gotoxy(pX, pY + 4);
    cout << "              ";
    gotoxy(pX, pY + 5);
    cout << "              ";
}
void printEnemy()
{
    gotoxy(eX, eY);
    cout << "    /\\   ";
    gotoxy(eX, eY + 1);
    cout << "   /  \\  ";
    gotoxy(eX, eY + 2);
    cout << "|||~~~~|||";
    gotoxy(eX, eY + 3);
    cout << "   \\  /  ";
    gotoxy(eX, eY + 4);
    cout << "    \\/   ";
}
void eraseEnemy()
{
    gotoxy(eX, eY);
    cout << "          ";
    gotoxy(eX, eY + 1);
    cout << "          ";
    gotoxy(eX, eY + 2);
    cout << "          ";
    gotoxy(eX, eY + 3);
    cout << "          ";
    gotoxy(eX, eY + 4);
    cout << "          ";
}
void moveEnemy1()
{

    //while (true)
   // {

        Sleep(250);
        eraseEnemy();
        eX = eX + 1;
        if (eX == 30)
        {
            eX = 2;
        }
        printEnemy();
   // }
}
void moveEnemy2()
{

    eX = 31;
    //while (true)
    //{
        Sleep(250);
        eraseEnemy();
        eY = eY + 1;
        if (eY ==  15)
        {
            eY = 2;
        }
        printEnemy();
   // }
}
void moveEnemy3()
{

    eX = 50;
   // while (true)
   // {
        Sleep(250);
        eraseEnemy();
        eX = eX +1;
        if (eX == 80)
        {
            eX = 50;
        }
        printEnemy();
    //}
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{

    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}