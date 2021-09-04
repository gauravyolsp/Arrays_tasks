/////////////////////////////////////////////////////////////////////////////////////////////
//	HEADER FILE
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////

#define MAX 100

/////////////////////////////////////////////////////////////////////////////////////////////
//	FUNCTION DECLARATION
/////////////////////////////////////////////////////////////////////////////////////////////

void ArrayAssign(int, int *, int *);

/////////////////////////////////////////////////////////////////////////////////////////////
//	FUNCTION DEFINITION
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{	
	int iMax;
	int iCounter;
	int iArr1[MAX];
	int iArr2[MAX];

	printf("\nEnter elements n (< %d) :\t", MAX);
	scanf("%d", &iMax);

	// accepting values of 1st ARRAY

	for(iCounter = 0; iCounter < iMax; iCounter++)
	{
		printf("Enter iArr1[%d] element :\t", iCounter);
		scanf("%d", &iArr1[iCounter]);
	}
	
	// function call

	ArrayAssign(iMax, iArr1, iArr2);

	printf("\n*************************************************************************************\n");
	
	for(iCounter = 0; iCounter < iMax; iCounter++)
	{
		printf("after assigning value of iArr2[%d] element = %d\n", iCounter, iArr2[iCounter]);
	}

	return 0;
}

void ArrayAssign(int iMax, int *iArr1, int *iArr2)
{
	int iCounter;

	for(iCounter = 0; iCounter < iMax; iCounter++)	
		iArr2[iCounter] = iArr1[iCounter];
}
