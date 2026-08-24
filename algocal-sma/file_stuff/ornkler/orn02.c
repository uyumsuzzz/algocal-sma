#include <stdio.h>
#include <stdlib.h>

struct num{
	int num1,num2,num3;
};

int main(){
	int n;
	FILE *ptr;
	
	struct num nums;
	
	if ((ptr = fopen("E:\\programlama.bin", "w"))==NULL){
		printf("Error");
		exit(1);
	}
	
	fseek(ptr,-sizeof(struct num), SEEK_END);
	
	for(n=1; n<5; n++){
		fread(&nums, sizeof(struct num),1, ptr);
		printf("num1: %d \t num2: %d \t num3: %d \n", nums.num1,nums.num2, nums.num3 );		
		fseek(ptr, -2*sizeof(struct num),SEEK_CUR);
	}

	fclose(ptr);
}
