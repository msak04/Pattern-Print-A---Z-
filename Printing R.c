//Printing R
#include <stdio.h>
int main()

{
    int i,j,n=10;
    for(i=1;i<=n;i++){
       for(j=1;j<=n;j++){
            if(i==1||i==(n/2)||(j==1)||(j==n&&i<(n/2))||(j+(n/2)==i+3&&j>n/2-2)){
                printf("R");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=3;j++){
            printf(" ");
            }
        printf("\n");
    }

    return 0;
}
