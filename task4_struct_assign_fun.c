#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//	STRUCTURE DECLARATION
//////////////////////////////////////////////////////////////////////////////////////////

struct DEMO
{
	int iRollNo;
	char chName;
	float fPercentage;
};

//////////////////////////////////////////////////////////////////////////////////////////
//	FUNCTION DECLARTION
//////////////////////////////////////////////////////////////////////////////////////////

void ObjectAssign(struct DEMO, struct DEMO *, struct DEMO *);

//////////////////////////////////////////////////////////////////////////////////////////
//	FUNCTION DEFINATION
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	struct DEMO dObj1, dObj2, dObj3;

	printf("Enter the following details:\n\n");

	//accepting values of 1st object

	printf("Enter the NUMBER for Object 1 :\t");
	scanf("%d", &dObj1.iRollNo);

	printf("Enter the First character for Object 1 :\t");
	scanf(" %c", &dObj1.chName);

	printf("Enter the PERCENTAGE for Object 1 :\t");
	scanf("%f", &dObj1.fPercentage);

	ObjectAssign(dObj1, &dObj2, &dObj3);
	
	//After assigning value of 2nd object

	printf("\nafter assigning NUMBER for Object 2 = %d\n", dObj2.iRollNo);
	printf("after assigning First character for Object 2 = %c\n", dObj2.chName);
	printf("after assigning PERCENTAGE for Object 2 = %f\n\n", dObj2.fPercentage);

	//After assigning value of 3rd object

	printf("after assigning NUMBER for Object 3 = %d\n", dObj3.iRollNo);
	printf("after assigning First character for Object 3 = %c\n", dObj3.chName);
	printf("after assigning PERCENTAGE for Object 3 = %f\n\n", dObj3.fPercentage);

	return 0;
}

void ObjectAssign(struct DEMO dObj1, struct DEMO *dObj2, struct DEMO *dObj3)
{
	*dObj2 = dObj1;

	(*dObj3).iRollNo = dObj1.iRollNo;
	(*dObj3).chName =	dObj1.chName;
	(*dObj3).fPercentage = dObj1.fPercentage;
}
