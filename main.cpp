#include <ncurses.h>
#include <iostream>
#include <time.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#ifdef USE_PTHREADS
#include <pthread.h>
#endif
#include <pthread.h>
#include "unistd.h"//para que los sleep funcionen
WINDOW* mainwindow;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

//Para compilar g++ main.cpp -o Galaga -lncurses -lpthread


using namespace std;

int MiNave();
int Avengers();
int Portada();
int naves();
int moves();
int contorno();

static int scorea(WINDOW *win, void* data){
    int conta;
    int x =0,y=0;
    for(int i=0;i<69;i++){
        
        conta = i+2;
        pthread_mutex_lock(&mutex1);
        attron(COLOR_PAIR(1));
        mvprintw(x+41,y+3," SCORE: %d",conta);
        pthread_mutex_unlock(&mutex1);
        sleep(5);
        refresh();
    }
}

void *score(void *args){
    use_window(mainwindow, scorea, NULL);
    
    
} 

static int invasionacb(WINDOW *win, void* data){
    int a=1, b=1;
    bool muevan = true;
    bool muevana = true;
    bool muevanb = true;;
    bool muevanc = true;
    bool muevand = true;
    bool muevane = true;
    bool muevanf = true;
    bool muevang = true;
    bool muevanh = true;
    

      while (muevan){
        int ta = a;
        int tb = b;
                
        for(int i=tb;i<=76;i++){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a,i,"\\");
                mvwprintw(win,a+1,i+1,"\\");
                mvwprintw(win,a+2,i+2,"*");
                mvwprintw(win,a+2,i+1,"-");
                mvwprintw(win,a+2,i+3,"-");
                mvwprintw(win,a+1,i+3,"/");
                mvwprintw(win,a,i+4,"/");
             
                mvwprintw(win,a,i+8,"\\");
                mvwprintw(win,a+1,i+9,"\\");
                mvwprintw(win,a+2,i+10,"*");
                mvwprintw(win,a+2,i+9,"-");
                mvwprintw(win,a+2,i+11,"-");
                mvwprintw(win,a+1,i+11,"/");
                mvwprintw(win,a,i+12,"/");
                
                mvwprintw(win,a,i+16,"\\");
                mvwprintw(win,a+1,i+17,"\\");
                mvwprintw(win,a+2,i+18,"*");
                mvwprintw(win,a+2,i+17,"-");
                mvwprintw(win,a+2,i+19,"-");
                mvwprintw(win,a+1,i+19,"/");
                mvwprintw(win,a,i+20,"/");
                
                mvwprintw(win,a,i+24,"\\");
                mvwprintw(win,a+1,i+25,"\\");
                mvwprintw(win,a+2,i+26,"*");
                mvwprintw(win,a+2,i+25,"-");
                mvwprintw(win,a+2,i+27,"-");
                mvwprintw(win,a+1,i+27,"/");
                mvwprintw(win,a,i+28,"/");
                
                mvwprintw(win,a,i+32,"\\");
                mvwprintw(win,a+1,i+33,"\\");
                mvwprintw(win,a+2,i+34,"*");
                mvwprintw(win,a+2,i+33,"-");
                mvwprintw(win,a+2,i+35,"-");
                mvwprintw(win,a+1,i+35,"/");
                mvwprintw(win,a,i+36,"/");
                
                mvwprintw(win,a,i+40,"\\");
                mvwprintw(win,a+1,i+41,"\\");
                mvwprintw(win,a+2,i+42,"*");
                mvwprintw(win,a+2,i+41,"-");
                mvwprintw(win,a+2,i+43,"-");
                mvwprintw(win,a+1,i+43,"/");
                mvwprintw(win,a,i+44,"/");
              
                mvwprintw(win,a,i+48,"\\");
                mvwprintw(win,a+1,i+49,"\\");
                mvwprintw(win,a+2,i+50,"*");
                mvwprintw(win,a+2,i+49,"-");
                mvwprintw(win,a+2,i+51,"-");
                mvwprintw(win,a+1,i+51,"/");
                mvwprintw(win,a,i+52,"/");
                //refresh();
           // pthread_mutex_unlock(&mutex1);


           // pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
                mvwprintw(win,a,i+1,"\\");
                mvwprintw(win,a+1,i+2,"\\");
                mvwprintw(win,a+2,i+3,"*");
                mvwprintw(win,a+2,i+2,"-");
                mvwprintw(win,a+2,i+4,"-");
                mvwprintw(win,a+1,i+4,"/");
                mvwprintw(win,a,i+5,"/");
            
                mvwprintw(win,a,i+9,"\\");
                mvwprintw(win,a+1,i+10,"\\");
                mvwprintw(win,a+2,i+11,"*");
                mvwprintw(win,a+2,i+10,"-");
                mvwprintw(win,a+2,i+12,"-");
                mvwprintw(win,a+1,i+12,"/");
                mvwprintw(win,a,i+13,"/");
            
                mvwprintw(win,a,i+17,"\\");
                mvwprintw(win,a+1,i+18,"\\");
                mvwprintw(win,a+2,i+19,"*");
                mvwprintw(win,a+2,i+18,"-");
                mvwprintw(win,a+2,i+20,"-");
                mvwprintw(win,a+1,i+20,"/");
                mvwprintw(win,a,i+21,"/");
            
                mvwprintw(win,a,i+25,"\\");
                mvwprintw(win,a+1,i+26,"\\");
                mvwprintw(win,a+2,i+27,"*");
                mvwprintw(win,a+2,i+26,"-");
                mvwprintw(win,a+2,i+28,"-");
                mvwprintw(win,a+1,i+28,"/");
                mvwprintw(win,a,i+29,"/");
                
                mvwprintw(win,a,i+33,"\\");
                mvwprintw(win,a+1,i+34,"\\");
                mvwprintw(win,a+2,i+35,"*");
                mvwprintw(win,a+2,i+34,"-");
                mvwprintw(win,a+2,i+36,"-");
                mvwprintw(win,a+1,i+36,"/");
                mvwprintw(win,a,i+37,"/"); 
                
                mvwprintw(win,a,i+41,"\\");
                mvwprintw(win,a+1,i+42,"\\");
                mvwprintw(win,a+2,i+43,"*");
                mvwprintw(win,a+2,i+42,"-");
                mvwprintw(win,a+2,i+44,"-");
                mvwprintw(win,a+1,i+44,"/");
                mvwprintw(win,a,i+45,"/");
                
                mvwprintw(win,a,i+49,"\\");
                mvwprintw(win,a+1,i+50,"\\");
                mvwprintw(win,a+2,i+51,"*");
                mvwprintw(win,a+2,i+50,"-");
                mvwprintw(win,a+2,i+52,"-");
                mvwprintw(win,a+1,i+52,"/");
                mvwprintw(win,a,i+53,"/");
                refresh();
                pthread_mutex_unlock(&mutex1);


                //tb++;

                usleep(30000);
                //refresh();
                if (i == 76){
                    muevan = false;         
                }
                
            }
    }
    while(muevana){
        int a=-2, b=129;
        int ta = a;
        int tb = b;

         for(int i=tb;i>=54;i--){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a+7,i,"\\");
                mvwprintw(win,a+8,i-1,"\\");
                mvwprintw(win,a+9,i-2,"*");
                mvwprintw(win,a+9,i-1,"-");
                mvwprintw(win,a+9,i-3,"-");
                mvwprintw(win,a+8,i-3,"/");
                mvwprintw(win,a+7,i-4,"/");
                
                mvwprintw(win,a+7,i-8,"\\");
                mvwprintw(win,a+8,i-9,"\\");
                mvwprintw(win,a+9,i-10,"*");
                mvwprintw(win,a+9,i-9,"-");
                mvwprintw(win,a+9,i-11,"-");
                mvwprintw(win,a+8,i-11,"/");
                mvwprintw(win,a+7,i-12,"/");
                
                mvwprintw(win,a+7,i-16,"\\");
                mvwprintw(win,a+8,i-17,"\\");
                mvwprintw(win,a+9,i-18,"*");
                mvwprintw(win,a+9,i-17,"-");
                mvwprintw(win,a+9,i-19,"-");
                mvwprintw(win,a+8,i-19,"/");
                mvwprintw(win,a+7,i-20,"/");
                
                mvwprintw(win,a+7,i-24,"\\");
                mvwprintw(win,a+8,i-25,"\\");
                mvwprintw(win,a+9,i-26,"*");
                mvwprintw(win,a+9,i-25,"-");
                mvwprintw(win,a+9,i-27,"-");
                mvwprintw(win,a+8,i-27,"/");
                mvwprintw(win,a+7,i-28,"/");
                
                mvwprintw(win,a+7,i-32,"\\");
                mvwprintw(win,a+8,i-33,"\\");
                mvwprintw(win,a+9,i-34,"*");
                mvwprintw(win,a+9,i-33,"-");
                mvwprintw(win,a+9,i-35,"-");
                mvwprintw(win,a+8,i-35,"/");
                mvwprintw(win,a+7,i-36,"/");
                
                mvwprintw(win,a+7,i-40,"\\");
                mvwprintw(win,a+8,i-41,"\\");
                mvwprintw(win,a+9,i-42,"*");
                mvwprintw(win,a+9,i-41,"-");
                mvwprintw(win,a+9,i-43,"-");
                mvwprintw(win,a+8,i-43,"/");
                mvwprintw(win,a+7,i-44,"/");
              
                mvwprintw(win,a+7,i-48,"\\");
                mvwprintw(win,a+8,i-49,"\\");
                mvwprintw(win,a+9,i-50,"*");
                mvwprintw(win,a+9,i-49,"-");
                mvwprintw(win,a+9,i-51,"-");
                mvwprintw(win,a+8,i-51,"/");
                mvwprintw(win,a+7,i-52,"/");
                //refresh();
              //  pthread_mutex_unlock(&mutex1);
                
            //pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
            mvwprintw(win,a+7,i-1,"\\");
                mvwprintw(win,a+8,i-2,"\\");
                mvwprintw(win,a+9,i-3,"*");
                mvwprintw(win,a+9,i-2,"-");
                mvwprintw(win,a+9,i-4,"-");
                mvwprintw(win,a+8,i-4,"/");
                mvwprintw(win,a+7,i-5,"/");
                 
                mvwprintw(win,a+7,i-9,"\\");
                mvwprintw(win,a+8,i-10,"\\");
                mvwprintw(win,a+9,i-11,"*");
                mvwprintw(win,a+9,i-10,"-");
                mvwprintw(win,a+9,i-12,"-");
                mvwprintw(win,a+8,i-12,"/");
                mvwprintw(win,a+7,i-13,"/");
                
                mvwprintw(win,a+7,i-17,"\\");
                mvwprintw(win,a+8,i-18,"\\");
                mvwprintw(win,a+9,i-19,"*");
                mvwprintw(win,a+9,i-18,"-");
                mvwprintw(win,a+9,i-20,"-");
                mvwprintw(win,a+8,i-20,"/");
                mvwprintw(win,a+7,i-21,"/");
                
                mvwprintw(win,a+7,i-25,"\\");
                mvwprintw(win,a+8,i-26,"\\");
                mvwprintw(win,a+9,i-27,"*");
                mvwprintw(win,a+9,i-26,"-");
                mvwprintw(win,a+9,i-28,"-");
                mvwprintw(win,a+8,i-28,"/");
                mvwprintw(win,a+7,i-29,"/");
                
                mvwprintw(win,a+7,i-33,"\\");
                mvwprintw(win,a+8,i-34,"\\");
                mvwprintw(win,a+9,i-35,"*");
                mvwprintw(win,a+9,i-34,"-");
                mvwprintw(win,a+9,i-36,"-");
                mvwprintw(win,a+8,i-36,"/");
                mvwprintw(win,a+7,i-37,"/");
                
                mvwprintw(win,a+7,i-41,"\\");
                mvwprintw(win,a+8,i-42,"\\");
                mvwprintw(win,a+9,i-43,"*");
                mvwprintw(win,a+9,i-42,"-");
                mvwprintw(win,a+9,i-44,"-");
                mvwprintw(win,a+8,i-44,"/");
                mvwprintw(win,a+7,i-45,"/");
              
                mvwprintw(win,a+7,i-49,"\\");
                mvwprintw(win,a+8,i-50,"\\");
                mvwprintw(win,a+9,i-51,"*");
                mvwprintw(win,a+9,i-50,"-");
                mvwprintw(win,a+9,i-52,"-");
                mvwprintw(win,a+8,i-52,"/");
                mvwprintw(win,a+7,i-53,"/");
                //refresh();
                pthread_mutex_unlock(&mutex1);

                //tb++;
                usleep(30000);
                refresh();

                if (i == 76){
                    muevana = false;            
                }
            }
    }
     while (muevanb){
        int a=9,b=1;
        int ta = a;
        int tb = b;
                
        for(int i=tb;i<=76;i++){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a,i,"\\");
                mvwprintw(win,a+1,i+1,"\\");
                mvwprintw(win,a+2,i+2,"*");
                mvwprintw(win,a+2,i+1,"-");
                mvwprintw(win,a+2,i+3,"-");
                mvwprintw(win,a+1,i+3,"/");
                mvwprintw(win,a,i+4,"/");
             
                mvwprintw(win,a,i+8,"\\");
                mvwprintw(win,a+1,i+9,"\\");
                mvwprintw(win,a+2,i+10,"*");
                mvwprintw(win,a+2,i+9,"-");
                mvwprintw(win,a+2,i+11,"-");
                mvwprintw(win,a+1,i+11,"/");
                mvwprintw(win,a,i+12,"/");
                
                mvwprintw(win,a,i+16,"\\");
                mvwprintw(win,a+1,i+17,"\\");
                mvwprintw(win,a+2,i+18,"*");
                mvwprintw(win,a+2,i+17,"-");
                mvwprintw(win,a+2,i+19,"-");
                mvwprintw(win,a+1,i+19,"/");
                mvwprintw(win,a,i+20,"/");
                
                mvwprintw(win,a,i+24,"\\");
                mvwprintw(win,a+1,i+25,"\\");
                mvwprintw(win,a+2,i+26,"*");
                mvwprintw(win,a+2,i+25,"-");
                mvwprintw(win,a+2,i+27,"-");
                mvwprintw(win,a+1,i+27,"/");
                mvwprintw(win,a,i+28,"/");
                
                mvwprintw(win,a,i+32,"\\");
                mvwprintw(win,a+1,i+33,"\\");
                mvwprintw(win,a+2,i+34,"*");
                mvwprintw(win,a+2,i+33,"-");
                mvwprintw(win,a+2,i+35,"-");
                mvwprintw(win,a+1,i+35,"/");
                mvwprintw(win,a,i+36,"/");
                
                mvwprintw(win,a,i+40,"\\");
                mvwprintw(win,a+1,i+41,"\\");
                mvwprintw(win,a+2,i+42,"*");
                mvwprintw(win,a+2,i+41,"-");
                mvwprintw(win,a+2,i+43,"-");
                mvwprintw(win,a+1,i+43,"/");
                mvwprintw(win,a,i+44,"/");
              
                mvwprintw(win,a,i+48,"\\");
                mvwprintw(win,a+1,i+49,"\\");
                mvwprintw(win,a+2,i+50,"*");
                mvwprintw(win,a+2,i+49,"-");
                mvwprintw(win,a+2,i+51,"-");
                mvwprintw(win,a+1,i+51,"/");
                mvwprintw(win,a,i+52,"/");
                //refresh();
           // pthread_mutex_unlock(&mutex1);


           // pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
                mvwprintw(win,a,i+1,"\\");
                mvwprintw(win,a+1,i+2,"\\");
                mvwprintw(win,a+2,i+3,"*");
                mvwprintw(win,a+2,i+2,"-");
                mvwprintw(win,a+2,i+4,"-");
                mvwprintw(win,a+1,i+4,"/");
                mvwprintw(win,a,i+5,"/");
            
                mvwprintw(win,a,i+9,"\\");
                mvwprintw(win,a+1,i+10,"\\");
                mvwprintw(win,a+2,i+11,"*");
                mvwprintw(win,a+2,i+10,"-");
                mvwprintw(win,a+2,i+12,"-");
                mvwprintw(win,a+1,i+12,"/");
                mvwprintw(win,a,i+13,"/");
            
                mvwprintw(win,a,i+17,"\\");
                mvwprintw(win,a+1,i+18,"\\");
                mvwprintw(win,a+2,i+19,"*");
                mvwprintw(win,a+2,i+18,"-");
                mvwprintw(win,a+2,i+20,"-");
                mvwprintw(win,a+1,i+20,"/");
                mvwprintw(win,a,i+21,"/");
            
                mvwprintw(win,a,i+25,"\\");
                mvwprintw(win,a+1,i+26,"\\");
                mvwprintw(win,a+2,i+27,"*");
                mvwprintw(win,a+2,i+26,"-");
                mvwprintw(win,a+2,i+28,"-");
                mvwprintw(win,a+1,i+28,"/");
                mvwprintw(win,a,i+29,"/");
                
                mvwprintw(win,a,i+33,"\\");
                mvwprintw(win,a+1,i+34,"\\");
                mvwprintw(win,a+2,i+35,"*");
                mvwprintw(win,a+2,i+34,"-");
                mvwprintw(win,a+2,i+36,"-");
                mvwprintw(win,a+1,i+36,"/");
                mvwprintw(win,a,i+37,"/"); 
                
                mvwprintw(win,a,i+41,"\\");
                mvwprintw(win,a+1,i+42,"\\");
                mvwprintw(win,a+2,i+43,"*");
                mvwprintw(win,a+2,i+42,"-");
                mvwprintw(win,a+2,i+44,"-");
                mvwprintw(win,a+1,i+44,"/");
                mvwprintw(win,a,i+45,"/");
                
                mvwprintw(win,a,i+49,"\\");
                mvwprintw(win,a+1,i+50,"\\");
                mvwprintw(win,a+2,i+51,"*");
                mvwprintw(win,a+2,i+50,"-");
                mvwprintw(win,a+2,i+52,"-");
                mvwprintw(win,a+1,i+52,"/");
                mvwprintw(win,a,i+53,"/");
                refresh();
                pthread_mutex_unlock(&mutex1);


                //tb++;

                usleep(30000);
                //refresh();
                if (i == 76){
                    muevanb = false;         
                }
                
            }
    }
    while(muevanc){
        int a=6, b=129;
        int ta = a;
        int tb = b;

         for(int i=tb;i>=54;i--){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a+7,i,"\\");
                mvwprintw(win,a+8,i-1,"\\");
                mvwprintw(win,a+9,i-2,"*");
                mvwprintw(win,a+9,i-1,"-");
                mvwprintw(win,a+9,i-3,"-");
                mvwprintw(win,a+8,i-3,"/");
                mvwprintw(win,a+7,i-4,"/");
                
                mvwprintw(win,a+7,i-8,"\\");
                mvwprintw(win,a+8,i-9,"\\");
                mvwprintw(win,a+9,i-10,"*");
                mvwprintw(win,a+9,i-9,"-");
                mvwprintw(win,a+9,i-11,"-");
                mvwprintw(win,a+8,i-11,"/");
                mvwprintw(win,a+7,i-12,"/");
                
                mvwprintw(win,a+7,i-16,"\\");
                mvwprintw(win,a+8,i-17,"\\");
                mvwprintw(win,a+9,i-18,"*");
                mvwprintw(win,a+9,i-17,"-");
                mvwprintw(win,a+9,i-19,"-");
                mvwprintw(win,a+8,i-19,"/");
                mvwprintw(win,a+7,i-20,"/");
                
                mvwprintw(win,a+7,i-24,"\\");
                mvwprintw(win,a+8,i-25,"\\");
                mvwprintw(win,a+9,i-26,"*");
                mvwprintw(win,a+9,i-25,"-");
                mvwprintw(win,a+9,i-27,"-");
                mvwprintw(win,a+8,i-27,"/");
                mvwprintw(win,a+7,i-28,"/");
                
                mvwprintw(win,a+7,i-32,"\\");
                mvwprintw(win,a+8,i-33,"\\");
                mvwprintw(win,a+9,i-34,"*");
                mvwprintw(win,a+9,i-33,"-");
                mvwprintw(win,a+9,i-35,"-");
                mvwprintw(win,a+8,i-35,"/");
                mvwprintw(win,a+7,i-36,"/");
                
                mvwprintw(win,a+7,i-40,"\\");
                mvwprintw(win,a+8,i-41,"\\");
                mvwprintw(win,a+9,i-42,"*");
                mvwprintw(win,a+9,i-41,"-");
                mvwprintw(win,a+9,i-43,"-");
                mvwprintw(win,a+8,i-43,"/");
                mvwprintw(win,a+7,i-44,"/");
              
                mvwprintw(win,a+7,i-48,"\\");
                mvwprintw(win,a+8,i-49,"\\");
                mvwprintw(win,a+9,i-50,"*");
                mvwprintw(win,a+9,i-49,"-");
                mvwprintw(win,a+9,i-51,"-");
                mvwprintw(win,a+8,i-51,"/");
                mvwprintw(win,a+7,i-52,"/");
                //refresh();
              //  pthread_mutex_unlock(&mutex1);
                
            //pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
                mvwprintw(win,a+7,i-1,"\\");
                mvwprintw(win,a+8,i-2,"\\");
                mvwprintw(win,a+9,i-3,"*");
                mvwprintw(win,a+9,i-2,"-");
                mvwprintw(win,a+9,i-4,"-");
                mvwprintw(win,a+8,i-4,"/");
                mvwprintw(win,a+7,i-5,"/");
                 
                mvwprintw(win,a+7,i-9,"\\");
                mvwprintw(win,a+8,i-10,"\\");
                mvwprintw(win,a+9,i-11,"*");
                mvwprintw(win,a+9,i-10,"-");
                mvwprintw(win,a+9,i-12,"-");
                mvwprintw(win,a+8,i-12,"/");
                mvwprintw(win,a+7,i-13,"/");
                
                mvwprintw(win,a+7,i-17,"\\");
                mvwprintw(win,a+8,i-18,"\\");
                mvwprintw(win,a+9,i-19,"*");
                mvwprintw(win,a+9,i-18,"-");
                mvwprintw(win,a+9,i-20,"-");
                mvwprintw(win,a+8,i-20,"/");
                mvwprintw(win,a+7,i-21,"/");
                
                mvwprintw(win,a+7,i-25,"\\");
                mvwprintw(win,a+8,i-26,"\\");
                mvwprintw(win,a+9,i-27,"*");
                mvwprintw(win,a+9,i-26,"-");
                mvwprintw(win,a+9,i-28,"-");
                mvwprintw(win,a+8,i-28,"/");
                mvwprintw(win,a+7,i-29,"/");
                
                mvwprintw(win,a+7,i-33,"\\");
                mvwprintw(win,a+8,i-34,"\\");
                mvwprintw(win,a+9,i-35,"*");
                mvwprintw(win,a+9,i-34,"-");
                mvwprintw(win,a+9,i-36,"-");
                mvwprintw(win,a+8,i-36,"/");
                mvwprintw(win,a+7,i-37,"/");
                
                mvwprintw(win,a+7,i-41,"\\");
                mvwprintw(win,a+8,i-42,"\\");
                mvwprintw(win,a+9,i-43,"*");
                mvwprintw(win,a+9,i-42,"-");
                mvwprintw(win,a+9,i-44,"-");
                mvwprintw(win,a+8,i-44,"/");
                mvwprintw(win,a+7,i-45,"/");
              
                mvwprintw(win,a+7,i-49,"\\");
                mvwprintw(win,a+8,i-50,"\\");
                mvwprintw(win,a+9,i-51,"*");
                mvwprintw(win,a+9,i-50,"-");
                mvwprintw(win,a+9,i-52,"-");
                mvwprintw(win,a+8,i-52,"/");
                mvwprintw(win,a+7,i-53,"/");
                //refresh();
                pthread_mutex_unlock(&mutex1);

                //tb++;
                usleep(30000);
                refresh();
                
                
                if ((i == 76)){

                    muevanc = false;
                
                }
            }
    }
    while (muevand){
        int a=18,b=1;
        int ta = a;
        int tb = b;
                
        for(int i=tb;i<=76;i++){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a,i,"\\");
                mvwprintw(win,a+1,i+1,"\\");
                mvwprintw(win,a+2,i+2,"*");
                mvwprintw(win,a+2,i+1,"-");
                mvwprintw(win,a+2,i+3,"-");
                mvwprintw(win,a+1,i+3,"/");
                mvwprintw(win,a,i+4,"/");
             
                mvwprintw(win,a,i+8,"\\");
                mvwprintw(win,a+1,i+9,"\\");
                mvwprintw(win,a+2,i+10,"*");
                mvwprintw(win,a+2,i+9,"-");
                mvwprintw(win,a+2,i+11,"-");
                mvwprintw(win,a+1,i+11,"/");
                mvwprintw(win,a,i+12,"/");
                
                mvwprintw(win,a,i+16,"\\");
                mvwprintw(win,a+1,i+17,"\\");
                mvwprintw(win,a+2,i+18,"*");
                mvwprintw(win,a+2,i+17,"-");
                mvwprintw(win,a+2,i+19,"-");
                mvwprintw(win,a+1,i+19,"/");
                mvwprintw(win,a,i+20,"/");
                
                mvwprintw(win,a,i+24,"\\");
                mvwprintw(win,a+1,i+25,"\\");
                mvwprintw(win,a+2,i+26,"*");
                mvwprintw(win,a+2,i+25,"-");
                mvwprintw(win,a+2,i+27,"-");
                mvwprintw(win,a+1,i+27,"/");
                mvwprintw(win,a,i+28,"/");
                
                mvwprintw(win,a,i+32,"\\");
                mvwprintw(win,a+1,i+33,"\\");
                mvwprintw(win,a+2,i+34,"*");
                mvwprintw(win,a+2,i+33,"-");
                mvwprintw(win,a+2,i+35,"-");
                mvwprintw(win,a+1,i+35,"/");
                mvwprintw(win,a,i+36,"/");
                
                mvwprintw(win,a,i+40,"\\");
                mvwprintw(win,a+1,i+41,"\\");
                mvwprintw(win,a+2,i+42,"*");
                mvwprintw(win,a+2,i+41,"-");
                mvwprintw(win,a+2,i+43,"-");
                mvwprintw(win,a+1,i+43,"/");
                mvwprintw(win,a,i+44,"/");
              
                mvwprintw(win,a,i+48,"\\");
                mvwprintw(win,a+1,i+49,"\\");
                mvwprintw(win,a+2,i+50,"*");
                mvwprintw(win,a+2,i+49,"-");
                mvwprintw(win,a+2,i+51,"-");
                mvwprintw(win,a+1,i+51,"/");
                mvwprintw(win,a,i+52,"/");
                //refresh();
           // pthread_mutex_unlock(&mutex1);


           // pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
                mvwprintw(win,a,i+1,"\\");
                mvwprintw(win,a+1,i+2,"\\");
                mvwprintw(win,a+2,i+3,"*");
                mvwprintw(win,a+2,i+2,"-");
                mvwprintw(win,a+2,i+4,"-");
                mvwprintw(win,a+1,i+4,"/");
                mvwprintw(win,a,i+5,"/");
            
                mvwprintw(win,a,i+9,"\\");
                mvwprintw(win,a+1,i+10,"\\");
                mvwprintw(win,a+2,i+11,"*");
                mvwprintw(win,a+2,i+10,"-");
                mvwprintw(win,a+2,i+12,"-");
                mvwprintw(win,a+1,i+12,"/");
                mvwprintw(win,a,i+13,"/");
            
                mvwprintw(win,a,i+17,"\\");
                mvwprintw(win,a+1,i+18,"\\");
                mvwprintw(win,a+2,i+19,"*");
                mvwprintw(win,a+2,i+18,"-");
                mvwprintw(win,a+2,i+20,"-");
                mvwprintw(win,a+1,i+20,"/");
                mvwprintw(win,a,i+21,"/");
            
                mvwprintw(win,a,i+25,"\\");
                mvwprintw(win,a+1,i+26,"\\");
                mvwprintw(win,a+2,i+27,"*");
                mvwprintw(win,a+2,i+26,"-");
                mvwprintw(win,a+2,i+28,"-");
                mvwprintw(win,a+1,i+28,"/");
                mvwprintw(win,a,i+29,"/");
                
                mvwprintw(win,a,i+33,"\\");
                mvwprintw(win,a+1,i+34,"\\");
                mvwprintw(win,a+2,i+35,"*");
                mvwprintw(win,a+2,i+34,"-");
                mvwprintw(win,a+2,i+36,"-");
                mvwprintw(win,a+1,i+36,"/");
                mvwprintw(win,a,i+37,"/"); 
                
                mvwprintw(win,a,i+41,"\\");
                mvwprintw(win,a+1,i+42,"\\");
                mvwprintw(win,a+2,i+43,"*");
                mvwprintw(win,a+2,i+42,"-");
                mvwprintw(win,a+2,i+44,"-");
                mvwprintw(win,a+1,i+44,"/");
                mvwprintw(win,a,i+45,"/");
                
                mvwprintw(win,a,i+49,"\\");
                mvwprintw(win,a+1,i+50,"\\");
                mvwprintw(win,a+2,i+51,"*");
                mvwprintw(win,a+2,i+50,"-");
                mvwprintw(win,a+2,i+52,"-");
                mvwprintw(win,a+1,i+52,"/");
                mvwprintw(win,a,i+53,"/");
                refresh();
                pthread_mutex_unlock(&mutex1);


                //tb++;

                usleep(30000);
                //refresh();
                if (i == 76){
                    muevand = false;         
                }
                
            }
    }
    while(muevane){
        int a=16, b=129;
        int ta = a;
        int tb = b;

         for(int i=tb;i>=54;i--){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a+7,i,"\\");
                mvwprintw(win,a+8,i-1,"\\");
                mvwprintw(win,a+9,i-2,"*");
                mvwprintw(win,a+9,i-1,"-");
                mvwprintw(win,a+9,i-3,"-");
                mvwprintw(win,a+8,i-3,"/");
                mvwprintw(win,a+7,i-4,"/");
                
                mvwprintw(win,a+7,i-8,"\\");
                mvwprintw(win,a+8,i-9,"\\");
                mvwprintw(win,a+9,i-10,"*");
                mvwprintw(win,a+9,i-9,"-");
                mvwprintw(win,a+9,i-11,"-");
                mvwprintw(win,a+8,i-11,"/");
                mvwprintw(win,a+7,i-12,"/");
                
                mvwprintw(win,a+7,i-16,"\\");
                mvwprintw(win,a+8,i-17,"\\");
                mvwprintw(win,a+9,i-18,"*");
                mvwprintw(win,a+9,i-17,"-");
                mvwprintw(win,a+9,i-19,"-");
                mvwprintw(win,a+8,i-19,"/");
                mvwprintw(win,a+7,i-20,"/");
                
                mvwprintw(win,a+7,i-24,"\\");
                mvwprintw(win,a+8,i-25,"\\");
                mvwprintw(win,a+9,i-26,"*");
                mvwprintw(win,a+9,i-25,"-");
                mvwprintw(win,a+9,i-27,"-");
                mvwprintw(win,a+8,i-27,"/");
                mvwprintw(win,a+7,i-28,"/");
                
                mvwprintw(win,a+7,i-32,"\\");
                mvwprintw(win,a+8,i-33,"\\");
                mvwprintw(win,a+9,i-34,"*");
                mvwprintw(win,a+9,i-33,"-");
                mvwprintw(win,a+9,i-35,"-");
                mvwprintw(win,a+8,i-35,"/");
                mvwprintw(win,a+7,i-36,"/");
                
                mvwprintw(win,a+7,i-40,"\\");
                mvwprintw(win,a+8,i-41,"\\");
                mvwprintw(win,a+9,i-42,"*");
                mvwprintw(win,a+9,i-41,"-");
                mvwprintw(win,a+9,i-43,"-");
                mvwprintw(win,a+8,i-43,"/");
                mvwprintw(win,a+7,i-44,"/");
              
                mvwprintw(win,a+7,i-48,"\\");
                mvwprintw(win,a+8,i-49,"\\");
                mvwprintw(win,a+9,i-50,"*");
                mvwprintw(win,a+9,i-49,"-");
                mvwprintw(win,a+9,i-51,"-");
                mvwprintw(win,a+8,i-51,"/");
                mvwprintw(win,a+7,i-52,"/");
                //refresh();
              //  pthread_mutex_unlock(&mutex1);
                
            //pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
                mvwprintw(win,a+7,i-1,"\\");
                mvwprintw(win,a+8,i-2,"\\");
                mvwprintw(win,a+9,i-3,"*");
                mvwprintw(win,a+9,i-2,"-");
                mvwprintw(win,a+9,i-4,"-");
                mvwprintw(win,a+8,i-4,"/");
                mvwprintw(win,a+7,i-5,"/");
                 
                mvwprintw(win,a+7,i-9,"\\");
                mvwprintw(win,a+8,i-10,"\\");
                mvwprintw(win,a+9,i-11,"*");
                mvwprintw(win,a+9,i-10,"-");
                mvwprintw(win,a+9,i-12,"-");
                mvwprintw(win,a+8,i-12,"/");
                mvwprintw(win,a+7,i-13,"/");
                
                mvwprintw(win,a+7,i-17,"\\");
                mvwprintw(win,a+8,i-18,"\\");
                mvwprintw(win,a+9,i-19,"*");
                mvwprintw(win,a+9,i-18,"-");
                mvwprintw(win,a+9,i-20,"-");
                mvwprintw(win,a+8,i-20,"/");
                mvwprintw(win,a+7,i-21,"/");
                
                mvwprintw(win,a+7,i-25,"\\");
                mvwprintw(win,a+8,i-26,"\\");
                mvwprintw(win,a+9,i-27,"*");
                mvwprintw(win,a+9,i-26,"-");
                mvwprintw(win,a+9,i-28,"-");
                mvwprintw(win,a+8,i-28,"/");
                mvwprintw(win,a+7,i-29,"/");
                
                mvwprintw(win,a+7,i-33,"\\");
                mvwprintw(win,a+8,i-34,"\\");
                mvwprintw(win,a+9,i-35,"*");
                mvwprintw(win,a+9,i-34,"-");
                mvwprintw(win,a+9,i-36,"-");
                mvwprintw(win,a+8,i-36,"/");
                mvwprintw(win,a+7,i-37,"/");
                
                mvwprintw(win,a+7,i-41,"\\");
                mvwprintw(win,a+8,i-42,"\\");
                mvwprintw(win,a+9,i-43,"*");
                mvwprintw(win,a+9,i-42,"-");
                mvwprintw(win,a+9,i-44,"-");
                mvwprintw(win,a+8,i-44,"/");
                mvwprintw(win,a+7,i-45,"/");
              
                mvwprintw(win,a+7,i-49,"\\");
                mvwprintw(win,a+8,i-50,"\\");
                mvwprintw(win,a+9,i-51,"*");
                mvwprintw(win,a+9,i-50,"-");
                mvwprintw(win,a+9,i-52,"-");
                mvwprintw(win,a+8,i-52,"/");
                mvwprintw(win,a+7,i-53,"/");
                //refresh();
                pthread_mutex_unlock(&mutex1);

                //tb++;
                usleep(30000);
                refresh();
                
                
                if ((i == 76)){

                    muevane = false;
                
                }
            }
    }
    while (muevanf){
        int a=28,b=1;
        int ta = a;
        int tb = b;
                
        for(int i=tb;i<=76;i++){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a,i,"\\");
                mvwprintw(win,a+1,i+1,"\\");
                mvwprintw(win,a+2,i+2,"*");
                mvwprintw(win,a+2,i+1,"-");
                mvwprintw(win,a+2,i+3,"-");
                mvwprintw(win,a+1,i+3,"/");
                mvwprintw(win,a,i+4,"/");
             
                mvwprintw(win,a,i+8,"\\");
                mvwprintw(win,a+1,i+9,"\\");
                mvwprintw(win,a+2,i+10,"*");
                mvwprintw(win,a+2,i+9,"-");
                mvwprintw(win,a+2,i+11,"-");
                mvwprintw(win,a+1,i+11,"/");
                mvwprintw(win,a,i+12,"/");
                
                mvwprintw(win,a,i+16,"\\");
                mvwprintw(win,a+1,i+17,"\\");
                mvwprintw(win,a+2,i+18,"*");
                mvwprintw(win,a+2,i+17,"-");
                mvwprintw(win,a+2,i+19,"-");
                mvwprintw(win,a+1,i+19,"/");
                mvwprintw(win,a,i+20,"/");
                
                mvwprintw(win,a,i+24,"\\");
                mvwprintw(win,a+1,i+25,"\\");
                mvwprintw(win,a+2,i+26,"*");
                mvwprintw(win,a+2,i+25,"-");
                mvwprintw(win,a+2,i+27,"-");
                mvwprintw(win,a+1,i+27,"/");
                mvwprintw(win,a,i+28,"/");
                
                mvwprintw(win,a,i+32,"\\");
                mvwprintw(win,a+1,i+33,"\\");
                mvwprintw(win,a+2,i+34,"*");
                mvwprintw(win,a+2,i+33,"-");
                mvwprintw(win,a+2,i+35,"-");
                mvwprintw(win,a+1,i+35,"/");
                mvwprintw(win,a,i+36,"/");
                
                mvwprintw(win,a,i+40,"\\");
                mvwprintw(win,a+1,i+41,"\\");
                mvwprintw(win,a+2,i+42,"*");
                mvwprintw(win,a+2,i+41,"-");
                mvwprintw(win,a+2,i+43,"-");
                mvwprintw(win,a+1,i+43,"/");
                mvwprintw(win,a,i+44,"/");
              
                mvwprintw(win,a,i+48,"\\");
                mvwprintw(win,a+1,i+49,"\\");
                mvwprintw(win,a+2,i+50,"*");
                mvwprintw(win,a+2,i+49,"-");
                mvwprintw(win,a+2,i+51,"-");
                mvwprintw(win,a+1,i+51,"/");
                mvwprintw(win,a,i+52,"/");
                //refresh();
           // pthread_mutex_unlock(&mutex1);


           // pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
                mvwprintw(win,a,i+1,"\\");
                mvwprintw(win,a+1,i+2,"\\");
                mvwprintw(win,a+2,i+3,"*");
                mvwprintw(win,a+2,i+2,"-");
                mvwprintw(win,a+2,i+4,"-");
                mvwprintw(win,a+1,i+4,"/");
                mvwprintw(win,a,i+5,"/");
            
                mvwprintw(win,a,i+9,"\\");
                mvwprintw(win,a+1,i+10,"\\");
                mvwprintw(win,a+2,i+11,"*");
                mvwprintw(win,a+2,i+10,"-");
                mvwprintw(win,a+2,i+12,"-");
                mvwprintw(win,a+1,i+12,"/");
                mvwprintw(win,a,i+13,"/");
            
                mvwprintw(win,a,i+17,"\\");
                mvwprintw(win,a+1,i+18,"\\");
                mvwprintw(win,a+2,i+19,"*");
                mvwprintw(win,a+2,i+18,"-");
                mvwprintw(win,a+2,i+20,"-");
                mvwprintw(win,a+1,i+20,"/");
                mvwprintw(win,a,i+21,"/");
            
                mvwprintw(win,a,i+25,"\\");
                mvwprintw(win,a+1,i+26,"\\");
                mvwprintw(win,a+2,i+27,"*");
                mvwprintw(win,a+2,i+26,"-");
                mvwprintw(win,a+2,i+28,"-");
                mvwprintw(win,a+1,i+28,"/");
                mvwprintw(win,a,i+29,"/");
                
                mvwprintw(win,a,i+33,"\\");
                mvwprintw(win,a+1,i+34,"\\");
                mvwprintw(win,a+2,i+35,"*");
                mvwprintw(win,a+2,i+34,"-");
                mvwprintw(win,a+2,i+36,"-");
                mvwprintw(win,a+1,i+36,"/");
                mvwprintw(win,a,i+37,"/"); 
                
                mvwprintw(win,a,i+41,"\\");
                mvwprintw(win,a+1,i+42,"\\");
                mvwprintw(win,a+2,i+43,"*");
                mvwprintw(win,a+2,i+42,"-");
                mvwprintw(win,a+2,i+44,"-");
                mvwprintw(win,a+1,i+44,"/");
                mvwprintw(win,a,i+45,"/");
                
                mvwprintw(win,a,i+49,"\\");
                mvwprintw(win,a+1,i+50,"\\");
                mvwprintw(win,a+2,i+51,"*");
                mvwprintw(win,a+2,i+50,"-");
                mvwprintw(win,a+2,i+52,"-");
                mvwprintw(win,a+1,i+52,"/");
                mvwprintw(win,a,i+53,"/");
                refresh();
                pthread_mutex_unlock(&mutex1);


                //tb++;

                usleep(30000);
                //refresh();
                if (i == 76){
                    muevanf = false;         
                }
                
            }
    }
    
}

void *invasion(void *args){
    use_window(mainwindow, invasionacb, NULL);
    //initscr();
    
} 

int main(int argc, char *argv[]){
    Portada();

    mainwindow = initscr();
    init_pair(23, COLOR_GREEN, COLOR_RED);
    init_pair(15,COLOR_BLACK,COLOR_BLACK);
    pthread_t hilo3;
    pthread_t hilo1;
    pthread_create(&hilo3,NULL,score,NULL);
    pthread_create(&hilo1,NULL,invasion,NULL);
    
    
    //refresh();
    pthread_join(hilo1,NULL);
    moves();
    //pthread_join(hilo3,NULL);
    
    
    //contorno();
    
    
    
    //usleep(4000);
    endwin();

    return 0;
}

int Portada(){
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
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_BLUE, COLOR_BLACK);
    init_pair(3, COLOR_RED, COLOR_RED);
    init_pair(4, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(6, COLOR_CYAN, COLOR_CYAN);
    init_pair(7, COLOR_BLACK, COLOR_BLACK);
    init_pair(8, COLOR_WHITE, COLOR_BLACK);
    


    while (cerrar){
        Avengers();
        tx = x;
        ty = y;

        //activar los atributos principales
        attron(COLOR_PAIR(12));
        mvprintw(x, y, " ");
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

        //attroff(COLOR_PAIR(12));
        // desactiva el color

        //activa color ROJO para las zonas de ese color
        attron(COLOR_PAIR(3));
        mvprintw(x - 4, y, " ");
        mvprintw(x - 4, y + 11, " ");
        mvprintw(x - 5, y + 5, " ");
        mvprintw(x - 5, y + 6, " ");
        mvprintw(x - 1, y + 4, " ");
        mvprintw(x - 1, y + 7, " ");
        //attroff(COLOR_PAIR(3));
        //desactiva el color

        //activa el color AZUL para las zonas de ese color
        attron(COLOR_PAIR(5));
        mvprintw(x, y + 5, " ");
        mvprintw(x, y + 6, " ");
        attroff(COLOR_PAIR(5));
        //desactiva el color

        key = getch();
        if (key == 10){
            cerrar=false;
            clear();
            refresh();
        }
        else if (key == 'd'){
            //Comenzar a pintar de negro
            //activar los atributos principales
            attron(COLOR_PAIR(9));
            mvprintw(tx, ty, " ");
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
            //refresh();

            //por izquierda
            mvprintw(tx, ty + 11, " ");
            mvprintw(tx - 1, ty + 10, " ");
            mvprintw(tx - 1, ty + 11, " ");
            mvprintw(tx - 3, ty + 11, " ");
            //refresh();
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
            //refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvprintw(tx, ty + 5, " ");
            mvprintw(tx, ty + 6, " ");
            attroff(COLOR_PAIR(9));
            //refresh();
            y++;
            //usleep(5000);
            //refresh();
            if (y == 120){
                y--;
            }
        }
        else if (key == 'a'){
            attron(COLOR_PAIR(9));
            mvprintw(tx, ty, " ");
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
            //refresh();
            //por izquierda
            mvprintw(tx, ty + 11, " ");
            mvprintw(tx - 1, ty + 10, " ");
            mvprintw(tx - 1, ty + 11, " ");
            mvprintw(tx - 3, ty + 11, " ");
            //refresh();
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
            //refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvprintw(tx, ty + 5, " ");
            mvprintw(tx, ty + 6, " ");
            attroff(COLOR_PAIR(9));
            //refresh();
            y--;
            //usleep(5000);
            //refresh();
            if (y == 0){
                y++;
            }
        }
        else if (key == ' '){
            for (int i = (tx - 6); i >= 6; i--){
                attron(COLOR_PAIR(2));
                mvprintw(i, y, "@");
                
                attron(COLOR_PAIR(7));
                mvprintw(i+1, y, " ");
                
                //sleep(5);
                usleep(5000);
                refresh();
                
                if (i == 6){
                    clear();
                }
            }
        }
        else if (key != 'a' || key != 'd' || key != 10 || key != ' '){
            refresh();
        }
    }
    endwin();
    return 0;
}

int moves(){
    int x = 39, y = 58, tx, ty;
    bool cerrar = true;
    char key = ' ';

    initscr();
    start_color();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);    
    
    init_pair(17, COLOR_BLACK, COLOR_WHITE);
    init_pair(9, COLOR_BLACK, COLOR_BLACK);
    init_pair(12, COLOR_WHITE, COLOR_WHITE);
    init_pair(5, COLOR_BLUE, COLOR_BLUE);
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_BLUE, COLOR_RED);
    init_pair(3, COLOR_RED, COLOR_RED);
    init_pair(4, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(6, COLOR_CYAN, COLOR_CYAN);
    init_pair(7, COLOR_BLACK, COLOR_BLACK);
    init_pair(8, COLOR_WHITE, COLOR_BLACK);

    while (cerrar){
        //Invasion();
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

        //attroff(COLOR_PAIR(12));
        // desactiva el color

        //activa color ROJO para las zonas de ese color
        attron(COLOR_PAIR(3));
        mvprintw(x - 4, y, " ");
        mvprintw(x - 4, y + 11, " ");
        mvprintw(x - 5, y + 5, " ");
        mvprintw(x - 5, y + 6, " ");
        mvprintw(x - 1, y + 4, " ");
        mvprintw(x - 1, y + 7, " ");
        //attroff(COLOR_PAIR(3));
        //desactiva el color

        //activa el color AZUL para las zonas de ese color
        attron(COLOR_PAIR(5));
        mvprintw(x, y + 5, " ");
        mvprintw(x, y + 6, " ");
        //attroff(COLOR_PAIR(5));
        //desactiva el color
        contorno();
        usleep(5000);

        key = getch();
        if (key == 10){
            
        }
        else if (key == 'd'){
            //Comenzar a pintar de negro
            //activar los atributos principales
            attron(COLOR_PAIR(9));
            mvprintw(tx, ty, " ");
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
            

            //por izquierda
            mvprintw(tx, ty + 11, " ");
            mvprintw(tx - 1, ty + 10, " ");
            mvprintw(tx - 1, ty + 11, " ");
            mvprintw(tx - 3, ty + 11, " ");
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
            
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvprintw(tx, ty + 5, " ");
            mvprintw(tx, ty + 6, " ");
            //attroff(COLOR_PAIR(9));
            //refresh();
            y++;
            usleep(25000);
            //refresh();
            if (y == 120)
            {
                y--;
            }
        }
        else if (key == 'a'){
            attron(COLOR_PAIR(9));
            mvprintw(tx, ty, " ");
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
            //refresh();
            //por izquierda
            mvprintw(tx, ty + 11, " ");
            mvprintw(tx - 1, ty + 10, " ");
            mvprintw(tx - 1, ty + 11, " ");
            mvprintw(tx - 3, ty + 11, " ");
            //refresh();
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
            //refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvprintw(tx, ty + 5, " ");
            mvprintw(tx, ty + 6, " ");
            //attroff(COLOR_PAIR(9));
            //refresh();
            y--;
            usleep(25000);
            //refresh();
            if (y == 0)
            {
                y++;
            }
        }
        else if (key == ' '){

            for (int i = (tx - 6); i >= 0; i--){
                pthread_mutex_lock(&mutex1);                
                attron(COLOR_PAIR(2));
                mvprintw(i, y, "@");
                
                attron(COLOR_PAIR(7));
                mvprintw(i+1, y, " ");
                pthread_mutex_unlock(&mutex1);
                
                //sleep(5);
                usleep(5000);
                refresh();
                
                if (i == 0){
                    
                    clear();
                }
            }
        }
        else if (key != 'a' || key != 'd' || key != 27 || key != ' '){
            refresh();
        }
    }
    endwin();
    return 0;
    
}

int naves(){
    int a=1,b=1;
    bool muevan = true;

    
            attron(COLOR_PAIR(23));
                mvprintw(a,b,"\\");
                mvprintw(a+1,b+1,"\\");
                mvprintw(a+2,b+2,"*");
                mvprintw(a+2,b+1,"-");
                mvprintw(a+2,b+3,"-");
                mvprintw(a+1,b+3,"/");
                mvprintw(a,b+4,"/");

                mvprintw(a,b+8,"\\");
                mvprintw(a+1,b+9,"\\");
                mvprintw(a+2,b+10,"*");
                mvprintw(a+2,b+9,"-");
                mvprintw(a+2,b+11,"-");
                mvprintw(a+1,b+11,"/");
                mvprintw(a,b+12,"/");

                mvprintw(a,b+16,"\\");
                mvprintw(a+1,b+17,"\\");
                mvprintw(a+2,b+18,"*");
                mvprintw(a+2,b+17,"-");
                mvprintw(a+2,b+19,"-");
                mvprintw(a+1,b+19,"/");
                mvprintw(a,b+20,"/");

                mvprintw(a,b+24,"\\");
                mvprintw(a+1,b+25,"\\");
                mvprintw(a+2,b+26,"*");
                mvprintw(a+2,b+25,"-");
                mvprintw(a+2,b+27,"-");
                mvprintw(a+1,b+27,"/");
                mvprintw(a,b+28,"/");

                mvprintw(a,b+32,"\\");
                mvprintw(a+1,b+33,"\\");
                mvprintw(a+2,b+34,"*");
                mvprintw(a+2,b+33,"-");
                mvprintw(a+2,b+35,"-");
                mvprintw(a+1,b+35,"/");
                mvprintw(a,b+36,"/");

                mvprintw(a,b+40,"\\");
                mvprintw(a+1,b+41,"\\");
                mvprintw(a+2,b+42,"*");
                mvprintw(a+2,b+41,"-");
                mvprintw(a+2,b+43,"-");
                mvprintw(a+1,b+43,"/");
                mvprintw(a,b+44,"/");

                mvprintw(a,b+48,"\\");
                mvprintw(a+1,b+49,"\\");
                mvprintw(a+2,b+50,"*");
                mvprintw(a+2,b+49,"-");
                mvprintw(a+2,b+51,"-");
                mvprintw(a+1,b+51,"/");
                mvprintw(a,b+52,"/");

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
    attron(COLOR_PAIR(12));
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
    //attroff(COLOR_PAIR(8));
    attron(COLOR_PAIR(7));
    for (int c = 1; c < 131; c++)
    {
        y = c;
        if (y % 2 == 1)
            mvprintw(x, y, "*");
    }
    for (int d = 1; d < 131; d++)
    {
        y = d;
        mvprintw(x - 41, y, "*");
    }
    //attroff(COLOR_PAIR(7));
    //contorno con estrellas
    //refresh();
    endwin();

    return 0;
}

int contorno(){
    int x=0,y=0;
    attron(COLOR_PAIR(8));
        for (int a = 0; a < 42; a++){
            x = a;
            if (x % 2 == 0)
                mvprintw(x, y, "*");
        }
        for (int b = 0; b < 42; b++){
            x = b;
            if (x % 2 == 0)
                mvprintw(x, y + 131, "*");
        }
        attron(COLOR_PAIR(7));
        for (int c = 1; c < 131; c++){
            y = c;
            if (y % 2 == 1)
            mvprintw(x-1, y, "*");
        }
        for (int d = 1; d < 131; d++){
            y = d;
            if (y % 2 == 1)
            mvprintw(x - 41, y, "*");
        }  
        return 0;
}

