/////////////////////////////////////////////////////////////////////////////////////////
//	HEADER FILES
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DeAllocateFreeMem(int, int, int ***);

/////////////////////////////////////////////////////////////////////////////////////////
//	FUNCTION DEFINITION
/////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	int iRow;
	int iPlane;	
	int iColumn;
	int iCounter1;
	int iCounter2;
	int iCounter3;
	int ***pppPtr = NULL;

	printf("Enter the Plane, Rows, Columns respectively:\t");
	scanf("%d%d%d", &iPlane, &iRow, &iColumn);

	pppPtr = (int ***) malloc(iPlane * sizeof(int **));

	if(NULL == pppPtr)
	{
		printf("Memory Allocation Failed\n");	
		return -1;
	}

	for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
	{
		pppPtr[iCounter1] = (int **) malloc(iRow * sizeof(int *));

		if(NULL == pppPtr[iCounter1])
		{	
			DeAllocateFreeMem(iCounter1, iRow, pppPtr);
			printf("Memory Allocation Failed\n");
			return -1;
		}
		
		for(iCounter2 = 0; iCounter2 < iRow; iCounter2++)
		{
			pppPtr[iCounter1][iCounter2] = (int *) malloc(iColumn * sizeof(int));
			
			if(NULL == pppPtr[iCounter1][iCounter2])
			{
				DeAllocateFreeMem(iCounter1, iRow, pppPtr);
				printf("Memory Allocation Failed\n");
				return -1;
			}

			for(iCounter3 = 0; iCounter3 < iColumn; iCounter3++)
			{	
				printf("Enter the values of Array[%d][%d][%d] :\t", iCounter1, iCounter2, iCounter3);
				scanf("%d", &pppPtr[iCounter1][iCounter2][iCounter3]);
			}	
		}
	}

		
	printf("\n*************************************************************\n");
	for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
	{		
		for(iCounter2 = 0; iCounter2 < iRow; iCounter2++)
		{
			for(iCounter3 = 0; iCounter3 < iColumn; iCounter3++)
			{	
				printf("Values of Array[%d][%d][%d] : %d\n", iCounter1, iCounter2, iCounter3, pppPtr[iCounter1][iCounter2][iCounter3]);
			}	
		}
	}
	
	//free ka code 
	if(NULL != (pppPtr[iPlane - 1][iRow - 1]))
		iCounter1 = iPlane - 1;

	DeAllocateFreeMem(iCounter1, iRow, pppPtr);
	return 0;
}

void DeAllocateFreeMem(int iCounter1, int iRow, int ***pppPtr)
{
	int iCounter2;
	
	if(NULL == (pppPtr)[iCounter1])
		iCounter1--;

	for(; iCounter1 >= 0; iCounter1--)
	{
		for(iCounter2 = iRow - 1; iCounter2 >= 0; iCounter2--)
		{	
			free((pppPtr)[iCounter1][iCounter2]);
			((pppPtr)[iCounter1][iCounter2]) = NULL;	
		}

		free((pppPtr)[iCounter1]);
		((pppPtr)[iCounter1]) = NULL;
	}

	free(pppPtr);
	pppPtr = NULL;
}
