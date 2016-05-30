if(yn==0)  //新規ファイルに書き込むプログラム
{

  FILE *fp;
   
  fp=fopen("dicb.txt","w");
  
  fputs(tango,fp);  //調べ続ける単語を入力する
  
}

  