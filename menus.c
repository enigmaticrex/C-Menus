#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool offset = 0;
int symbol_print(int size,char *symbol,bool menu_check)
        {
          if(menu_check)
          {
            printf("        ");
          }
          int i;
           for(i=0;i<=size;i++)
            {
                printf("%s",symbol);
            } 
            return 0;
        }
int title_print(char *str,char *symbol,bool offset)
    {
        int size = strlen(str)+3;
        printf(" ");
        symbol_print(size,symbol,offset);
        printf("\n");
        if(offset)
          {
            printf("        ");
          }
        printf("|");
        printf("  %s ",str);
        printf(" ");
        printf("|");
        printf(" ");
        printf("\n");
        printf(" ");
        symbol_print(size,symbol,offset);
        printf("\n");
        return 0;
    }
int sub_heading(char *str,char *symbol,int number,int high)
    {
        int size = high+6;
        printf("  %d. %s ",number,str);
        printf(" ");
        printf(" ");
        printf("\n");
        printf(" ");
        symbol_print(size,symbol,offset);
        printf("\n");
        return 0;
    }
int high_finder(int high,char *str[])
{
  int i;
  for(i =1;i<=3;i++)
    {
      if(strlen(str[i])>high)
      {
        high = strlen(str[i]);
      }
    }
  return high;
}
int main(void)
{

    char *hard_string[] = {"Main Menu","Sub Menu One","Sub Menu Three","Sub Menu Four"};
    char symbols[3][3] = {"=","*"};
    int i,high=0;
    high = high_finder(high,hard_string);
    title_print(hard_string[0],symbols[1],offset=1);
    printf(" ");
    symbol_print(high+6, symbols[0],offset=0);
    printf("\n");
    sub_heading(hard_string[1], symbols[0],1,high);
    sub_heading(hard_string[2], symbols[0],2,high);
    sub_heading(hard_string[3], symbols[0],3,high);
    return 0;
}
