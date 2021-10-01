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
void sub_heading(char *str,char *symbol,int number,int high)
    {
        
        int size = high+6;
        printf(" ");
        symbol_print(size,symbol);
        printf("\n");
        printf("  %d. %s ",number,str);
        printf(" ");
        printf(" ");
        printf("\n");
        printf(" ");
        symbol_print(size,symbol);
        printf("\n");
    }

int main(void)
{

    char hard_string[10][100] = {"Main Menu","Sub Menu One","Sub Menu Three","Sub Menu Four"};
    char symbols[3][3] = {"=","*"};
    
    
    int i,j,high=0;
    for(i =1;i<=3;i++)
    {
      if(strlen(hard_string[i])>high)
      {
        high = strlen(hard_string[i]);
      }
    }
    title_print(hard_string[0],symbols[1]);
    sub_heading(hard_string[1], symbols[0],1,high);
    sub_heading(hard_string[2], symbols[0],2,high);
    sub_heading(hard_string[3], symbols[0],3,high);
    return 0;
}
