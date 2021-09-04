#include <stdio.h>

#define MAX 50

int main(void)
{
	int iMax;
	int iCounter;
	int iArr[MAX];

	printf("How many elements in array :\t");
	scanf("%d", &iMax);

	printf("\n*******************************************************************\n");

	for(iCounter = 0; iCounter < iMax; iCounter++)
	{
		printf("Enter the value of Array[%d] :\t", iCounter);
		scanf("%d", &iArr[iCounter]);
	}

	printf("\n*******************************************************************\n");
	
	for(iCounter = 0; iCounter < iMax; iCounter++)
	{
		printf("value of Array[%d] = %d\n", iCounter, iArr[iCounter]);
	}

	printf("\n*******************************************************************\n");
	printf("&arr = %d\n", &iArr);
	printf("arr = %d\n", iArr);
	printf("arr[0] = %d\n", iArr[0]);
	printf("&arr[0] = %d\n", &iArr[0]);
	printf("arr[0] + 1 = %d\n", iArr[0] + 1);	
	printf("arr + 1 = %d\n", iArr + 1);
	printf("&arr + 1 = %d\n", &iArr + 1);
	printf("*arr = %d\n", *iArr);
	printf("arr = %d\n", &(*iArr) + 1);
	printf("\n*******************************************************************\n");
	
	return 0;
}
