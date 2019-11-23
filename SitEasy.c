#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define maxsize 1000
#define max2 20
//#FUNCTION PROTOTYPES
void welcome(void);
void header(void);
void add(void);
void add2(void);
void add3(void);

struct student{
	float sub[max2];//SUBJECT MARKS
	float average;//AVERAGE OF MARKS
	char prob;//PROBLEM
	long id;//ID NUMBER
	int intens;//NOT KNOWN //intensity
}stu[maxsize];


void welcome(void){


		printf("\n\t                          SIT EASY");
    printf("\n\t  DEVELOPED BY VENKATA SAI TANISHQ NALLOJU,K L UNIVERSITY, INDIA");
    printf("\n\n                  CONTACT: TANISHQNRAO@GMAIL.COM ");
    printf("\n\n\n                     WELCOMES YOU..............");
    printf("\n\n\n\tSIT EASY helps to accomodate and arrange students with both special needs and ones with lower grades, the algorithm also caters in providing seating plans and saving them for future purpose. It also has the ability to include more students to the already generated seating plans which eliminates the necessity of recursive work of going through the process again");
    printf(" The app also retireves older version of seating plans incase of a switch back!! The application sorts the student based on the given special needs and average of grades by giving them an sit easy score making it easy to recognize the one with highest needs and placing him near the teacher.");
}

void header(void){
  printf("\n\t                             SIT EASY");
  printf("\n\t                       \"SEATING MADE EASY AND BEST\" ");
}
int choice;
int size,row,colum,ais,max_size,sub_size,max_perm,add_seats;

void add(void){

	printf("\nEnter the maximum permitted size");
	scanf("%d",&max_perm);
	printf("\nEnter the size of the class");
	scanf("%d",&size);
	while(size>max_perm){
		printf("Students greater than permitted size");
		printf("\nEnter the size of the class");
		scanf("%d",&size);
	}
	printf("\nEnter the number of rows");
	scanf("%d",&row);
	printf("\nEnter the number of columns");
	scanf("%d",&colum);
	printf("\nEnter the number of aisles");
	scanf("%d",&ais);
	while(ais>row){
		printf("\nAisles greater than Rows");
		printf("\nEnter the number of aisles");
		scanf("%d",&ais);
	}
	printf("\nEnter the number of subjects");
	scanf("%d",&sub_size);
	printf("\nEnter additional seats to be added or deleted");
	scanf("%d",&add_seats);
	max_size=row*colum;
	if(size<=max_size){
		add2();
	}
	else{
		printf("\nEnter correct details");
		printf("\nStudents greater than class size");
		add();
	}

}

void add2(void){

	printf("\nEnter student details");
	for(int i=0;i<size;i++){

			printf("\nEnter the student %d details",i+1);
			printf("\nEnter the student id");
			scanf("%d",&stu[i].id);
			printf("\nEnter the student marks");
			for(int j=0;j<max2;j++){
			printf("Enter the marks of subject %d",&stu[i].sub[j]);
			}

	}

}
int sub_range,sub_id,sub_fin_range;
//sub[sub_size][sub_id][sub_range];
int sub[sub_size][1];
void add3(void){
	printf("\nEnter subject details");
	for(int i=0;i<sub_size;i++){

			printf("\nSubject %d",i+1);
			printf("\nEnter the subject id");
			scanf("%d",&sub[i][1]);
			printf("\nEnter range");
			scanf("%d",&sub[i][1][1]);
			printf("Enter Average Range%d",&sub_fin_range);

	}
	add2();
}
void generate(void){

}
void calc(void){
}
void save(void){
}
void retrieve(void){
}
void credits(void){
	printf("\n\n\n\t  DEVELOPED BY VENKATA SAI TANISHQ NALLOJU,K L UNIVERSITY, INDIA");
    printf("\n\n                  CONTACT: TANISHQNRAO@GMAIL.COM ");

}
void data_save(void){
}
void menu(void){
  do{
    system("clear");
	  printf("\n\n--------Menu-----------");

					 printf("\n1.Add a class ");
					 printf("\n2.Generate seating arrangement");
					 printf("\n3.Calculate seating arrangement Percentage");
					 printf("\n4.Save present generated seating arrangement");
					 printf("\n5.Retrieve previous versions");
					 printf("\n6.Credits and About");
					 printf("\n7.Enter data to Calculate");
					 printf("\n8.Exit");
	scanf("%d",&choice);
	switch(choice){
		case 1: add();break;
		case 2: generate();break;
		case 3: calc();break;
		case 4: save();break;
		case 5: retrieve();break;
		case 6: credits();break;
		case 7: data_save();break;
		case 8: exit(0);
		default : printf("\n Worng user choice Please enter a correct choice\n");
	}
	}while(choice!=8);
}

int main(){
  welcome();
  menu();
  //footer();
  //getch();
  return 0;
}
