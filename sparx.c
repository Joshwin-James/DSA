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
    
    int comp[row1][col1];
    int k=0;
    printf("\n");
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
        if(trs[i][j]!=0){
            comp[k][0]=j;
            comp[k][1]=i;
            comp[k][2]=trs[i][j];
            k++;
            }
          
        }
      }
    printf("The compact matrix is \n:");
    for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1; j++) {
            printf("%d \t",comp[i][j]);
        }
        printf("\n");
    }
  
      
    return 0;
}

