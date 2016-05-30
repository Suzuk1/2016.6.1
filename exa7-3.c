#include<stdio.h>
#include<ctype.h>
#include<string.h>

main()  //新しい辞書から単語を読み込み、最長文字を表示する
{  
  
  
  int j0=0; 
  FILE *fp;
  char *tango;
  char tango1[45];
  char tango2[45];
  char str[40];

  int lengthM;
  int length1;
  int length2;

  char str2[10]="\n";
  char strM[5000];
    
  
  
 
  
   fp=fopen("/usr/share/dict/words","r");   //辞書を開く
  tango=fgets(str,40,fp);  //1単語取得
  strcpy(tango1,tango);
  
  tango=fgets(str,40,fp);
  strcpy(tango2,tango);
  
  

 while((tango1!=NULL)||(tango2!=NULL))
 {
 
//ここから2単語についての文字数判定

  length1=strlen(tango1);
  length2=strlen(tango2);

  
  strcpy(strM,tango1);
   
  if(length1>length2)
  {
    strcat(strM,str2);
  }
  else if(length1==length2)
  {
    strcat(strM,str2);
    strcat(strM,tango2);
  }
  else
  {
    strcpy(strM,tango2);
    strcat(strM,str2);
  }
  
  lengthM=strlen(strM);
  
 tango=fgets(str,40,fp);  //1単語取得
  strcpy(tango1,tango);
  
  tango=fgets(str,40,fp);
  strcpy(tango2,tango);
 

} 
  
   printf("入力された最長の文字は%sです",strM);
  printf("入力された文字列の長さは%dです",lengthM);
  

fclose(fp);  //辞書閉じる

}
