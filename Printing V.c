//Printing V
#include <stdio.h>
int main()
{
        int i,j,n=10;
        for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==i/2||j==(n-i/2)){
                printf("V");
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

