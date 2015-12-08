#include<stdio.h>

int
get_max_min(int *p_max, int *p_min, int *ptr, int size)
{
	int i;
	
	*p_max = 0;
	*p_min = 0;
	for( i = 0; i < size; i++ ) {
		if( i == 0 ) {
			*p_max = *ptr;
			*p_min = *ptr;
		}
		else {
			if( *(ptr + i) > *p_max) {
				*p_max = *(ptr + i);
			}
			if( *(ptr + i) < *p_min) {
				*p_min = *(ptr + i);
			}
		}
	}
	return 0;
}

main()
{
	int table[8];
	int max, min;
	
	table[0] = 10;
	table[1] = 200;
	table[2] = 1000;
	table[3] = 1;
	table[4] = -200;
	table[5] = 16;
	table[6] = 100;
	table[7] = -9;
	
	get_max_min(&max, &min, table, 8);
	printf("最大値は%d, 最小値は%dです。\n", max, min);
	return 0;
}