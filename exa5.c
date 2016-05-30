#include<stdio.h>

main()  //辞書から1単語を読み込み、文字判定する
{ 
  FILE *fp;
  char *tango;
  char str[40];
  char fname[20]="dicex.txt";
  
 fp=fopen("/usr/share/dict/words","r");   //辞書を開く
 tango=fgets(str,40,fp);  //1単語取得
 
//ここから文字判定
 
 char b[26]="bfehigarscfo";//存在しないアルファベット
 int i;//tangoのカウンタ変数
 int j;//bのカウンタ変数
 int yn;//1文字についてyes=1、no=0


yn=0;

for(j=0;j<=11;j++)
{
  
for(i=0;i<=15;i++)
 {

   if(tango[i]==b[j])
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
printf(" yn= %d ",yn);
printf(" i= %d ",i);
printf(" j= %d ",j);
printf(" b= %s ",b);

//文字判定終了



 fclose(fp);  //辞書閉じる

}
