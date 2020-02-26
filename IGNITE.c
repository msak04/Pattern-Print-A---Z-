//Printing IGNITE
#include <stdio.h>
int main()

{
    int i,j,n=10;
    for(i=1;i<=n;i++){


        for(j=1;j<=n;j++){
            if(i==1||i==n||j==(n/2)||j==(n/2)+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=3;j++){
            printf(" ");
            }
for(j=1;j<=n;j++){
            if(i==1||i==n||j==1||(j==n&&i>(n/2))){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        for(j=1;j<=3;j++){
            printf(" ");
            }
for(j=0;j<=n;j++){
          if((j==i||j==1||j==n))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

for(j=1;j<=n;j++){
            if(i==1||i==n||j==(n/2)||j==(n/2)+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=3;j++){
            printf(" ");
            }
            for(j=1;j<=n;j++){
            if(i==1||j==(n/2)||j==(n/2)+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=3;j++){
            printf(" ");
            }
             for(j=1;j<=n;j++){
            if(i==1||j==1||i==n||i==(n/2)+1){
                printf("*");
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
