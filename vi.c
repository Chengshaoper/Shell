#include<stdio.h>
#include<string.h>
int main()
{
FILE *fp=fopen("2.txt","w");
char buf[1024];
while(1)
{
//int i=0;
fgets(buf,sizeof(buf),stdin);
    if(strncmp(buf,":wq",3)==0)
{
break;
}
fputs(buf,fp);
/*while(buf[i]!='\0')
{
fputc(buf[i],fp);
i++;
}*/   //另一种将数组内容传入文件指针指向文件的方法
}

fclose(fp);
fp=fopen("2.txt","r");
char ch;
while(!feof(fp))
{
ch=fgetc(fp);
/*if(feof(fp))
{
break;
}*/
printf("%c",ch);
}
fclose(fp);
return 0;
}



