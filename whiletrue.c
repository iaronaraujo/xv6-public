#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	uint flag = 0;
	uint i = 0;
	uint pid = fork();
	if (pid == 0){
		flag = 1;
		pid = fork();
		if(pid == 0) {
			flag = 2;
			pid = fork();
			if(pid == 0) {
				flag = 3;
			}	
		}			
	}	 	
	while(i < 100){
		printf(1, "Number: %d\n", flag);
		i = i + 1;
	}	
	exit();
}
