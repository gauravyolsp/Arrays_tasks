//////////////////////////////////////////////////////////////////////////////////////
//	HEADER FILES
//////////////////////////////////////////////////////////////////////////////////////	

#include <stdio.h>
#include <malloc.h>

//////////////////////////////////////////////////////////////////////////////////////
//	FUNCTION DEFINATION
//////////////////////////////////////////////////////////////////////////////////////

int main(void)
{
	int iCount;
	int iCounter;
	int *pPtr = NULL;

	printf("Enter the number of elements:\t");
	scanf("%d", &iCount);

	pPtr = (int *) malloc(iCount * sizeof(int));

	if(NULL == pPtr)
	{
		printf("Memory Allocation FAILED\n");
		return -1;
	} 

	for(iCounter = 0; iCounter < iCount; iCounter++)
	{
		printf("Enter the value of Array[%d]: ", iCounter);
		scanf("%d", &pPtr[iCounter]);
	}
	
	printf("\n*****************************************************************************\n");

	for(iCounter = 0; iCounter < iCount; iCounter++)
	{
		printf("Value of Array[%d] = %d\n", iCounter, pPtr[iCounter]);
	}

	free(pPtr);
	pPtr = NULL;

	return 0;
}
