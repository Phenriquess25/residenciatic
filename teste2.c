#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c){
        printf("All are equal\n");
    } else if(a == b || b == c || a == c){
        printf("Two are equal\n");
    } else {
        printf("All are different\n");
    }                                   
    return 0;

}