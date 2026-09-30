#include <stdio.h> 

int main(){
	
	//traverse...read through each item
	int i;
	
	//one dimension array
	int marks[3]={10,20,30};
	
	printf("This is Traversal. \n");
	
	for(i=0;i<3;i++){
		
		printf("%d \n", marks[i]);
		
	}
	
	//insertion
		printf("This is Insertion. \n");
	
	int k;
	
	int score[4]= {20,30,40};
	
	for(k=2;k<3;k++){
		
		//moving 40 to next index so that index 2 is replaced
		score[k + 1] = score[k];
		
	}
	   //assigning index 2 to 35
	   score[2]=35;
	   
	    // Display
    for (k = 0; k < 4; k++) {
        printf("%d \n", score[k]);
    }               
	
		//delete
		printf("This is Deleting. \n");
		
		int d;
		
		int size = 3;

    int goal[3] = {20, 30, 40};

    // Delete valu at index 1
    for (d = 1; d < size - 1; d++) {
        goal[d] = score[d + 1];
    }

    size--;

    // Display
    for (d = 0; d < size; d++) {
        printf("%d \n", score[d]);
    }
	
	
		//update array 30 t0 50
		printf("This is updating. \n");	
		
		int u;
		
		 int bse[3] = {20, 30, 40};

    // Update index 1
    bse[1] = 50;

    // Display
    for (u= 0; u < 3; u++) {
        printf("%d \n", bse[u]);
    }
	
}
