#include<stdio.h>
#include<string.h>


#ifdef _MSC_VER
#include<conio.h>
#endif


main()  //文字列から文字を検索する(逆引きp.280参照)
{
 char str[16]="the programming";  //文字列
 char *p,*end,p;

 // gets(str);
 
 p=str; //検索位置の初期化
 end=p+strlem(str); //検索終了位置
 
 while(p!=NULL && p< end)
 {
   p=strchr(p,'g');  //pから検索
   
   if(p)
   {
     printf("Index Number=%d,str[%d]=%c\n",
       (int)(p-str),(int)(p-str), *p);
     
     p++;
   }
 }
#ifdef _MSC_VER
 _getch();
#endif
 return 0; 
 
}

     
