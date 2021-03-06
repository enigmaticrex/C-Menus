#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#define SIZE 100
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
int title_print(char *str,char *symbol,bool offset,char *symbol2)
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
        printf(" ");
        //symbol_print(size+7, symbol2,offset=0);
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
        symbol_print(size,symbol,offset=0);
        printf("\n");
        return 0;
    }
int high_finder(int high,char *str[],int array_size)
{
  int i;
  for(i =1;i<=array_size;i++)
    {
      if(strlen(str[i])>high)
      {
        high = strlen(str[i]);
      }
    }
  return high;
}
int choice_redirection(char c){
  system("clear");
  char *sub_menu_titles[SIZE]={"Menu Maker","Add a Main-Menu","Add a Sub-Menu","Exit to Main Menu"};
  char *symbols[SIZE] = {"=","*"};
  title_print(sub_menu_titles[0],symbols[1],offset=1,symbols[0]);
  printf(" ");
  symbol_print(6, symbols[0],offset=0);
  printf("\n");
  sub_heading(sub_menu_titles[1], symbols[0],1,6);
  sub_heading(sub_menu_titles[2], symbols[0],2,6);
  sub_heading(sub_menu_titles[3], symbols[0],3,6);
  return 0;
}
int default_lines(int selection)
{
  char c ;
  char *default_strings[SIZE]={"\nEnter any key to continue....","\nEnter Your Choice:  ","\nPress Any Key to Exit"};
  printf("%s",default_strings[selection]);
  c = getchar();
  choice_redirection(c);
  return 0;
}

int main(void)
{
    char *hard_string[SIZE] = {"Main Menu","Menu Maker","Exit","Sub Menu Four"};
    char *symbols[SIZE] = {"=","*"};
    int array_size;
    //int array_size  = sizeof(hard_string)/sizeof(hard_string[0]);
    int high=0;
    high = high_finder(high,hard_string,array_size=3);
    title_print(hard_string[0],symbols[1],offset=1,symbols[0]);
    printf(" ");
    symbol_print(high+6, symbols[0],offset=0);
    printf("\n");
    sub_heading(hard_string[1], symbols[0],1,high);
    sub_heading(hard_string[2], symbols[0],2,high);
    default_lines(1);
    return 0;
}
