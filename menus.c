#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10] = "1";
    char str2[10] = "Menu";
    char str3[10] = "10";
    char equal[2] ="=";
    char under_score[2] = "_";
    void title_print(char *str,char *symbol)
    {
        int size = strlen(str)+3;
        int i;
        printf(" ");
        void symbol_print(char *symbol)
        {
           for(i=0;i<=size;i++)
            {
                printf("%s",symbol);
            } 
        }
        symbol_print(symbol);
        printf("\n");
        printf("|");
        printf("  %s ",str);
        printf(" ");
        printf("|");
        printf(" ");
        printf("\n");
        printf(" ");
        symbol_print(symbol);
        printf("\n");
    }
    title_print(str,equal);
    title_print(str3,equal);
    title_print(str2,equal);
    return 0;
}
