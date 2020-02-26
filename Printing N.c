//Printing N
#include <stdio.h>
int main()

{
    int i,j,n=10;
    for(i=1;i<=n;i++){
        for(j=0;j<=n;j++){
          if((j==i||j==1||j==n))
            {
                printf("N");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}
