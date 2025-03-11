#include<stdio.h>
#include<unistd.h>


typedef enum { RED, GREEN, AMBER } states; 

void state_action(states s){
	switch(s){
	case 0:
		printf("STOP!\n");
		break;
	case 1:
		printf("GO!\n");
		break;
	case 2:
		printf("ALERT!\n");
		break;
	default:
		printf("SIGNAL MALFUNCTION\n");
		break;
	}
}

void change_state(states* s){
	switch(*s){
	case 0:
		*s = GREEN;
		break;
	case 1:
		*s =  AMBER ;
		break;
	case 2:
		*s =  RED ;
		break;
	default:
		printf("SIGNAL MALFUNCTION\n");
		break;
	}
}

int main(){
	states s;
	s = RED;
	while (1){
		state_action(s);
		sleep(2);
		change_state(&s);
	}
	return 0;
}
	
		
	
	
		
