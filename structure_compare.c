#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//	STRUCTURE DECLARATION
////////////////////////////////////////////////////////////////////////////////////

struct DEMO
{
	char chChar;
	int iNo;
	float fNo;
	double dNo;
};

/////////////////////////////////////////////////////////////////////////////////////
//	FUNCTION DECLARATION
////////////////////////////////////////////////////////////////////////////////////

int StuctComp(struct DEMO, struct DEMO);

//////////////////////////////////////////////////////////////////////////////////////
//	FUNCTION DEFINATION
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
	struct DEMO dObj1, dObj2;
	int iAns;

	printf("Enter the inputs below:\n\n");	

	//Accepted value of 1st object from user
	
	printf("Enter a FIRST CHARACTER VALUE:\t");
	scanf("%c", &dObj1.chChar);

	printf("Enter a FIRST INTERGER VALUE:\t");
	scanf("%d", &dObj1.iNo);

	printf("Enter a FLIRST FLOAT VALUE:\t");
	scanf("%f", &dObj1.fNo);

	printf("Enter a FIRST DOUBLE VALUE:\t");
	scanf("%lf", &dObj1.dNo);

	//Accepted value of 2nd object from user

	printf("\n\nEnter a SECOND CHARACTER VALUE:\t");
	scanf(" %c", &dObj2.chChar);
	
	printf("Enter a SECOND INTERGER VALUE:\t");
	scanf("%d", &dObj2.iNo);

	printf("Enter a SECOND FLOAT VALUE:\t");
	scanf("%f", &dObj2.fNo);

	printf("Enter a SECOND DOUBLE VALUE:\t");
	scanf("%lf", &dObj2.dNo);

	iAns = StructComp(dObj1, dObj2);
	
	if(iAns == 1)
		printf("\nOBJECT 1 and OBJECT 2 are equal\n\n");

	else
		printf("\nOBJECT 1 and OBJECT 2 are not equal\n\n");
	
	return 0;
}

int StructComp(struct DEMO Obj1, struct DEMO Obj2)
{
	if(Obj1.chChar == Obj2.chChar && Obj1.iNo == Obj2.iNo && Obj1.fNo == Obj2.fNo && Obj1.dNo == Obj2.dNo)
		return 1;
	
	else
		return -1;
}
