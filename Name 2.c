#include <stdio.h>
int main()

{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        //Printing M
       for(j=1;j<=n;j++){
            for(j=0;j<n;j++){
          if((j==i&&i<=n/2)||(j==(n-1-i)&&i<=n/2)||(j==1||j==n-1))

            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        //printing A
        for(j=1;j<=n;j++){
            if(i==1||j==1||j==2||j==n-1||j==n||i==(n/2)+1){
                printf("$");
            }
            else{
                printf(" ");
            }
        }
        //printing X
        for(j=0;j<n;j++){
          if((j==i||j==n-1-i))//||(j==i+1||j==n-1-i+1))
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    }

    return 0;
}
