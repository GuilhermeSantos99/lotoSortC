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
       if ( i < 4 )
      {
         printf("%d - ", 1 + rand() % 80);
      } else
      {
         printf("%d", 1 + rand() % 80);
      }
    }
}

void sena()
{
    srand(time(NULL));
    
    for ( int i = 0; i < 6; ++i )
    { 
        if ( i < 5 )
        {
            printf("%d - ", 1 + rand() % 60);
        } else 
        {
            printf("%d", 1 + rand() % 60);
        }
    }
}

void mania()
{
    srand(time(NULL));
    
    for ( int i = 0; i < 6; ++i )
    { 
        if ( i < 5 )
        {    
            printf("%d - ", 1 + rand() % 60);
        } else 
        {
            printf("%d", 1 + rand() % 60);
        }
    }
}


void facil()
{
    srand(time(NULL));
    
    for ( int i = 0; i < 15; ++i )
    { 
        if ( i < 14 )
        {
            printf("%d - ", 1 + rand() % 25);
        } else 
        {
            printf("%d", 1 + rand() % 25);
        }
    }
    
}

#endif