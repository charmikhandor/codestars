#include<stdio.h>
#include<string.h>
void main ()
{
    char s1[100];
    char s2[100];
    char s3[100];
    int k,k1,k2,k3;
    int i,j,l1,l2,value=0;
    char c,c1;
    printf("enter the 3 strings \n");
    scanf("%s",&s1);
    scanf("%s",&s2);
    scanf("%s",&s3);
    strcat(s1,s2);    
    l1=strlen(s1);    
    l2=strlen(s3);
    for(i=0;i<l1-1;i++)
    {
        for(j=0;j<l1-1-i;j++)
        {
            k=(int)s1[j];
            k1=(int)s1[j+1];
            if(k>k1)
            {
                c=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=c;
            }
        }
    }
    for(i=0;i<l2-1;i++)
    {
        for(j=0;j<l2-1-i;j++)
        {
            k2=(int)s3[j];
            k3=(int)s3[j+1];
            if(k2>k3)
            {
                c1=s3[j];
                s3[j]=s3[j+1];
                s3[j+1]=c1;
            }
        }
    }
    value=strcmp(s1,s3);
    if(value==0)
    printf("Yes");
    else
    printf("No");
}
   

   

   

   

   

   


