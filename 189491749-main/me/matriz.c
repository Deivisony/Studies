#include <stdio.h>
#define LIN 5
#define COL 5

int main(void)
{
    int iCont, jCont;
    char matriz[LIN][COL];

    for(iCont = 0; iCont < LIN; iCont++)
    {
        for(jCont = 0; jCont < COL; jCont++)
        {
            printf("Informe o character <%d, %d>://>", iCont, jCont);
            scanf("%c", &matriz[iCont][jCont]);
            getchar();
        }
    }
    for(iCont = 0; iCont < LIN; iCont++)
    {
        for(jCont = 0; jCont < COL; jCont++)
        {
            printf("%c ", matriz[iCont][jCont]);
        }
        printf("\n");
    }

}
