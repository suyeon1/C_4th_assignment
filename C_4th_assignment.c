 #include <stdio.h>

 

int main()

{

    int a[10][10],transpose[10][10], row, column, i, j,n=0;

    printf("Enter rows and columns of matrix: ");

    scanf("%d %d", &row, &column);

 

   

    printf("\n Enter elements of matrix:\n");

    for(i=0; i<row; ++i)

      {  for(j=0; j<column; ++j)

        {

            printf("Enter element a%d%d: ",i+1, j+1);

            scanf("%d", &a[i][j]);

        }

	}

	

		    // Displaying the matrix a[][] */

    printf("\nEntered Matrix: \n");

	  for(i=0; i<row; ++i)

      {  for(j=0; j<column; ++j)

        {

			n++%column==0 ? puts("") : printf("");

 

           printf(" %d ",a[i][j]);

        }

	}

	puts("");

 

	printf("Transpose of Martix:\n");

	for(j=0; j<column; ++j){

		for(i=0; i<row; ++i){

			transpose[i][j]=a[i][j];

 

			n++%row==0 ? puts("") : printf("");

 

			printf(" %d ",transpose[i][j]);

		}

	}

	puts("");

	return 0;

}
