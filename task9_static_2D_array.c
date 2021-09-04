#include <stdio.h>

#define MAX 50

int main(void)
{
	int iRow;
	int iColumn;
	int iCounter1;
	int iCounter2;
	int iArr[MAX][MAX];

	printf("Enter number of 2D elements you want (Rows & Columns):\t");
	scanf("%d%d", &iRow, &iColumn);

	for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iColumn; iCounter2++)
		{
			printf("Enter values of ARRAY[%d][%d] :\t", iCounter1, iCounter2);
			scanf("%d", &iArr[iCounter1][iCounter2]);
		}
	}

	printf("\n*****************************************************************************\n");
	for(iCounter1 = 0; iCounter1 < iRow; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 < iColumn; iCounter2++)
		{
			printf("Enter values of ARRAY[%d][%d] :\t%d\n", iCounter1, iCounter2, iArr[iCounter1][iCounter2]);
		}
	}

	return 0;
}
