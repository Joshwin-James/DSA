#include <stdio.h>

int main() {
    int row1,col1;
    printf("The First sparse matrix\n"); 
    printf("Enter The number of rows :\n");
    scanf("%d",&row1);
    printf("Enter The number of columns:\n");
    scanf("%d",&col1);
    int m1[row1] [col1];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nFirst Matrix is:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d \t",m1[i][j]);
        }
        printf("\n");
    }
    printf("Input elements for  Second sparse matrix\n"); 
    int m2[row1] [col1];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\nSecond Matrix is:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d \t",m2[i][j]);
        }
        printf("\n");
    }
    printf("Addition of the 2 Matrix\n");
    int add[row1] [col1];
      for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            add[i][j]=m1[i][j]+m2[i][j];
        }
      }
    printf("The added matrix is\n");
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
            printf("%d \t",add[i][j]);
        }
        printf("\n");
    }
    int trs[row1][col1];
    printf("The Transpose is\n");
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
        trs[j][i]=add[i][j];
        }
      }
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
            printf("%d \t",trs[i][j]);
        }
        printf("\n");
    }
    int non;
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
        if(trs[i][j]!=0){
          non++;
          
          }
        }
      }
    int comp[non+1][3];
    comp[0][0]=non+1;
    comp[0][1]=3;
    comp[0][2]=non;
    int k=1;
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
        if (add[i][j]!=0){
          comp[k][0]=i;
          comp[k][1]=j;
          comp[k][2]=trs[i][j];
          k++;
          }
        }
      }
    printf("\n");
    printf("Compact Representation\n");
   for(int i=0;i<non+1;i++){
   printf("%d\t%d\t%d\n",comp[i][0],comp[i][1],comp[i][2]);
   }
    
      
    return 0;
}

