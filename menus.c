#include <stdio.h>
#include <string.h>
void symbol_print(int size,char *symbol)
        {
          int i;
          
           for(i=0;i<=size;i++)
            {
                printf("%s",symbol);
            } 
        }
void title_print(char *str,char *symbol)
    {
        
        int size = strlen(str)+3;
        printf(" ");
        symbol_print(size,symbol);
        printf("\n");
        printf("|");
        printf("  %s ",str);
        printf(" ");
        printf("|");
        printf(" ");
        printf("\n");
        printf(" ");
        symbol_print(size,symbol);
        printf("\n");
    }
int main(void)
{

    char hard_string[10] = "Menu";
    char symbols[3][10] = {"=","*"};
    
    title_print(hard_string,symbols[0]);
    title_print(hard_string,symbols[1]);
    return 0;
}
