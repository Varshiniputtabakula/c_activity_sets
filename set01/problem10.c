#include<stdio.h>
 int input_strings(char *string1,char*string2)
{
    printf("enter string 1");
    scanf("%s",string1);
    printf("enter string 2");
    scanf("%s",string2);
}

 int compare_strings(char *string1,char *string2)
{
    int i=0;
    while(string2[i]!='\0' && string1[i]!='\0')
    if(string1[i]>string2[i])
    {
        return 1;
    }
     while(string2[i]>string1[i])
     {
        return -1;
     }
     i++;
}
    void strings_output(char *string1,char *string2, int result){
        if(result>0)
        {
            printf("%s is greater than %s ",string1,string2);
        }

        else if(result<0)
        {
            printf("%s is greater than %s ",string2,string1);
        }
      }

      int main()
      { 
        char string1[100],string2[100];
        int result;
        input_strings(string1,string2);
        result=compare_strings(string1,string2);
        strings_output(string1,string2,result);
        return 0;
      }



 
