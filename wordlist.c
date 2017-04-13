#define start 32
#define end 126
#include<stdio.h>
FILE *fp;
char string[10] = {};
int max_size;
void main(){
    fp=fopen("aaa.txt","w");
    scanf("%d",&max_size);
    fun(0);
    fclose(fp);
}
void fun(int index){
    int i;
    for(i=start;i<end;i++){
        string[index] = i;
        if(index!=max_size-1){
            fun(index+1);
        }
        else{
            string[index+1] = 0;
            fprintf(fp,"%s\n",string);
        }
    }
}