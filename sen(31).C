
    #include<stdio.h>
    #include<conio.h>
    int main()
    {
    char s[100];
    int len,count=0,i,ch;
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
    if(s[i]==' ')
    count++; 
    }
    ch=len-count;
    printf("%d",ch);
    getch();
    return 0;
    }
