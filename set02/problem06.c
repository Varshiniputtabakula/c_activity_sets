#include<stdio.h>
void input_string(char *a)
{
   int a;
   printf("enter a string");
   scanf("%s",a);
   return a;
}
void str_reverse(char *str, char *rev_str)
{
   for (int i = 0, j = rev_str - 1; i <= j; i++, j--)
   {
     char *str=str[i];
     str[i]=str[j];
     str[j]=*str;
   }
}
void output(char *a, char *reverse_a)
{
    printf("the reversed string is %s",reverse_a);
}

int main()
{    
    char a,rev_str;
    char str[100]=a;
    input_string(&a);
    str_reverse(&str,&rev_str);
    output(&a,&rev_str);
    return 0;

}