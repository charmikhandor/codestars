#include<stdio.h>
#include<string.h>
 void main ()
 {
   char s1[100];
   char s2[100];
   char s3[100];
   char s4[100];
   char s5[100];
   int i,j,l1,l2,value=0,c=0,c1=0,k;
    printf("enter 1st string");
    scanf("%s",&s1);
    printf("enter 2nd string");
    scanf("%s",&s2);
    printf("enter 3rd string");
    scanf("%s",&s3);
    strcat(s1,s2);
    printf("%s \n",s1);
    printf("%s \n",s2);
    printf("%s \n",s3);
   l1=strlen(s1);
   l2=strlen(s3);

   for(i=65;i<=90;i++)
   {
    for(j=0;j<l1;j++)
    {
      if((int)s1[j]==i)
      {
      s4[c]=s1[j];
      c++;
      }
    } 
   }
    for(i=65;i<=90;i++)
   {
    for(j=0;j<l2;j++)
    {
      if((int)s3[j]==i)
      {
      s5[c1]=s3[j];
      c1++;
      }
    }
   }
    
   printf("%s ",s4);
   printf("%s ",s5);
   value=strcmp(s4,s5);
   printf("%d",value);
   if(value==0)
   printf("Yes");
   else
   printf("No");
 }
