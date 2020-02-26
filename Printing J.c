//Printing J
#include <stdio.h>
int main()

{
    int i,j,n=10;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||(i==n&&j<n/2+1)||j==(n/2)+1){
                printf("J");
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
