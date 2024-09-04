 #include<stdio.h>
 #include<string.h>
 int countLength(char arr[]){
     int count=0;
     for(int i=0;arr[i]!='\0';i++){
        count++;
     }
     return count-1;
 }
 int main(){
     char name[]="Rohits";
    // printf("Length is : %d\n",strlen(name));
     int length=strlen(name);
     printf("Length is : %d",length);
     return 0;
 }
