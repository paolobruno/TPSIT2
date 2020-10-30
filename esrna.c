#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
#define SIZE 1000

int main ()
{
    FILE * fp;
    char riga[MAX];


    char *s;
    char *cmp;

    int a=0;
    int t=0,g=0;
    int c=0;



    fp = fopen("rna.tzt", "r");

    while(fgets(r,MAX,fp))
    {
        cmp = strtok(r," ");
        s = strdup(campo);




        for(int i =0;i<=strlen(s);i ++)
        {
            if(*s +i =='a')
            {
                a++;
            }
            if(*s + i=='t')
            {
                t++; 
            }
            if(*s + i=='c')
            {
                c++;
            }
            if(*s + i=='g')
            {
                g++;
            }
        }

    }

    printf("a = %d;t = %d;c = %d;g = %d;",a,t,c,g);


    return 0;
}