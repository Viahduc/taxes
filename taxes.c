#include <stdio.h>
#include <ncurses.h>

#define TPS 0.09975
#define TVQ 0.05

void main( void )
{
    float coût,
          provincial,
          federal,
          pasdeTPS,
          total,
          tip,
          tips,
          totaltip;

    printf( "Coût? : " );
    fflush( stdin );
    scanf( "%f", &coût );
    
    printf( "Tip? (~0.15): " );
    fflush( stdin );
    scanf( "%f", &tip );

provincial = coût * TPS;
federal = coût * TVQ;
pasdeTPS = coût + federal;
total = coût + federal + provincial;
tips = total * tip;
totaltip = total + tips;

printf("\n");
printf( "Coût :                       %9.2f$\n", coût );
printf( "Taxe Provincial :            %9.2f$\n", provincial );
printf( "Taxe Fédéral :               %9.2f$\n", federal );
printf( "Total sans taxe fédéral :    %9.2f$\n", pasdeTPS );
printf( "Tip total :                  %9.2f$\n", tips );
printf( "Total avec les deux taxes :  %9.2f$\n", total );
printf( "Total avec le Tip :          %9.2f$\n", totaltip );
printf("\n");

getch();
}