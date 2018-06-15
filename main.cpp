#include <ncurses.h>
#include <iostream>
#include <time.h>
#include <sys/time.h>
#include <stdio.h>
#include "unistd.h"

using namespace std;

#define IZQUIERDA 75;
#define DERECHA 77;
#define ESC 27;
//Optimas dimensiones del terminal 132 x 43
//int nave();

int Invacion();
int Avengers();
int Portada();
int naves();
int moves();

int main(int argc, char *argv[])
{

    Portada();
    refresh();

    moves();
    refresh();

    sleep(5);

    endwin();

    return 0;
}

int Portada()
{
    int x = 40, y = 58, tx, ty;
    bool cerrar = true;
    char key = ' ';

    initscr();
    start_color();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);
    int h, w, start_y, star_x;
    h = 30;
    w = 80;
    start_y = star_x = 0;

    init_pair(17, COLOR_BLACK, COLOR_WHITE);
    init_pair(9, COLOR_BLACK, COLOR_BLACK);
    init_pair(12, COLOR_WHITE, COLOR_WHITE);
    init_pair(5, COLOR_BLUE, COLOR_BLUE);
    init_pair(1, COLOR_YELLOW, COLOR_YELLOW);
    init_pair(2, COLOR_BLUE, COLOR_BLUE);
    init_pair(3, COLOR_RED, COLOR_RED);
    init_pair(4, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(6, COLOR_CYAN, COLOR_CYAN);
    init_pair(7, COLOR_BLACK, COLOR_BLACK);
    init_pair(8, COLOR_WHITE, COLOR_BLACK);

    while (cerrar)
    {

        Avengers();

        tx = x;
        ty = y;

        //activar los atributos principales
        attron(COLOR_PAIR(12));
        mvprintw(x, y, " ");
        //mvprintw(x, y, "*");
        mvprintw(x - 1, y, " ");
        mvprintw(x - 1, y + 1, " ");
        mvprintw(x - 2, y, " ");
        mvprintw(x - 2, y + 1, " ");
        mvprintw(x - 2, y + 2, " ");
        mvprintw(x - 3, y, " ");
        mvprintw(x - 2, y + 2, " ");
        mvprintw(x - 2, y + 3, " ");
        mvprintw(x - 2, y + 4, " ");
        mvprintw(x - 2, y + 5, " ");
        mvprintw(x - 2, y + 6, " ");
        mvprintw(x - 2, y + 7, " ");
        mvprintw(x - 2, y + 8, " ");
        mvprintw(x - 2, y + 9, " ");
        mvprintw(x - 2, y + 10, " ");
        mvprintw(x - 2, y + 11, " ");
        mvprintw(x - 3, y + 3, " ");
        mvprintw(x - 3, y + 4, " ");
        mvprintw(x - 3, y + 5, " ");
        mvprintw(x - 3, y + 6, " ");
        mvprintw(x - 3, y + 7, " ");
        mvprintw(x - 3, y + 8, " ");
        mvprintw(x - 4, y + 5, " ");
        mvprintw(x - 4, y + 6, " ");
        mvprintw(x - 5, y + 6, " ");
        mvprintw(x - 1, y + 5, " ");
        mvprintw(x - 1, y + 6, " ");

        //por izquierda
        mvprintw(x, y + 11, " ");
        mvprintw(x - 1, y + 10, " ");
        mvprintw(x - 1, y + 11, " ");
        mvprintw(x - 3, y + 11, " ");

        attroff(COLOR_PAIR(12));
        // desactiva el color

        //activa color ROJO para las zonas de ese color
        attron(COLOR_PAIR(3));
        mvprintw(x - 4, y, " ");
        mvprintw(x - 4, y + 11, " ");
        mvprintw(x - 5, y + 5, " ");
        mvprintw(x - 5, y + 6, " ");
        mvprintw(x - 1, y + 4, " ");
        mvprintw(x - 1, y + 7, " ");
        attroff(COLOR_PAIR(3));
        //desactiva el color

        //activa el color AZUL para las zonas de ese color
        attron(COLOR_PAIR(5));
        mvprintw(x, y + 5, " ");
        mvprintw(x, y + 6, " ");
        attroff(COLOR_PAIR(5));
        //desactiva el color

        key = getch();
        if (key == 10)
        {
            cerrar = false;
            clear();
        }
        else if (key == 'd')
        {
            //Comenzar a pintar de negro
            //activar los atributos principales
            attron(COLOR_PAIR(9));
            mvprintw(tx, ty, " ");
            //mvprintw(tx, ty, "*");
            mvprintw(tx - 1, ty, " ");
            mvprintw(tx - 1, ty + 1, " ");
            mvprintw(tx - 2, ty, " ");
            mvprintw(tx - 2, ty + 1, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 3, ty, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 2, ty + 3, " ");
            mvprintw(tx - 2, ty + 4, " ");
            mvprintw(tx - 2, ty + 5, " ");
            mvprintw(tx - 2, ty + 6, " ");
            mvprintw(tx - 2, ty + 7, " ");
            mvprintw(tx - 2, ty + 8, " ");
            mvprintw(tx - 2, ty + 9, " ");
            mvprintw(tx - 2, ty + 10, " ");
            mvprintw(tx - 2, ty + 11, " ");
            mvprintw(tx - 3, ty + 3, " ");
            mvprintw(tx - 3, ty + 4, " ");
            mvprintw(tx - 3, ty + 5, " ");
            mvprintw(tx - 3, ty + 6, " ");
            mvprintw(tx - 3, ty + 7, " ");
            mvprintw(tx - 3, ty + 8, " ");
            mvprintw(tx - 4, ty + 5, " ");
            mvprintw(tx - 4, ty + 6, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 5, " ");
            mvprintw(tx - 1, ty + 6, " ");
            refresh();

            //por izquierda
            mvprintw(tx, ty + 11, " ");
            mvprintw(tx - 1, ty + 10, " ");
            mvprintw(tx - 1, ty + 11, " ");
            mvprintw(tx - 3, ty + 11, " ");
            refresh();
            //attroff(COLOR_PAIR(12));
            // desactiva el color

            //activa color ROJO para las zonas de ese color
            //attron(COLOR_PAIR(3));
            mvprintw(tx - 4, ty, " ");
            mvprintw(tx - 4, ty + 11, " ");
            mvprintw(tx - 5, ty + 5, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 4, " ");
            mvprintw(tx - 1, ty + 7, " ");
            refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvprintw(tx, ty + 5, " ");
            mvprintw(tx, ty + 6, " ");
            attroff(COLOR_PAIR(9));
            refresh();
            y++;
            refresh();
            if (y == 120)
            {
                y--;
            }
        }
        else if (key == 'a')
        {
            attron(COLOR_PAIR(9));
            mvprintw(tx, ty, " ");
            //mvprintw(tx, ty, "*");
            mvprintw(tx - 1, ty, " ");
            mvprintw(tx - 1, ty + 1, " ");
            mvprintw(tx - 2, ty, " ");
            mvprintw(tx - 2, ty + 1, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 3, ty, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 2, ty + 3, " ");
            mvprintw(tx - 2, ty + 4, " ");
            mvprintw(tx - 2, ty + 5, " ");
            mvprintw(tx - 2, ty + 6, " ");
            mvprintw(tx - 2, ty + 7, " ");
            mvprintw(tx - 2, ty + 8, " ");
            mvprintw(tx - 2, ty + 9, " ");
            mvprintw(tx - 2, ty + 10, " ");
            mvprintw(tx - 2, ty + 11, " ");
            mvprintw(tx - 3, ty + 3, " ");
            mvprintw(tx - 3, ty + 4, " ");
            mvprintw(tx - 3, ty + 5, " ");
            mvprintw(tx - 3, ty + 6, " ");
            mvprintw(tx - 3, ty + 7, " ");
            mvprintw(tx - 3, ty + 8, " ");
            mvprintw(tx - 4, ty + 5, " ");
            mvprintw(tx - 4, ty + 6, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 5, " ");
            mvprintw(tx - 1, ty + 6, " ");
            refresh();
            //por izquierda
            mvprintw(tx, ty + 11, " ");
            mvprintw(tx - 1, ty + 10, " ");
            mvprintw(tx - 1, ty + 11, " ");
            mvprintw(tx - 3, ty + 11, " ");
            refresh();
            //attroff(COLOR_PAIR(12));
            // desactiva el color

            //activa color ROJO para las zonas de ese color
            //attron(COLOR_PAIR(3));
            mvprintw(tx - 4, ty, " ");
            mvprintw(tx - 4, ty + 11, " ");
            mvprintw(tx - 5, ty + 5, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 4, " ");
            mvprintw(tx - 1, ty + 7, " ");
            refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvprintw(tx, ty + 5, " ");
            mvprintw(tx, ty + 6, " ");
            attroff(COLOR_PAIR(9));
            refresh();
            y--;
            refresh();
            if (y == 0)
            {
                y++;
            }
        }
        else if (key == ' ')
        {
            attron(COLOR_PAIR(5));
            for (int i = (tx + 6); i > 0; i++)
            {
                mvprintw(tx + 1, y, "*");
                mvprintw(tx + 2, y, "*");
            }
            attroff(COLOR_PAIR(5));
        }
        else if (key != 'a' || key != 'd' || key != 10 || key != ' ')
        {
            refresh();
        }
    }

    endwin();
    return 0;
}

int moves()
{
    int x = 40, y = 58, tx, ty;
    bool cerrar = true;
    char key = ' ';

    initscr();
    start_color();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);
    int h, w, start_y, star_x;
    h = 30;
    w = 80;
    start_y = star_x = 0;

    init_pair(17, COLOR_BLACK, COLOR_WHITE);
    init_pair(9, COLOR_BLACK, COLOR_BLACK);
    init_pair(12, COLOR_WHITE, COLOR_WHITE);
    init_pair(5, COLOR_BLUE, COLOR_BLUE);
    init_pair(1, COLOR_YELLOW, COLOR_YELLOW);
    init_pair(2, COLOR_BLUE, COLOR_BLACK);
    init_pair(3, COLOR_RED, COLOR_RED);
    init_pair(4, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(6, COLOR_CYAN, COLOR_CYAN);
    init_pair(7, COLOR_BLACK, COLOR_BLACK);
    init_pair(8, COLOR_WHITE, COLOR_BLACK);

    while (cerrar)
    {

        //Avengers();

        tx = x;
        ty = y;

        //activar los atributos principales
        attron(COLOR_PAIR(12));
        mvprintw(x, y, " ");
        //mvprintw(x, y, "*");
        mvprintw(x - 1, y, " ");
        mvprintw(x - 1, y + 1, " ");
        mvprintw(x - 2, y, " ");
        mvprintw(x - 2, y + 1, " ");
        mvprintw(x - 2, y + 2, " ");
        mvprintw(x - 3, y, " ");
        mvprintw(x - 2, y + 2, " ");
        mvprintw(x - 2, y + 3, " ");
        mvprintw(x - 2, y + 4, " ");
        mvprintw(x - 2, y + 5, " ");
        mvprintw(x - 2, y + 6, " ");
        mvprintw(x - 2, y + 7, " ");
        mvprintw(x - 2, y + 8, " ");
        mvprintw(x - 2, y + 9, " ");
        mvprintw(x - 2, y + 10, " ");
        mvprintw(x - 2, y + 11, " ");
        mvprintw(x - 3, y + 3, " ");
        mvprintw(x - 3, y + 4, " ");
        mvprintw(x - 3, y + 5, " ");
        mvprintw(x - 3, y + 6, " ");
        mvprintw(x - 3, y + 7, " ");
        mvprintw(x - 3, y + 8, " ");
        mvprintw(x - 4, y + 5, " ");
        mvprintw(x - 4, y + 6, " ");
        mvprintw(x - 5, y + 6, " ");
        mvprintw(x - 1, y + 5, " ");
        mvprintw(x - 1, y + 6, " ");

        //por izquierda
        mvprintw(x, y + 11, " ");
        mvprintw(x - 1, y + 10, " ");
        mvprintw(x - 1, y + 11, " ");
        mvprintw(x - 3, y + 11, " ");

        attroff(COLOR_PAIR(12));
        // desactiva el color

        //activa color ROJO para las zonas de ese color
        attron(COLOR_PAIR(3));
        mvprintw(x - 4, y, " ");
        mvprintw(x - 4, y + 11, " ");
        mvprintw(x - 5, y + 5, " ");
        mvprintw(x - 5, y + 6, " ");
        mvprintw(x - 1, y + 4, " ");
        mvprintw(x - 1, y + 7, " ");
        attroff(COLOR_PAIR(3));
        //desactiva el color

        //activa el color AZUL para las zonas de ese color
        attron(COLOR_PAIR(5));
        mvprintw(x, y + 5, " ");
        mvprintw(x, y + 6, " ");
        attroff(COLOR_PAIR(5));
        //desactiva el color

        key = getch();
        if (key == 27)
        {
            //sleep(5);
            //system("pause");
        }
        else if (key == 'd')
        {
            //Comenzar a pintar de negro
            //activar los atributos principales
            attron(COLOR_PAIR(9));
            mvprintw(tx, ty, " ");
            //mvprintw(tx, ty, "*");
            mvprintw(tx - 1, ty, " ");
            mvprintw(tx - 1, ty + 1, " ");
            mvprintw(tx - 2, ty, " ");
            mvprintw(tx - 2, ty + 1, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 3, ty, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 2, ty + 3, " ");
            mvprintw(tx - 2, ty + 4, " ");
            mvprintw(tx - 2, ty + 5, " ");
            mvprintw(tx - 2, ty + 6, " ");
            mvprintw(tx - 2, ty + 7, " ");
            mvprintw(tx - 2, ty + 8, " ");
            mvprintw(tx - 2, ty + 9, " ");
            mvprintw(tx - 2, ty + 10, " ");
            mvprintw(tx - 2, ty + 11, " ");
            mvprintw(tx - 3, ty + 3, " ");
            mvprintw(tx - 3, ty + 4, " ");
            mvprintw(tx - 3, ty + 5, " ");
            mvprintw(tx - 3, ty + 6, " ");
            mvprintw(tx - 3, ty + 7, " ");
            mvprintw(tx - 3, ty + 8, " ");
            mvprintw(tx - 4, ty + 5, " ");
            mvprintw(tx - 4, ty + 6, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 5, " ");
            mvprintw(tx - 1, ty + 6, " ");
            refresh();

            //por izquierda
            mvprintw(tx, ty + 11, " ");
            mvprintw(tx - 1, ty + 10, " ");
            mvprintw(tx - 1, ty + 11, " ");
            mvprintw(tx - 3, ty + 11, " ");
            refresh();
            //attroff(COLOR_PAIR(12));
            // desactiva el color

            //activa color ROJO para las zonas de ese color
            //attron(COLOR_PAIR(3));
            mvprintw(tx - 4, ty, " ");
            mvprintw(tx - 4, ty + 11, " ");
            mvprintw(tx - 5, ty + 5, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 4, " ");
            mvprintw(tx - 1, ty + 7, " ");
            refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvprintw(tx, ty + 5, " ");
            mvprintw(tx, ty + 6, " ");
            attroff(COLOR_PAIR(9));
            refresh();
            y++;
            refresh();
            if (y == 120)
            {
                y--;
            }
        }
        else if (key == 'a')
        {
            attron(COLOR_PAIR(9));
            mvprintw(tx, ty, " ");
            //mvprintw(tx, ty, "*");
            mvprintw(tx - 1, ty, " ");
            mvprintw(tx - 1, ty + 1, " ");
            mvprintw(tx - 2, ty, " ");
            mvprintw(tx - 2, ty + 1, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 3, ty, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 2, ty + 3, " ");
            mvprintw(tx - 2, ty + 4, " ");
            mvprintw(tx - 2, ty + 5, " ");
            mvprintw(tx - 2, ty + 6, " ");
            mvprintw(tx - 2, ty + 7, " ");
            mvprintw(tx - 2, ty + 8, " ");
            mvprintw(tx - 2, ty + 9, " ");
            mvprintw(tx - 2, ty + 10, " ");
            mvprintw(tx - 2, ty + 11, " ");
            mvprintw(tx - 3, ty + 3, " ");
            mvprintw(tx - 3, ty + 4, " ");
            mvprintw(tx - 3, ty + 5, " ");
            mvprintw(tx - 3, ty + 6, " ");
            mvprintw(tx - 3, ty + 7, " ");
            mvprintw(tx - 3, ty + 8, " ");
            mvprintw(tx - 4, ty + 5, " ");
            mvprintw(tx - 4, ty + 6, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 5, " ");
            mvprintw(tx - 1, ty + 6, " ");
            refresh();
            //por izquierda
            mvprintw(tx, ty + 11, " ");
            mvprintw(tx - 1, ty + 10, " ");
            mvprintw(tx - 1, ty + 11, " ");
            mvprintw(tx - 3, ty + 11, " ");
            refresh();
            //attroff(COLOR_PAIR(12));
            // desactiva el color

            //activa color ROJO para las zonas de ese color
            //attron(COLOR_PAIR(3));
            mvprintw(tx - 4, ty, " ");
            mvprintw(tx - 4, ty + 11, " ");
            mvprintw(tx - 5, ty + 5, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 4, " ");
            mvprintw(tx - 1, ty + 7, " ");
            refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvprintw(tx, ty + 5, " ");
            mvprintw(tx, ty + 6, " ");
            attroff(COLOR_PAIR(9));
            refresh();
            y--;
            refresh();
            if (y == 0)
            {
                y++;
            }
        }
        else if (key == ' ')
        {
            //attron(COLOR_PAIR(5));
            for (int i = (tx - 5); i >= 0; i--)
            {
                attron(COLOR_PAIR(12));
                mvprintw(i, y, "@");
                attron(COLOR_PAIR(2));
                mvprintw(i, y, "@");
                //sleep(5);
                usleep(2500);
                refresh();
                clear();
                if (i == 0){
                    clear();
                }
            }
            //attroff(COLOR_PAIR(5));
        }
        else if (key != 'a' || key != 'd' || key != 27 || key != ' ')
        {
            refresh();
        }
    }
    endwin();
    return 0;
}

int Invacion(){
    string inva[20][20];
    
    for(int i = 0; i < 20; i++){
        
        for(int j = 0; j < 20; j++){
            /* code */
        }
        
    }
    

    return 0;
}
int Avengers()
{
    int x = 0, y = 0;
    initscr();
    start_color();
    curs_set(0);
    noecho();

    attron(COLOR_PAIR(17));
    move(4, 70);
    attron(A_ITALIC);
    printw("****GALAGA | INFINITY WAR**** ", 2);
    attroff(A_ITALIC);

    move(6, 78);
    attron(A_BOLD);
    printw(" Pulse Enter ");
    attroff(COLOR_PAIR(17));

    //Figura A
    attron(COLOR_PAIR(3));
    move(x + 1, y + 6);
    printw("  ");
    move(x + 6, y + 3);
    printw(" ");
    move(x + 5, y + 3);
    printw(" ");
    move(x + 4, y + 3);
    printw("        ");
    move(x + 3, y + 4);
    printw("  ");
    move(x + 3, y + 8);
    printw("  ");
    move(x + 2, y + 5);
    printw("    ");
    move(x + 5, y + 10);
    printw(" ");
    move(x + 4, y + 9);
    printw(" ");
    move(x + 6, y + 10);
    printw(" ");
    move(x + 5, y + 4);
    printw(" ");
    move(x + 5, y + 9);
    printw(" ");
    move(x + 4, y + 5);
    printw("    ");

    //Figura Letra V
    attron(COLOR_PAIR(3));
    move(x + 6, y + 15);
    printw(" ");
    move(x + 5, y + 14);
    printw(" ");
    move(x + 5, y + 16);
    printw(" ");
    move(x + 4, y + 13);
    printw(" ");
    move(x + 4, y + 17);
    printw(" ");
    move(x + 3, y + 12);
    printw(" ");
    move(x + 3, y + 18);
    printw(" ");
    move(x + 2, y + 19);
    printw(" ");
    move(x + 2, y + 11);
    printw(" ");

    //Figura Letra E
    attron(COLOR_PAIR(3));
    move(x + 6, y + 21);
    printw(" ");
    move(x + 5, y + 21);
    printw(" ");
    move(x + 4, y + 21);
    printw(" ");
    move(x + 3, y + 21);
    printw(" ");
    move(x + 2, y + 21);
    printw(" ");
    move(x + 6, y + 22);
    printw("    ");
    move(x + 4, y + 22);
    printw("   ");
    move(x + 2, y + 22);
    printw("    ");

    //Figura Letra N
    attron(COLOR_PAIR(4));
    mvprintw(x + 6, y + 27, " ");
    mvprintw(x + 5, y + 27, " ");
    mvprintw(x + 4, y + 27, " ");
    mvprintw(x + 3, y + 27, " ");
    mvprintw(x + 2, y + 27, " ");
    mvprintw(x + 2, y + 28, " ");
    mvprintw(x + 3, y + 28, " ");
    mvprintw(x + 4, y + 29, " ");
    mvprintw(x + 5, y + 30, " ");
    mvprintw(x + 6, y + 31, " ");
    mvprintw(x + 6, y + 32, " ");
    mvprintw(x + 5, y + 32, " ");
    mvprintw(x + 4, y + 32, " ");
    mvprintw(x + 3, y + 32, " ");
    mvprintw(x + 2, y + 32, " ");

    //Figura Letra G
    attron(COLOR_PAIR(4));
    mvprintw(x + 2, y + 34, "      ");
    mvprintw(x + 3, y + 34, " ");
    mvprintw(x + 4, y + 34, " ");
    mvprintw(x + 5, y + 34, " ");
    mvprintw(x + 6, y + 35, "    ");
    mvprintw(x + 5, y + 39, " ");
    mvprintw(x + 4, y + 37, "   ");

    //Figura segunda Letra E
    attron(COLOR_PAIR(4));
    move(x + 6, y + 41);
    printw(" ");
    move(x + 5, y + 41);
    printw(" ");
    move(x + 4, y + 41);
    printw(" ");
    move(x + 3, y + 41);
    printw(" ");
    move(x + 2, y + 41);
    printw(" ");
    move(x + 6, y + 42);
    printw("    ");
    move(x + 4, y + 42);
    printw("   ");
    move(x + 2, y + 42);
    printw("    ");

    //Figura Letra U
    attron(COLOR_PAIR(6));
    mvprintw(x + 6, y + 47, " ");
    mvprintw(x + 5, y + 47, " ");
    mvprintw(x + 4, y + 47, " ");
    mvprintw(x + 3, y + 47, " ");
    mvprintw(x + 2, y + 47, " ");
    mvprintw(x + 3, y + 48, " ");
    mvprintw(x + 2, y + 49, "  ");

    //Figura Letra S
    attron(COLOR_PAIR(2));
    mvprintw(x + 6, y + 52, "     ");
    mvprintw(x + 5, y + 56, " ");
    mvprintw(x + 4, y + 52, "     ");
    mvprintw(x + 3, y + 52, " ");
    mvprintw(x + 2, y + 52, "     ");

    attron(COLOR_PAIR(8));
    for (int a = 0; a < 42; a++)
    {
        x = a;
        if (x % 2 == 1)
            mvprintw(x, y, "*");
    }
    for (int b = 0; b < 42; b++)
    {
        x = b;
        if (x % 2 == 1)
            mvprintw(x, y + 131, "*");
    }
    attroff(COLOR_PAIR(8));
    attron(COLOR_PAIR(7));
    for (int c = 1; c < 131; c++)
    {
        y = c;
        if (y % 2 == 1)
            mvprintw(x, y, "*");
    }
    //for (int d = 1; d < 131; d++)
    //{
    //    y = d;
    //    mvprintw(x - 41, y, "*");
    //}
    attroff(COLOR_PAIR(7));
    //contorno con estrellas
    refresh();
    endwin();

    return 0;
}

int naves()
{
    int x = 0, y = 0, tx, ty;

    init_pair(5, COLOR_WHITE, COLOR_WHITE);

    return 0;
}
