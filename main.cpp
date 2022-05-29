#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int countc(char *file)
{   FILE *f;
    f = fopen(file, "r");
    int cchar=0;
    char a;
    if(NULL==(f=fopen(file,"r")))
    {
        printf("file is NULL");
    }
    else
    {
        while (!feof(f)) {
        a=fgetc(f);
        if(a==-1){
            break;
        }
        cchar++;
         }
        fclose(f);
        printf("charnum:%d ",cchar);
    }
    return 0;
}
int countw(char *file)//返回文件词的数目
{   FILE *f;
    int n=0;
    f=fopen(file,"r");
    char ch;
    if(NULL==(f=fopen(file,"r")))
    {
     printf("file is NULL");
    }
    else{
         while(!feof(f)) {
        ch=fgetc(f);
         if((ch==',')||(ch==' ')||(ch==-1)||(ch=='\n')){
             n++;
         }
        
     }
    }
    fclose(f);
    printf("\nwordnum:%d ",n);
    return 0;
}
    
int main(int argc, char *argv[]) {
    FILE *fp;
    if((fp=fopen(argv[2],"r"))==NULL){
           printf("FileNull\n\n\n");
    }else if(!strcmp(argv[1],"-w")) {
        countw(argv[2]);
    }else if(!strcmp(argv[1],"-c")) {
        countc(argv[2]);
    }else {
        printf("NullPoint\n");
    }
        return 0;
}
