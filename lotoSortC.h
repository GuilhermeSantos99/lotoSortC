#ifndef LOTOSORTC_H_INCLUDED
#define LOTOSORTC_H_INCLUDED

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void quina();
void sena();
void mania();
void facil();

void quina() 
{
    srand(time(NULL));
    
    for ( int i = 0; i < 5; ++i )
    { 
        printf("%d ", 1 + rand() % 80);
    }
}

void sena()
{
    srand(time(NULL));
    
    for ( int i = 0; i < 6; ++i )
    { 
        printf("%d ", 1 + rand() % 60);
    }
}

void mania()
{
    srand(time(NULL));
    
    for ( int i = 0; i < 6; ++i )
    { 
        printf("%d ", 1 + rand() % 60);
    }
}


void facil()
{
    srand(time(NULL));
    
    for ( int i = 0; i < 15; ++i )
    { 
        printf("%d ", 1 + rand() % 25);
    }
}

#endif