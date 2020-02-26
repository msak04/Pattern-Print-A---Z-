//printing Y
#include <stdio.h>
int main()
{
        int i,j,n=10;
        for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
          if((j==i&&j<n/2||j==n-i)&&i<n/2||j==n/2&&i>n/2-1)
            {
                printf("Y");
            }
            else
            {
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
