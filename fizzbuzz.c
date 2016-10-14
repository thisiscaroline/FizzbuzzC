#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

	int i, first, last;
	
	if (argc == 1){
		first = 1;
		last = 100;
		printf("Using default range of 1 to 100 for FizzBuzz.\n");		
	} else if (argc == 2){
		printf("You need more than one argument for a custom FizzBuzz range!\n");
		exit(1);
	} else if (argc == 3){
		
		if ((int)argv[1] < (int)argv[2]){ // smaller number is first
			first = atoi(argv[1]);
			last = atoi(argv[2]);
		} else {
			last = atoi(argv[1]);
			first = atoi(argv[2]);
		}
		
	}
	
	printf("\n");
	
	for (i = first; i < last+1; i++){
		
		if (i % 3 == 0 || i % 5 == 0){
			
			if (!(i % 5 == 0)){ // then it's divisible by 3
				printf("%d Fizz!\n", i);
			} else if (!(i % 3 == 0)){ // then it's divisible by 5
				printf("%d Buzz!\n", i);
			} else { // it's divisible by both
				printf("%d FizzBuzz!\n", i);
			}
			
		} else {
			
			printf("%d\n", i);
			
		}
		
	}
	
	return 0;

}