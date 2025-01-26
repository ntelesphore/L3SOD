#include<stdio.h>
int main()
{
	int month=6,n;
	printf("ENTER NUMBER CORRESPONDING TO MONTHS YOU WISH\n");
	//scanf("%d",n);
	//for(n=0 n<=12; n++)
{
switch(month)
{
	case 1:
		printf("JANUARY");
		break;
		case 2:
		printf("FEBRUARY");
		break;
		case 3:
		printf("MARCH");
		break;
		case 4:
		printf("APRIL");
		break;
		case 5:
		printf("MAY");
		break;
		case 6:
		printf("JUNE");
		break;
		case 7:
		printf("JULLY");
		break;
		case 8:
		printf("AUGUST");
		break;
		case 9:
		printf("SEPTEMBER");
		break;
		case 10:
		printf("OCTOBER");
		break;
		case 11:
		printf("NOVEMBER");
		break;
		case 12:
		printf("DECEMBER");
		break;
	default:
	case 0:
		printf("invalid month");

}
}
}
