#include<stdio.h>                 //アルファベットの順列を作成
#include<string.h>

main()
{
 char c[26],d[16];

    c[0]='a'; 
    int x;
                        //ここからcの定義(アルファベット順)
for(x=1;x<=25;x+=1)
 {  
  
   c[x]=c[x-1]+1;

   printf("%c¥n",c[x]);
 }


 
}
