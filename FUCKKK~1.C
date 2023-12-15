#include <stdio.h>
#include <conio.h>

void ArrowB(int ArrowC);
void ArrowA();
void FP();
void Menu();

int getUserInput() {
    char input[10];
    printf("Enter your choice: ");
    fgets(input, sizeof(input), stdin);
    return atoi(input);
}

int main() {
    int OuterChoice = 1, isExit = 0, key;
    int MiddleChoice, InnerChoice, number,result,sq,cu,total_1,num;
    int a, f, b, g, c, h, d, i, e, j;
    float num_1, num_2, num_3, PE, num1, num2;
    float A1, B1, C1, D1, E1;
    float A2, B2, C2, D2, E2;
    float A3, B3, C3, D3, E3;
    float PE1, PE2, PE3, PE4, PE5;
    float num_total, Equiv, PEquiv, PG;
    float Anum_total, AEquiv, APEquiv, APG;
    float Bnum_total, BEquiv, BPEquiv, BPG;
    float Cnum_total, CEquiv, CPEquiv, CPG;
    float Dnum_total, DEquiv, DPEquiv, DPG;
    float Enum_total, EEquiv, EPEquiv, EPG;
    float fish, pork, chicken, rice;
    float fish_price, pork_price, chicken_price, rice_price;
    float total;
    float r, v, a_1, d_1, c_1, pi;
    int vehicle, distance;
    char passenger;
    float fairB, fairPKM, fairT, fairPD;


    FP();
    Menu();

    do {
	clrscr();
	ArrowA();
	Menu();
	ArrowB(OuterChoice);
	key = getch();

	if (key == 0)
	    key = getch();

	if (key == 27)
	    isExit = 1;

	if (key == 80) {
	    if (OuterChoice < 5)
		OuterChoice++;
	    else
		OuterChoice = 1;
	}

	if (key == 72) {
	    if (OuterChoice > 1)
		OuterChoice--;
	    else
		OuterChoice = 5;
	}

	if (key == 13) {
	    switch (OuterChoice) {
	    case 1:
		do {
		    clrscr();
		    printf("1. Activity 1\n");
		    printf("2. Activity 2\n");
		    printf("3. Activity 3\n");
		    printf("4. Activity 4\n");
		    printf("5. Activity 5\n");
		    printf("6. Exit\n");

		    MiddleChoice = getUserInput();

                    if (MiddleChoice == 6) {
                        // Exit the inner loop for Activity 1
                        break;
                    }
                    clrscr();
                    if (MiddleChoice == 1)
                        printf("My Wordfile");
                    else if (MiddleChoice == 2)
                        printf("My Resume");
                    else if (MiddleChoice == 3)
                        printf("Table");
                    else if (MiddleChoice == 4)
                        printf("Grade Calculation using Excel");
                    else if (MiddleChoice == 5)
                        printf("Revenue Project for 6 months");
                    getch();
                    clrscr();
                } while (1); // Continue the inner loop for Activity 1

                break;

            // Midterm
                            case 2:
                    do {
                        clrscr();
                        printf("1. Activity 1\n");
                        printf("2. Activity 2\n");
                        printf("3. Activity 3\n");
                        printf("4. Activity 4\n");
                        printf("5. Activity 5\n");
                        printf("6. Activity 6\n");
                        printf("7. Exit\n");

                        MiddleChoice = getUserInput();

                        if (MiddleChoice == 7) {
                            // Exit the inner loop for Activity 2
                            break;
                        }
                        clrscr();
                        if (MiddleChoice == 1) 
 	      {
                            printf("\n\t\t\t\tStudy Load");
                            printf("\n\n\t\t\tOFFICIALLY ENROLLED");
                            printf("\n\t\t\t1st Semester S.Y. 2023-2024");
                            printf("\n\nName\tBETITO, CAESAR MANUEL Y. (23239635)");
                            printf("\nCollege\tCOLLEGE OF ENGINEERING");
                            printf("\nCourse\tBSIE");
                            printf("\nYear Level\t2");
                            printf("\nSection\tNon-blocked");
                            printf("\n\nEDP Code   Subject\t  Type Units  Days    	        Time   Room\tCourse ");
                            printf("\n  23495\t    BES103\t   L    2     MWF    11:30PM-12:30PM  FAB LAB\tBSIE   ");
                            printf("\n  23502\t    BES103\t   L    0     MWF    12:30PM-1:30PM   CBE-901\tBSIE   ");
                            printf("\n  23530\t    EMATH211\t        3     TTHS   10:30AM-11:30AM  CBE-803\tBSIE   ");
                            printf("\n  23516\t    IE210\t        3     TTHS    7:30AM-8:30AM   CBE-804\tBSIE   ");
                            printf("\n  23516\t    MECH211A\t        3     TTHS    4:30PM-5:30PM   CBE-802\tBSIE   ");
                            printf("\n  23474\t    IE211\t        3     MWF     7:30PM-8:30PM   IE LAB\tBSIE   ");
                            printf("\n  23481\t    IE211\t   L    1     MWF     8:30PM-9:30P    IE LAB\tBSIE   ");
                            printf("\n  23488\t    IE212\t        3     TTHS   10:30AM-11:30AM  CBE-801\tBSIE   ");
                            printf("\n  23523\t    IE213\t        3     TTHS    8:30AM-9:30AM   CBE-805\tBSIE   ");
                            printf("\n  23544\t    PE 103\t        2     THU     1:30PM-3:30PM   FLD\tBSIE   ");
                            printf("\n  23537\t    IE EL 1\t        3     TTHS    1:30PM-4:30PM   REVIEWRM\tBSIE   ");
                            printf("\t\t         Total	25");
                            getch();
                            } 
	          else if (MiddleChoice == 2) 
	          {
                            clrscr();
                            printf("Please Enter first Number :");
                            scanf("%d", &a);

                            clrscr();
                            printf("Please Enter second Number :");
                            scanf("%d", &b);

                            clrscr();
                            printf("Please Enter third Number :");
                            scanf("%d", &c);

                            clrscr();
                            printf("\n\nYou inputted numbers : %d, %d, and %d", a, b, c);
                            printf("\n\nYour Numbers forward: \n\n\t%d,\n\n\t%d,\n\n\t%d", a, b, c);
                            printf("\n\nYour Numbers reverse: \n\n\t%d,\n\n\t%d,\n\n\t%d", a, b, c);
                            getch();
                        }
	          else if (MiddleChoice == 3) 
	          {
                            clrscr();
		printf("Please enter 10 numbers:\n");
		scanf("%d%d%d%d%d%d%d%d%d%d",&a,&f,&b,&g,&c,&h,&d,&i,&e,&j);
		printf("\nYour numbers are: \n\n\t%d,%d\n\n\t%d,%d\n\n\t%d,%d\n\n\t%d,%d\n\n\t%d,%d",a,f,b,g,c,h,d,i,e,j);
		getch();
                           }
	          else if (MiddleChoice == 4) 
	          {
clrscr();
//Quiz 1
printf("Enter the total items of the quiz number 1	:");
scanf("%f",&num_1);
printf("Enter the score of student A in quiz #1		:");
scanf("%f",&A1);
printf("Enter the score of student B in quiz #1		:");
scanf("%f",&B1);
printf("Enter the score of student C in quiz #1		:");
scanf("%f",&C1);
printf("Enter the score of student D in quiz #1		:");
scanf("%f",&D1);
printf("Enter the score of student E in quiz #1		:");
scanf("%f",&E1);
//Quiz 2
printf("\n\nEnter the total items of the quiz number 2	:");
scanf("%f",&num_2);
printf("Enter the score of student A in quiz #2		:");
scanf("%f",&A2);
printf("Enter the score of student B in quiz #2		:");
scanf("%f",&B2);
printf("Enter the score of student C in quiz #2		:");
scanf("%f",&C2);
printf("Enter the score of student D in quiz #2		:");
scanf("%f",&D2);
printf("Enter the score of student E in quiz #2		:");
scanf("%f",&E2);
//Quiz 3
printf("\n\nEnter the total items of the quiz number 3	:");
scanf("%f",&num_3);
printf("Enter the score of student A in quiz #3		:");
scanf("%f",&A3);
printf("Enter the score of student B in quiz #3		:");
scanf("%f",&B3);
printf("Enter the score of student C in quiz #3		:");
scanf("%f",&C3);
printf("Enter the score of student D in quiz #3		:");
scanf("%f",&D3);
printf("Enter the score of student E in quiz #3		:");
scanf("%f",&E3);
printf("\n\nEnter the total items in the Prelim Exam	:");
//Prelim Exam
scanf("%f",&PE);
printf("Enter the score of student A in Prelim Exam	:");
scanf("%f",&PE1);
printf("Enter the score of student B in Prelim Exam	:");
scanf("%f",&PE2);
printf("Enter the score of student C in Prelim Exam	:");
scanf("%f",&PE3);
printf("Enter the score of student D in Prelim Exam	:");
scanf("%f",&PE4);
printf("Enter the score of student E in Prelim Exam	:");
scanf("%f",&PE5);
//Formula
num_total=num_1+num_2+num_3;
Equiv=6-5*num_total/110;
PEquiv=6-5*PE/100;
PG=0.3333333333*PEquiv+0.6666666667*Equiv;
//Formula Student A
Anum_total=A1+A2+A3;
AEquiv=6-5*Anum_total/110;
APEquiv=6-5*PE1/100;
APG=0.3333333333*APEquiv+0.6666666667*AEquiv;
//Formula Student B
Bnum_total=B1+B2+B3;
BEquiv=6-5*Bnum_total/110;
BPEquiv=6-5*PE2/100;
BPG=0.3333333333*BPEquiv+0.6666666667*BEquiv;
//Formula Student C
Cnum_total=C1+C2+C3;
CEquiv=6-5*Cnum_total/110;
CPEquiv=6-5*PE3/100;
CPG=0.3333333333*CPEquiv+0.6666666667*CEquiv;
//Formula Student A
Dnum_total=D1+D2+D3;
DEquiv=6-5*Dnum_total/110;
DPEquiv=6-5*PE4/100;
DPG=0.3333333333*DPEquiv+0.6666666667*DEquiv;
//Formula Student B
Enum_total=E1+E2+E3;
EEquiv=6-5*Enum_total/110;
EPEquiv=6-5*PE5/100;
EPG=0.3333333333*EPEquiv+0.6666666667*EEquiv;
//Table
printf("\n		     PRELIM GRADE CALCULATION");
printf("\n-------------------------------------------------------------------");
printf("\nStudent Name Quiz#1 Quiz#2 Quiz#3 Total Class  Prelim Equiv. PRELIM");
printf("\n				  	Equiv. Exam	     GRADE");
printf("\n	     %.f      %.f    %.f	  %.f 	 %.1f   %.f    %.1f    %.1f	",num_1,num_2,num_3,num_total,Equiv,PE,PEquiv,PG);
printf("\nStudent A    %.f      %.f    %.f	  %.f 	 %.1f   %.f     %.1f    %.1f	",A1,A2,A3,Anum_total,AEquiv,PE1,APEquiv,APG);
printf("\nStudent B    %.f      %.f    %.f	  %.f 	 %.1f   %.f     %.1f    %.1f	",B1,B2,B3,Bnum_total,BEquiv,PE2,BPEquiv,BPG);
printf("\nStudent C    %.f      %.f    %.f	  %.f 	 %.1f   %.f     %.1f    %.1f	",C1,C2,C3,Cnum_total,CEquiv,PE3,CPEquiv,CPG);
printf("\nStudent D    %.f      %.f    %.f	  %.f 	 %.1f   %.f     %.1f    %.1f	",D1,D2,D3,Dnum_total,DEquiv,PE4,DPEquiv,DPG);
printf("\nStudent E    %.f      %.f    %.f	  %.f 	 %.1f   %.f     %.1f    %.1f	",E1,E2,E3,Enum_total,EEquiv,PE5,EPEquiv,EPG);
getch();
			   }
		  else if (MiddleChoice == 5)
		  {
clrscr();
printf("How many kilos of fish? ");
scanf("%f",&fish);
printf("Price of Fish/kilo: ");
scanf("%f",&fish_price);
printf("How many kilos of ground pork? ");
scanf("%f",&pork);
printf("Price of ground pork/kilo? ");
scanf("%f",&pork_price);
printf("How many kilos of chicken breast? ");
scanf("%f",&chicken);
printf("Price of Chicken breast/kilo: ");
scanf("%f",&chicken_price);
printf("How many kilos of rice? ");
scanf("%f",&rice);
printf("Price of rice/kilo: ");
scanf("%f",&rice_price);
total=fish*fish_price+pork*pork_price+chicken*chicken_price
+rice*rice_price;
printf("\n\nTotal amount due:%.1f\n",total);
getch();
			   }
else if (MiddleChoice == 6)
		  {
clrscr();
printf("Input the radius of a sphere: ");
scanf("%f",&r);
//Formula
pi=3.14159265359;
v = (4.0 / 3.0)*pi*r*r*r;
a_1=4*pi*r*r;
c_1=2*pi*r;
d_1=2*r;
//Commands
printf("\nThe volume of the sphere having the radius of %.f: %f",r,v);
printf("\nThe area of the sphere having the radius of %.f: %f",r,a_1);
printf("\nThe circumference of the sphere having the radius of %.f: %f",r,c_1);
printf("\nThe diameter of the sphere having the radius of %.f: %.f",r,d_1);
getch();
			   }

		    } while (1);  // Continue the inner loop for Activity 2
		    break;

            // SemiFinal
            case 3:
                do {
                    clrscr();
                    printf("1. Activity 7\n");
                    printf("2. Activity 8\n");
                    printf("3. Activity 9\n");
                    printf("4. Practical Exam\n");
                    printf("5. Exit\n");

		    MiddleChoice = getUserInput();

		    if (MiddleChoice == 5) {
			// Exit the inner loop for Activity 3
			break;
		    }
		    clrscr();
		    if (MiddleChoice == 1) {

clrscr();
printf("Enter your grade between 1.0 to 5.0:");
scanf("%f",&a_1);

if ((a_1<=0.9)||(a_1>=5.1))
printf("Grade is Invalid",a_1);

else if ((a_1>=1.0)&&(a_1<=1.5))
printf("Excellent",a_1);
else if ((a_1>=1.6)&&(a_1<=2.0))
printf("Very Good",a_1);
else if ((a_1>=2.1)&&(a_1<=3.0))
printf("Fair",a_1);
else if ((a_1>=3.1)&&(a_1<=5.0))
printf("Failed",a_1);
getch();
		    }
if (MiddleChoice == 2)
{
clrscr();
printf("THE FOUR BASIC OPERATIONS\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("enter the operation you want (1, 2, 3, or 4 only) 	:");
scanf("%d", &number);

if(number == 1)
{
printf("\nYou choose Addition Operations");
printf("\nEnter the first number: ");
scanf("%f", &num1);
printf("Enter the second number: ");
scanf("%f", &num2);
result = num1+num2;
printf("The sum of %.1f and %.1f is %d", num1,num2, result);
}
if(number == 2)
{
printf("\nYou choose Subtraction Operations");
printf("\nEnter the first number: ");
scanf("%f", &num1);
printf("Enter the second number: ");
scanf("%f", &num2);
result = num1-num2;
printf("\nThe difference of %.1f and %.1f is %d", num1,num2, result);
}
if(number == 3)
{
printf("\nYou choose Multiplication Operations");
printf("\nEnter the first number: ");
scanf("%f", &num1);
printf("Enter the second number: ");
scanf("%f", &num2);
result = num1*num2;
printf("\nThe product of %.1f and %.1f is %d", num1,num2, result);
}
if(number == 4)
{
printf("\nYou choose Division Operations");
printf("\nEnter the first number: ");
scanf("%f", &num1);
printf("Enter the second number: ");
scanf("%f", &num2);
result = num1/num2;
printf("\nThe qoutient of %.1f and %.1f is %d", num1,num2, result);
}
if ((number >= 5)||(number ==0))
printf("\nInvalid Output");
getch();
		    }

		}


if (MiddleChoice == 3)
		  {
clrscr();
    printf("Type of vehicle\n");
    printf("1. Traditional Jeepney\n");
    printf("2. Modern Jeepney\n");
    printf("3. Bus\n");
    printf("Enter your choice: ");
    scanf("%d", &vehicle);

    switch (vehicle) {
	case 1:
	    printf("You chose Traditional Jeepney\n");
	    break;
	case 2:
	    printf("You chose Modern Jeepney\n");
	    break;
	case 3:
	    printf("You chose Bus\n");
	    break;
	default:
	    printf("Invalid Choice\n");
	    return 1;
    }

    printf("\n\nClassification of Passenger\n");
    printf("S. Student/Senior Citizen/PWD Passenger\n");
    printf("R. Regular Passenger\n");
    printf("Enter your choice: ");
    scanf(" %c", &passenger);

    switch (passenger) {
	case 'S':
	case 's':
	    printf("You are a Student/Senior Citizen/PWD Passenger\n");
	    break;
	case 'R':
	case 'r':
	    printf("You are a Regular Passenger\n");
	    break;
	default:
	    printf("Invalid Choice\n");
	    return 1;
    }

    printf("\nDistance Traveled in kilometers: ");
    scanf("%d", &distance);

    switch (vehicle) {
	case 1: // Traditional Jeepney
	    fairB = 13.00;
	    fairPKM = 1.00;

	    printf("\nFARE CALCULATION\n");
	    printf("_____________________________________________________________________________\n");
	    printf("Type of\t\tClassification\t\t\tBase Fare for\tPesos for the\tDistance \n");
	    printf("Vehicle\t\tof the Passenger\t\tthe 1st 4km\t\tSucceeding\t\tTravelled   \n");
	    printf("                     \t\t\t\tin Pesos   \t\tkilometers\n");
	    printf("_____________________________________________________________________________\n");
	    printf("Trad.Jeep   %c-%sPassenger \t\tPhp %.2f\t\tPhp %.2f\t%d km\n",
		   passenger, (passenger == 'S' || passenger == 's') ? "Special" : "Regular", fairB, fairPKM, distance);

	    if (distance > 5 || distance == 5) {
		fairPD = fairPKM * (distance - 4);
		fairT = fairB + fairPD;

		printf("Computation\n");
		printf("1st Four kilometers\t\t\t\t\t\t\t\t   =Php %.2f\n", fairB);
		printf("Computation Succeeding kilometers (6km at Php 1/km)=Php %.2f\n", fairPD);
		printf("_____________________________________________________________________________\n");
		printf("Fair Total= Php %.2f\n", fairT);
	    } else if (distance < 5) {
		fairPD = fairPKM * (0);
		fairT = fairB + fairPD;

		printf("Computation\n");
		printf("1st Four kilometers\t\t\t\t\t\t\t\t   =Php %.2f\n", fairB);
		printf("Computation Succeeding kilometers (6km at Php 1/km)=Php %.2f\n", fairPD);
		printf("_____________________________________________________________________________\n");
		printf("Fair Total= Php %.2f\n", fairT);
	    }
	    break;

	    case 2: // Modern Jeepney
	    fairB = 15.00;
	    fairPKM = 2.00;

	    printf("\nFARE CALCULATION\n");
	    printf("_____________________________________________________________________________\n");
	    printf("Type of\t\tClassification\t\t\tBase Fare for\tPesos for the\tDistance \n");
	    printf("Vehicle\t\tof the Passenger\t\tthe 1st 4km\t\tSucceeding\t\tTravelled   \n");
	    printf("                     \t\t\t\tin Pesos   \t\tkilometers\n");
	    printf("_____________________________________________________________________________\n");
	    printf("Trad.Jeep   %c-%sPassenger \t\tPhp %.2f\t\tPhp %.2f\t%d km\n",
		   passenger, (passenger == 'S' || passenger == 's') ? "Special" : "Regular", fairB, fairPKM, distance);

	    if (distance > 5 || distance ==5) {
		fairPD = fairPKM * (distance - 4);
		fairT = fairB + fairPD;

		printf("Computation\n");
		printf("1st Four kilometers\t\t\t\t\t\t\t\t   =Php %.2f\n", fairB);
		printf("Computation Succeeding kilometers (6km at Php 1/km)=Php %.2f\n", fairPD);
		printf("_____________________________________________________________________________\n");
		printf("Fair Total= Php %.2f\n", fairT);
	    } else if (distance < 5) {
		fairPD = fairPKM * (0);
		fairT = fairB + fairPD;

		printf("Computation\n");
		printf("1st Four kilometers\t\t\t\t\t\t\t\t   =Php %.2f\n", fairB);
		printf("Computation Succeeding kilometers (6km at Php 2/km)=Php %.2f\n", fairPD);
		printf("_____________________________________________________________________________\n");
		printf("Fair Total= Php %.2f\n", fairT);
	    }
	    break;

	    case 3: // Bus
	    fairB = 18.00;
	    fairPKM = 3.00;

	    printf("\nFARE CALCULATION\n");
	    printf("_____________________________________________________________________________\n");
	    printf("Type of\t\tClassification\t\t\tBase Fare for\tPesos for the\tDistance \n");
	    printf("Vehicle\t\tof the Passenger\t\tthe 1st 4km\t\tSucceeding\t\tTravelled   \n");
	    printf("                     \t\t\t\tin Pesos   \t\tkilometers\n");
	    printf("_____________________________________________________________________________\n");
	    printf("Trad.Jeep   %c-%sPassenger \t\tPhp %.2f\t\tPhp %.2f\t%d km\n",
		   passenger, (passenger == 'S' || passenger == 's') ? "Special" : "Regular", fairB, fairPKM, distance);

	    if (distance > 5 || distance ==5) {
		fairPD = fairPKM * (distance - 4);
		fairT = fairB + fairPD;

		printf("Computation\n");
		printf("1st Four kilometers\t\t\t\t\t\t\t\t   =Php %.2f\n", fairB);
		printf("Computation Succeeding kilometers (6km at Php 1/km)=Php %.2f\n", fairPD);
		printf("_____________________________________________________________________________\n");
		printf("Fair Total= Php %.2f\n", fairT);
	    } else if (distance < 5) {
		fairPD = fairPKM * (0);
		fairT = fairB + fairPD;

		printf("Computation\n");
		printf("1st Four kilometers\t\t\t\t\t\t\t\t   =Php %.2f\n", fairB);
		printf("Computation Succeeding kilometers (6km at Php 2/km)=Php %.2f\n", fairPD);
		printf("_____________________________________________________________________________\n");
		printf("Fair Total= Php %.2f\n", fairT);
	    }
	    break;

	default:
	    printf("Invalid Vehicle Type\n");
    getch();
		} while (1); // Continue the inner loop for Activity 3

}

	    case 4:
		// Finals
		break;

	    case 5:
		isExit = 1;
		break;
	    }
	}

    } while (isExit == 0); // Continue the outer loop

  if (MiddleChoice == 4) {

clrscr();
clrscr();
printf("Enter a number:");
scanf("%d",&num);
printf("Number      Square      Cube      Sum of the square and cube");
for (i=1;i<=num;i++)
{
sq=i*i;
cu=i*i*i;
total_1=sq+cu;
printf("\n%d 	    %d   	%d	  %d		 ",i,sq,cu,total_1);
}
getch();
		    }
    getch();
    return 0;
}

void ArrowA() {
    textcolor(YELLOW);
    textbackground(BLUE);
}

void ArrowB(int ArrowC) {
    textcolor(WHITE);
    textbackground(BLUE);

    switch (ArrowC) {
    case 1:
        gotoxy(27, 9);
        cprintf("Prelim");
        break;
    case 2:
        gotoxy(27, 11);
        cprintf("Midterm");
        break;
    case 3:
        gotoxy(27, 13);
        cprintf("Semi Final");
        break;
    case 4:
	gotoxy(27, 15);
        cprintf("Finals");
        break;
    case 5:
        gotoxy(27, 17);
        cprintf("Exit");
        break;
    }
}

void FP() {
    clrscr();
    textcolor(WHITE);
    textbackground(BLUE);
    gotoxy(14, 4);
    cprintf("FINAL PROJECT IN COMPUTER FUNDAMENTALS AND PROGRAMMING");
    gotoxy(29, 8);
    cprintf("Activity Compilation");
    gotoxy(25, 12);
    cprintf("by; Caesar Manuel Y. Betito");
    gotoxy(16, 16);
    cprintf("Bachelor of Science in Industrial Engineering");
    gotoxy(25, 20);
    cprintf("1st Semester, S.Y. 2023-2024");
    getch();
    clrscr();
    gotoxy(37, 13);
    delay(500);
    cprintf("L");
    delay(500);
    cprintf("O");
    delay(500);
    cprintf("A");
    delay(500);
    cprintf("D");
    delay(500);
    cprintf("I");
    delay(500);
    cprintf("N");
    delay(500);
    cprintf("G");
    delay(500);
    clrscr();
    gotoxy(36, 13);
    cprintf("Press Enter");
    getch();
}

void Menu() {
    clrscr();
    textcolor(WHITE);
    textbackground(BLUE);
    gotoxy(38, 5);
    cprintf("MENU");
    gotoxy(27, 9);
    cprintf("Prelim");
    gotoxy(27, 11);
    cprintf("Midterm");
    gotoxy(27, 13);
    cprintf("Semi Final ");
    gotoxy(27, 15);
    cprintf("Finals");
    gotoxy(27, 17);
    cprintf("Exit");
}
