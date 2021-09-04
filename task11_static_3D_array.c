/////////////////////////////////////////////////////////////////////////////////////////
//	HEADER FILE
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//	MACRO DEFINITION
/////////////////////////////////////////////////////////////////////////////////////////

#define MAX 50

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
	int iArr[MAX][MAX][MAX];

	printf("Enter the Plane, Rows, Columns respectively:\t");
	scanf("%d%d%d", &iPlane, &iRow, &iColumn);

	for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
	{	
		for(iCounter2 = 0; iCounter2 < iRow; iCounter2++)
		{		
			for(iCounter3 = 0; iCounter3 < iColumn; iCounter3++)
			{
				printf("Enter the value of Array[%d][%d][%d] :\t", iCounter1, iCounter2, iCounter3);
				scanf("%d", &iArr[iCounter1][iCounter2][iCounter3]);
			}
		}
	}

	printf("\n*******************************************************************\n");

	for(iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iRow; iCounter2++)
		{
			for(iCounter3 = 0; iCounter3 < iColumn; iCounter3++)
			{
				printf("values of arr[%d][%d][%d] is : %d\n", iCounter1, iCounter2, iCounter3, iArr[iCounter1][iCounter2][iCounter3]);
			}
		}
	}

	return 0;	
}
