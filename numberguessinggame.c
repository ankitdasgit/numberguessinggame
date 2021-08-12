#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int number,guess,nguesses;
	srand(time(0));
	
	number = rand()%100+1; //genrates a random number between 1 to 100
	
	//printf("\nthe number is %d",number);

	//keep running the loop until the number is guessed
	do {
		printf("\nguess the number between 1 to 100\n");
		scanf("%d",&guess);
		if(guess>number){
			printf("lower number please\n");
		//printf("wrong number\N");
		}
		else if(guess<number){
			printf("higher number please\n");
			//printf("WRONG NUMBER\N");
		}
		else{
			printf("\nyou guessed in %d",number);
		}
		nguesses++;
	}
	while(guess!=number);
	
	return 0;
}
