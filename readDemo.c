#include <stdio.h>

int main(){

    FILE * in = fopen("input.txt","r");

    int num,sum=0,n= 0;    
    fscanf(in, "%d",&num);

    while(num !=0){
        n = n +1;
        sum = sum + num;
        fscanf(in , "%d", &num);

    }

    if(n ==0) printf("\nNo numbers supplied\n");
    else{
        if(n ==1) printf("\n 1 number is supplied");
        else printf("\n%d numbers supplied\n", n);
        printf("The average is %3.2f\n" , (double) sum/n);
    }
    fclose(in);

}