#include<stdio.h>

main()  //辞書の1行目と2行目を表示するプログラム
{
 FILE *fp;
 char *p;
 char str[50];

 
 fp=fopen("/usr/share/dict/words","r");
 p=fgets(str,50,fp);
 
 

 
  printf("%s",str);
   p=fgets(str,50,fp);
 
   printf("%s",str); 
   
 fclose(fp);
}
