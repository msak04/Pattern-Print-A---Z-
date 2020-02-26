//MD SAIF AHAMMOD KHAN
#include <stdio.h>
int main()
{
        int i,j,n=10;
        for(i=1;i<=n;i++){
            for(j=0;j<=n;j++){
          if((j==i&&i<=n/2)||(j==(n-1-i)&&i<=n/2)||(j==1||j==n-1))

            {
                printf("M");
            }
            else
            {
                printf(" ");
            }
        }

        for(j=1;j<=1;j++){
            printf(" ");
            }
            for(j=1;j<=n;j++){
            if(i==1||j==1||j==n||i==n){
                printf("D");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=1;j++){
            printf(" ");
            }
        for(j=1;j<=9;j++){
            printf(" ");
            }

       for(j=1;j<=n;j++){
            if(i==1||i==n||i==(n/2)+1||(j==1&&i<(n/2)+1)||(j==n&&i>(n/2)+1)){
                printf("S");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=1;j++){
            printf(" ");
            }
                    for(j=1;j<=n;j++){
            if(i==1||j==1||j==n||i==(n/2)+1){
                printf("A");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=1;j++){
            printf(" ");
            }
        for(j=1;j<=n;j++){
            if(i==1||i==n||j==(n/2)||j==(n/2)+1){
                printf("I");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=1;j++){
            printf(" ");
            }
                    for(j=1;j<=n;j++){
            if(i==1||j==1||i==(n/2)+1){
                printf("F");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=1;j++){
            printf(" ");
            }

            printf("\n");
        }
        printf("\n");
        printf("\n");
        printf("\n");

        for(i=1;i<=n;i++){

            for(j=1;j<=n;j++){
            if(i==1||j==1||j==n||i==(n/2)+1){
                printf("A");
            }
            else{
                printf(" ");
            }
        }
                for(j=1;j<=1;j++){
            printf(" ");
            }

        for(j=1;j<=n;j++){
            if(j==n||j==1||i==(n/2)+1){
                printf("H");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=1;j++){
            printf(" ");
            }
        for(j=1;j<=n;j++){
            if(i==1||j==1||j==n||i==(n/2)+1){
                printf("A");
            }
            else{
                printf(" ");
            }
        }

            for(j=0;j<=n;j++){
          if((j==i&&i<=n/2)||(j==(n-1-i)&&i<=n/2)||(j==1||j==n-1))

            {
                printf("M");
            }
            else
            {
                printf(" ");
            }
        }

        for(j=1;j<=1;j++){
            printf(" ");
            }
            for(j=0;j<=n;j++){
          if((j==i&&i<=n/2)||(j==(n-1-i)&&i<=n/2)||(j==1||j==n-1))

            {
                printf("M");
            }
            else
            {
                printf(" ");
            }
        }

        for(j=1;j<=1;j++){
            printf(" ");
            }
                            for(j=1;j<=n;j++){
            if(i==1||j==1||j==n||i==n){
                printf("O");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=1;j++){
            printf(" ");
            }
        for(j=1;j<=n;j++){
            if(i==1||j==1||j==n||i==n){
                printf("D");
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
        printf("\n");
        printf("\n");
        printf("\n");

            for(i=1;i<=n;i++){
            for(j=1;j<n;j++){
          if(j==1||(j==n-i-2)||(j+3==i))
            {
                printf("K");
            }
            else
            {
                printf(" ");
            }
        }
                for(j=1;j<=n;j++){
            if(j==n||j==1||i==(n/2)+1){
                printf("H");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=1;j++){
            printf(" ");
            }
        for(j=1;j<=n;j++){
            if(i==1||j==1||j==n||i==(n/2)+1){
                printf("A");
            }
            else{
                printf(" ");
            }
        }
        for(j=1;j<=1;j++){
            printf(" ");
            }

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
