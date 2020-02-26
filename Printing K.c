//printing K
#include <stdio.h>
int main()

{
    int i,j,n=10;
    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
          if(j==1||(j==n-i-2)||(j+3==i))
            {
                printf("K");
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
