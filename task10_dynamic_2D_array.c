#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int iRow;
	int iColumn;
	int iCounter1;
	int iCounter2;
	int **ppPtr = NULL;

	printf("Enter the number of 2D elements you want (ROWS AND COLUMNS):\t");
	scanf("%d%d", &iRow, &iColumn);

	ppPtr = (int **) malloc(iRow * sizeof(int *));
	
	printf("\n");

	if(NULL == ppPtr)
	{
		printf("Memory Allocation FAILED\n");
		return -1;
	}

	for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
	{	
		ppPtr[iCounter1] = (int *) malloc(iColumn * sizeof(int));

		if(NULL == ppPtr[iCounter1])
		{
			printf("Memory Allocation Failed\n");
			return -1;
		}

		for(iCounter2 = 0; iCounter2 < iColumn; iCounter2++)
		{
			printf("Enter the values of ARRAY[%d][%d] :\t", iCounter1, iCounter2);
			scanf("%d", &ppPtr[iCounter1][iCounter2]);
		}
	}

	printf("\n*********************************************************************************\n");

	for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iColumn; iCounter2++)
		{
			printf("Array is Array[%d][%d] : %d\n", iCounter1, iCounter2, ppPtr[iCounter1][iCounter2]);
		}
	}
	
	for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
	{
		free(ppPtr[iCounter1]);
		ppPtr[iCounter1] = NULL;
	}
	
	free(ppPtr);
	ppPtr = NULL;

	return 0;
}
