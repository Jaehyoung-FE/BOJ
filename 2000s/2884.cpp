#include<stdio.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==0){
        if(y>=45)
            printf("%d %d", 0, y-45);
        else
            printf("%d %d", 23, 15+y);
    }
    else {
        if(y>=45)
            printf("%d %d", x, y-45);
        else
            printf("%d %d", x-1, 15+y);
    }
    
    
}