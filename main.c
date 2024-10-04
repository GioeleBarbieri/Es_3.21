#include <stdio.h>

int main(void)
{
int anno, mese, giorno, giornomassimo;

    printf("inserisci il giorno dell'anno: ");
    scanf("%d", &giorno);
    printf("inserisci il mese dell'anno: ");
    scanf("%d", &mese);
    printf("inserisci l'anno: ");
    scanf("%d", &anno);

    switch (mese)
    {
    case 1:
        giornomassimo = 31;
        break;

    case 2:
        giornomassimo = 28;
        break;

    case 3:
        giornomassimo = 31;
        break;

    case 4:
        giornomassimo = 30;
        break;

    case 5:
        giornomassimo = 31;
        break;

    case 6:
        giornomassimo = 30;
        break;

    case 7:
        giornomassimo = 31;
        break;

    case 8:
        giornomassimo = 31;
        break;

    case 9:
        giornomassimo = 30;
        break;

    case 10:
        giornomassimo = 31;
        break;

    case 11:
        giornomassimo = 30;
        break;

    case 12:
        giornomassimo = 31;
        break;

    default:
        giornomassimo=0;
        break;
    }



    if (anno%400==0 && mese==2)
    {
        giornomassimo = 29;
    }
    else if (anno%100==0 && mese==2)
    {
        giornomassimo = 28;
    }
    else if (anno%4==0 && mese==2)
    {
       giornomassimo = 29;
    }


    if (giornomassimo == 0)
    {
        printf("il mese e' sbagliato\n");
    }

    if (giorno<0)
    {
        printf("errore");
    }
    else if (giorno>giornomassimo)
    {
        printf("errore");
    }

    if (giorno<=giornomassimo)
    {
        printf("la data e' corretta");
    }
    return 0;

    }
