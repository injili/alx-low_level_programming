#include <stdio.h>
int main()
{
	char typeOfchar;
	int typeOfint;
	long int typeOflint;
	long long int typeOfllint;
	float typeOffloat;

	printf("Size of a char: %ld byte(s)\n",sizeof(typeOfchar));
	printf("Size of an int: %ld byte(s)\n",sizeof(typeOfint));
	printf("Size of a long int: %ld byte(s)\n",sizeof(typeOflint));
	printf("Size of a long long int: %ld byte(s)\n",sizeof(typeOfllint));
	printf("Size of a float: %ld byte(s)\n",sizeof(typeOffloat));

	return 0;
}
