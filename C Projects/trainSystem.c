/*					------------------------					
					 TRAIN REVERSATION SYSTEM
					------------------------
					  PRESS 1 TO CONTINUE
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

void reserveTicket(void);
void viewTrains(void);
void viewReservation(void);
void printTab(int);
void printLine(int);
void printSpace(int);
void viewTrain(void);


int main(){

	// Main Screen
	
	system("cls");
	int input, optionInput;
	printTab(7);
	printLine(24);
	printf("\n");
	
	printTab(7);
	printf(" TRAIN RESERVATION SYSTEM ");
	printSpace(55);
	printf("\n");
	
	printTab(7);
	printLine(24);
	printf("\n");
	
	printTab(6);
	printf("      	PRESS ANY NUMBER TO CONTINUE\n\n");
	printTab(6);
	printf("      	OR PRESS 0 TO EXIT");
	printSpace(55);
	printf("\n--> ");
	
	scanf("%d", &input);	
	if(input){

		// Option Screen 

		system("cls");
		printLine(25);
		printf(" TRAIN RESERVATION SYSTEM \n");
		printLine(25);
		printf("1>> RESERVE A TICKET\n");
		printLine(25);
		printf("2>> VIEW ALL AVAILABLE TRAINS \n");
		printLine(25);
		printf("3>> EXIT \n");
		printLine(25);
		printf("--> ");
		scanf(" %d", &optionInput);
		
		//RESERVE A TICKET
		
		if(optionInput == 1){
			reserveTicket();
		}
		else if(optionInput == 2){
			viewTrain();
		}
		else if(optionInput == 3){
			system("exit");
		}
		else{
		printf("Invalid Input");
		}
	
	
	}


	return 0;
}



void printLine(int a){
	for(int i = 1; i <= a; i++){
		printf("-");
	}
	printf("\n");
}

void printSpace(int a){
	for(int i = 1; i <= a; i++){
		printf(" ");
	}
}

void printTab(int a){
	for(int i = 1; i <= a; i++){
		printf("	");
	}
}
	
void reserveTicket(void){
	int age, date, month, year, n;
	long int trainNo;
	char confirm;
	n = 1;
	
	system("cls");
	viewTrains();
	printf("ENTER AGE --> ");
	scanf("%d", &age);
	printf("ENTER TRAIN NO. --> ");
	scanf("%ld", &trainNo);
	while(n){
		if(trainNo == 10225 || trainNo == 11929 || trainNo == 78794 || trainNo == 19314 || 				trainNo == 12962){
			n--;
		}
		else{
			printf("NO TRAINS FOUND, TRY AGAIN: ");
			scanf("%ld", &trainNo);	
		}
	}
	n = 1;
	printf("ENTER DEPARTURE DATE(DD MM YYYY) -->");
	scanf("%d %d %d", &date, &month, &year);
	while(n){
		if(date <= 31 && month <= 12){
			system("cls");	
			printf("AGE: %d\n", age);
			printf("TRAIN NO.: ");
			
			if(trainNo == 10225){
				printf("10225, MALWA EXPRESS        ARRIVAL TIME: 23:45 Hrs\n");
			}
			else if(trainNo == 78794){
				printf("78794, HZD. NIZAMUDDIN EXP	ARRIVAL TIME: 01:20 Hrs\n");
			}
			else if(trainNo == 11929){
				printf("11929, INTERCITY EXP              ARRIVAL TIME: 01:45 Hrs\n");
			}
			else if(trainNo == 19314){
				printf("19314, IND - PUNE SUPERFAST EXP   ARRIVAL TIME: 04:05 Hrs\n");
			}
			else if(trainNo == 12962){
				printf("12962, AVANTIKA EXP               ARRIVAL TIME: 15:20 Hrs\n");
			}
			
			printf("DATE: %d %d %d\n", date, month, year);
			printf("CONFIRM (y/n): ");	
			scanf(" %c", &confirm);
			
			if(confirm == 'y'){
				printf("\nTICKET RESERVED");
				Sleep(1000);
				n = 0;
				main();
			}
			else{
				reserveTicket();
			}
		}	
		else{
			printf("Invalid Input, Try again: ");
			scanf("%d %d %d", &date, &month, &year);
		}
	}
	system("cls");		
}

void viewTrains(void){
	printf("AVAILABLE TRAINS:\n");
	printf("TRAIN NO: 10225	  NAME: MALWA EXP                  ARRIVAL TIME: 23:45 Hrs   DEPARTURE TIME: 00:00 Hrs\n");
	printf("TRAIN NO: 78794   NAME: HZD. NIZAMUDDIN EXP        ARRIVAL TIME: 01:20 Hrs   DEPARTURE TIME: 01:30 Hrs\n");
	printf("TRAIN NO: 11929	  NAME: INTERCITY EXP              ARRIVAL TIME: 01:45 Hrs   DEPARTURE TIME: 02:00 Hrs\n");
	printf("TRAIN NO: 19314	  NAME: IND - PUNE SUPERFAST EXP   ARRIVAL TIME: 04:05 Hrs   DEPARTURE TIME: 04:06 Hrs\n");
	printf("TRAIN NO: 12962	  NAME: AVANTIKA EXP               ARRIVAL TIME: 15:20 Hrs   DEPARTURE TIME: 15:35 Hrs\n\n");

}

void viewTrain(void){
	int trainInput;
	
	system("cls");
	printf("AVAILABLE TRAINS:\n");
	printf("TRAIN NO: 10225	  NAME: MALWA EXP                  ARRIVAL TIME: 23:45 Hrs   DEPARTURE TIME: 00:00 Hrs\n");
	printf("TRAIN NO: 78794   NAME: HZD. NIZAMUDDIN EXP        ARRIVAL TIME: 01:20 Hrs   DEPARTURE TIME: 01:30 Hrs\n");
	printf("TRAIN NO: 11929	  NAME: INTERCITY EXP              ARRIVAL TIME: 01:45 Hrs   DEPARTURE TIME: 02:00 Hrs\n");
	printf("TRAIN NO: 19314	  NAME: IND - PUNE SUPERFAST EXP   ARRIVAL TIME: 04:05 Hrs   DEPARTURE TIME: 04:06 Hrs\n");
	printf("TRAIN NO: 12962	  NAME: AVANTIKA EXP               ARRIVAL TIME: 15:20 Hrs   DEPARTURE TIME: 15:35 Hrs\n\n");

printf("PRESS ANY NUMBER TO GO BACK TO MAIN MENU\n");

scanf(" %d", &trainInput);
	
	if(trainInput){
		main();
	}
	else{
		main();
	}
}