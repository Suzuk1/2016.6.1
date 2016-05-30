#include<stdio.h>
#include<string.h>


main()//文字の長い方の文字数を表示する
{
  int lengthM;
  int length1;
  int length2;
  char str1[];
  char str2[10]="\n";
  char str3[];
  char strM[];
  
  
  gets(str1);
  
  length1=strlen(str1);
  length2=strlen(str2);

  
  strcpy(strM,str1"\n");
   
  if(length1>length2)
  {
    strcat(strM,str2);
  }
  else if(length1==length2)
  {
    strcat(strM,str2);
    strcat(strM,str3)
  }
  else
  {
    strcpy(strM,str3);
    strcat(strM,str2);
  }
  
  lengthM=strlen(strM);
   printf("入力された最長の文字は%sです",strM);
  printf("入力された文字列の長さは%dです",lengthM);
  
}
