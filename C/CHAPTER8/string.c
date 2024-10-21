#include<stdio.h>
    
int main(){
    char s1[]={'s','h','i','v','a','n','s','h','\0'};
    char s2[]="shivansh";
    char *ptr=s2;
    while (*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    
    //2nd Convenient Method
    char *ptr_2 = "Shivansh Bhai";
    printf("\n%s\n",ptr_2);

    char* ptr_3="Shivansh Bhai";
    ptr_3="Shubham Bhai\n";
    printf("%s\n",ptr_3);
    return 0;
}