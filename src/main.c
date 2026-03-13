#include "../include/NOTE1.h"
#include "../include/task.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n = 9;
	NOTE1_T** BLOCK = (NOTE1_T**)malloc(n*sizeof(NOTE1_T*));
	read(n, BLOCK);

	sort(n, BLOCK);

	solve(n, BLOCK);
}
