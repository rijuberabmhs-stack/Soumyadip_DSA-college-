/* 3 write a c program to input two matrix of 2×2 A&B,first their sum & store it in c , print A,B&C*/
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
int row,col,i,j;

printf("Enter rows & cols: ");
scanf("%d,%d",&row,&col);

printf("Enter the first matrix:");
for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the second matrix: ");
for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
        scanf("%d",&b[i][j]);
    }
}
for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
        c[i][j] = a[i][j] + b[i][j];
    }
}
printf("Matrix Sum\n");
for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
        printf("%d ",c[i][j]);
    }
}
}