#include<stdio.h>
int main(){
void coco();
void stats();
void nearby();
void handle();
	printf("\n\t\t\t******* WELCOME TO COVID-19 INFO DASHBOARD *******\t\t\t\n");
	int a;
	printf("\n\nPlease select an option what do you want: \n\t1)About Corona Virus \n\t2)Origin and spreading \n\t3)Current State \n\t4)Symptoms of Coronavirus \n\t5)Precautions & Caring \n\t6)Find out doctors near you \n\t7)Quit \n\n\n\tWrite your prefered no. here:- ");
	scanf("%d",&a);
	if (a == 1) {
		printf("Option 1 page need to be created \n");
		coco();
	}
	else if(a == 2){
		printf("Option 2 page need to be created\n");
		coco();
	}
	else if(a==3)
	{
        stats();
	    }
	else if(a==4) {
	    printf("Option 4 page need to be created\n");
	    coco();
	}
	else if(a==5) {
	    printf("Option 5 page need to be created\n");
	    coco();
	}
	else if (a==6)
	{
	  nearby();
	}
else if(a==7) {
	printf("\n\n\t\tGood Bye \n\t\tTake care:)\n\n");
	printf("\n\n\t\t\t\t\tDeveloped by ~Ambuj Singh\n\n");
	exit(0);
}

else {

		printf("\n\nPlease select from given options only\n\n");
		handle();
}

printf("\n\n\t\t\t\t\tDeveloped by ~Ambuj Singh\n\n");
return 0;
}
void coco()
{
char yno;
	printf("\n\tDo you want any further info? \n\t Write 'y' for 'yes' and 'n' for 'no':- ");
	scanf("%s",&yno);
	switch(yno) {
		case 'y' :
			main();
			break;
		case 'n' :
			printf("\n\t\tGood Bye! \n\t\tStay Safe!\n\n");
			break;
		default :
		 printf("\nPlease select right option!\n");
		 coco();
	}
}
void stats()
{
	char r;
	        printf("\n\nDo you want whole world infected people data or only India's ? \n \nWrite 'w' for world data and 'd' for India data : ");
         	scanf("%s",&r);
        	if (r == 'w') {
		    printf("\n\tAs of 23-May-2020 Corrently total no. of infected people world-wide are : 5,278,,365");
        	}
        	else if(r == 'd') {
	    	printf("\n\tAs of 23-May-2020 Currently total no. of infected people in India are : 124,800 ");
			}
        	else {
    		printf("\nPlease enter right keyword :)");
	        }
}
void nearby()
{
    void delhi();
    char b;
		printf("\nCurrently we have onle New Delhi's doctors list :P \n Do you want to proceed? type 'y' if yes or type 'n' if no :");
		scanf(" %s", &b);
		if(b=='y') {
		    delhi();
	}
		else if (b=='n') {
			printf(" \n\n Thank you! \n Stay Safe :) \n");
			main();
		}
		else {
			printf("\n\n\tInvalid input\n");
			nearby();
		}
}
void delhi()
{
	void another();
	char c;
	int v;
			printf("\n\nPlease tell us from which side you belong? \n \t1)North Delhi (write 'n') \n \t2)South Delhi (write 's') \n \t3)East Delhi (write 'e') \n \t4)West Delhi (write 'f') \n \tPlease enter yoour choice : ");
		    scanf("%s",&c);
			if (c == 'n') {
				printf("Please enter your PINCODE to get nearest doctor around you : ");
				scanf("%d",&v);
				if (v == 112233) {
					printf(" \n\n\nDr. XYZ Singh \nPhone NO : 9XXXXXXXX7 \nAddress : XYZ Colony,New Delhi,Delhi, India \nVisit Time : 09:00AM - 06:00PM \n\n");
	                another();
				}
				else if ( v == 223344) {
					printf(" \nDr. XYZ Singh \nPhone NO : 8XXXXXXXX3 \nAddress : XYZ Colony,New Delhi,Delhi, India \nVisit Time : 07:00AM - 06:00PM ");
				    another();
				}
				else{
					printf("Check your PINCODE");
				}
            }
            else {
            	printf("\n\n\tChoose right options!\n");
            	delhi();
			}
	}
void another()
{
	char other;
	printf("\n\n\nWatch by entering another pincode y/n ? : ");
				scanf("%s", &other);
				if (other == 'y')
				{
					delhi();
				}
				else{
					printf("Sorry!");
				}
}
void handle(){
	int kd;
	printf("\nOption\n\t1,2,3,4,5,6,7 :");
	scanf("%d",&kd);
	switch(kd){
		case 1 :
			printf("Option 1 Press enter to exit");
			break;
		case 2 :
			printf("Option 2 Press enter to exit");
			break;
		case 3 :
			printf("Option 3 Press enter to exit");
			break;
		case 4 :
			printf("Option 4 Press enter to exit");
			break;
		case 5 :
			printf("Option 5 Press enter to exit");
			break;
		case 6 :
			nearby();
			break;
		case 7 :
			printf("Option 7 Press enter to exit");
			break;
		default :
			{
			printf("Please select from given options only!");
		}
			break;
	}
	scanf("%d",&kd);
}
