#include<stdio.h>
#include<ctype.h>

main()  //辞書から単語を読み込み、文字判定する
{ 
  FILE *fp;
  char *tango;
  char str[40];
  char b[26]="bcdefghijklmnopqrstuvwzyx";//存在しないアルファベット
  char bx;//bを大文字にしたもの
  int i;//tangoのカウンタ変数
  int j;//bのカウンタ変数
  long k;
  int yn;//1文字についてyes=1、no=0
  
  fp=fopen("/usr/share/dict/words","r");   //辞書を開く
  tango=fgets(str,40,fp);  //1単語取得

  k=0;
 
 while(tango!=NULL)
 {
 
//ここから1単語についての文字判定

yn=0;

for(j=0;j<=24;j++)
{
  
for(i=0;i<=15;i++)
 {

   if(tango[i]==b[j])
   {
     yn=1;
     break;
   }
   bx=toupper(b[j]);
   
   if(tango[i]==bx)
   {
     yn=1;
     break;
   }
 }
 if(yn==1)
 {
  break;
 }
    
} 

//文字判定終了

  if(yn==0)
  {
    printf("%s",tango);
  }
  
  tango=fgets(str,40,fp);
  k++;
 
}

fclose(fp);  //辞書閉じる
printf("%d",k);
}
