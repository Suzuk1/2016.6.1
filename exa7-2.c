#include<stdio.h>
#include<string.h>

main()
{
  char s1[]="Hello";
 char s2[]="\n";
 char s3[]="World";
 
 strcat(s1,s2);
 strcat(s1,s3);
 
 printf("連結文字は%s",s1);

}