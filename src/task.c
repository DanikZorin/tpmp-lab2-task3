#include "../include/task.h"

void read(int n, NOTE1_T** BLOCK){
    for (int i=0;i<n;i++){
		printf("BLOCK[%d]:\n", i);
		NOTE1_T* note = (NOTE1_T*)malloc(sizeof(NOTE1_T));
		printf("input surname and initials:\n");
		scanf("%s %s",note->name.surname, note->name.inits);
 		
		printf("input phone number:\n+");
        scanf("%lld",&note->tele);

		printf("input birth: date, month and year:\n");
    	scanf("%d %d %d",&note->date.day, &note->date.month, &note->date.year);

		BLOCK[i] = note;
	}
}
void sort(int n, NOTE1_T** BLOCK){
    for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (strcmp(BLOCK[i]->name.inits,BLOCK[j]->name.inits)>0){
				NOTE1_T* temp = BLOCK[i];
				BLOCK[i]=BLOCK[j];
				BLOCK[j]=temp;
			}
		}
	}
}
void solve(int n, NOTE1_T** BLOCK){
    
	int month;
	printf("Input a month to search:\n");
	scanf("%d", &month);

	int count = 0;
	for (int i=0;i<n;i++){
		NOTE1_T *note = BLOCK[i];
		if (note->date.month == month){
			count++;
			printf("Name: %s %s \nDate of Birth: %d-%d-%d \nTele: +%lld\n\n", note->name.surname, note->name.inits, note->date.day, note->date.month, note->date.year, note->tele);
		}
	}
	if (count == 0){
		printf("No people found\n");
	}
}