#include <stdio.h>

// void skiplines(int n){
//     for(int h =1; h<=n; h++){
//         printf("How are you? \n");
//     }
// }
int main(){
    int n1, n2;
    int max(n1,n2);
    printf("Enter two whole numbers: ");
    scanf("%d %d",&n1,&n2);
    while(n1 != 0 || n2 != 0){
        printf("The bigger is %d \n", max(n1,n2));
        printf("Enter two whole numbers: ");
        scanf("%d %d", &n1,&n2);
    }
}


int max(int a, int b){
    // skiplines(3);
if(a>b) return a;
return b;

}