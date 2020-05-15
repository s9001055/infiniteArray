/*	Author: Arthur Chang	*/
/*	infiniteArray		*/

#include <stdio.h>
#include <stdlib.h>

int delElement(int *ary, int index)
{
	int i;
	int newIndex = sizeof(ary) / sizeof(int) / 4;
	if (--index < newIndex){
		int *newAry = malloc(sizeof(int) * (newIndex << 1));
		for (i = 0; i < index; i++){
			newAry[i] = ary[i];
		}
		free(ary);
		ary = newAry;
	}
	return index;
}

int addElement(int *ary, int key, int index)
{
	if (++index == (sizeof(ary) / sizeof(int))){
		int newIndex = index << 1;
		int  *newAry = malloc(sizeof(int) * newIndex);
		int i;
		for (i = 0; i < index; i++){
			newAry[i] = ary[i];
		}
		free(ary);
		ary = newAry;
	}
	ary[index] = key;
	return index++;
}

int main()
{	
	int input;
	int aryLen = 2;
	int *ary = malloc(sizeof(int) * aryLen);
	int i = 0;

	
	
	return 0;
}

