#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main()
{
	system("Color A5");
	int x;
	for(x=0;x<=40;x++){
		printf("-");
		Sleep(200);
	}
	printf("\n NUMBER GUESSING GAME\n");
	for(x=0;x<=40;x++){
		printf("-");
		Sleep(200);
	}
  int number ,guess,nguess=1;
   srand(time(0));  // this function every time different number generate.
   number= rand()%100+1;  // Generate random number.
   //printf("%d",number);  // this will display random number.
   do{
   	printf("\nGuess the number between 1to 100:\n");
   	scanf("%d",&guess);
   	if(guess>number){
   		printf("Try to guess 'Lower Number' please!\n");
	   }
	else if(guess<number){
		printf("Try to guess 'Higher Number' please!\n");
	}
	else
		printf("You guess it in %d attempts.\n",nguess);
	nguess ++;
   }  while(nguess!=number);
   return 0;   	
}
