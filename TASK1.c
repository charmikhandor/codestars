#include<stdio.h>
#include<string.h>
void main()
{
    int i, j, c=0, a=0;
    char str1[100];
    char str2[100];
    char str3[100];
    gets(str1);
    gets(str2);
    gets(str3);
    strcat(str1, str2);
    printf("%s", str1);

    for(i=0; i<strlen(str3); i++)
    {
        while(a==0){
        for (j=0; j<strlen(str1); j++)
        {
            if(str1[i]==str3[j])
            {
                    c++;
                    a=1;
            }

        }
        }
       a=0; 
    }
    
    printf("%d", c);
}