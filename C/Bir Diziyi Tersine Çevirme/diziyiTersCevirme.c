/*********************************************************
*		B�R D�Z�Y� TERS�NE �EV�RME
*		Author: Hakan Ery�cel
**********************************************************/
#include "stdio.h"

int main ()
{
	int array[]= {7,9,6,52,35,45,699,88,11,21,32,47,68,24,44};
	for(int i=0;i<sizeof(array)/sizeof(array[0])/2;i++)
	{
		int tmp=array[i];
		array[i]=array[sizeof(array)/sizeof(array[0])-i-1];
		array[sizeof(array)/sizeof(array[0])-i-1]=tmp;
	}
	for(int i=0;i<sizeof(array)/sizeof(array[0]);i++)
	{
		printf("\t%d\n",array[i]);
	}		
	return 0;
}