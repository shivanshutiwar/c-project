#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<time.h>
#include<process.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>//snack game
#include<dos.h>
#include<stdlib.h>
#include<fstream>


using namespace std;



//tic toc game declaration
int board[10] = {2,2,2,2,2,2,2,2,2,2};
int turn = 1,flag = 0;
int player,comp;

void menu();
void go(int n);
void start_game();
void check_draw();
void draw_board();
void player_first();
void put_X_O(char ch,int pos);
COORD coord= {0,0}; //


// tic toc end




// doubly link list declaration

void insert_bb();
void insert_ll();
void delet_ll();
void delet_bb();
void displayy();
void specify_dd();
void specify_ii();
void reversee();
int countt=0;
struct nodee
{
	int dataa;
	struct nodee *nextt;
	struct nodee *prevv;
};
struct nodee *headdd;
// fun declaration end doubly lick list









// fun declaration single link list
void insert_b();
void delet_b();
void display();
void insert_l();
void delet_l();
void specify_d();
void specify_i();
void reverse();
struct node
{
	int data;
	struct node *next;
};
struct node *headd;
int count=0;
// single link list end



















// snack game declaration start
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int length;
int bend_no;
int len;
char key;
void record();
void load();
int life;
void Delay(long double);
void Move();
void Food();
int Score();
void Print();
void gotoxy(int x, int y);
void GotoXY(int x,int y);
void Bend();
void Boarder();
void Down();
void Left();
void Up();
void Right();
void ExitGame();
int Scoreonly();

struct coordinate
{
    int x;
    int y;
    int direction;
};

typedef struct coordinate coordinate;

coordinate head, bend[500],food,body[30];










// snack game declartion end















// virtual fun
class AAA
{
   int a;
   public:
       AAA()
       {
          a = 1;
       }
       virtual void show()
       {
          cout <<a;
       }
};

class BBB: public AAA
{
   int b;
   public:
       BBB()
       {
          b = 2;
       }
       virtual void show()
       {
          cout <<b;
       }
};

// virtual fun









//function overloading
class fn {
public:
    void area(int); //circle
    void area(int, int); //rectangle
    void area(float, int, int); //triangle
};

void fn::area(int a) {


    cout << "Area of Circle:" << 3.173* a*a;
}

void fn::area(int a, int b) {
    cout << "Area of rectangle:" << a*b;
}

void fn::area(float t, int a, int b) {
    cout << "Area of triangle:" << t * a*b;
}
// function overloading end











// abstraction in c+
class Sum
{
private: int x, y, z; // private variables
public:
void add()
{
cout<<"Enter two numbers: ";
cin>>x>>y;
z= x+y;
cout<<"Sum of two number is: "<<z<<endl;
}
};
// abstraction c++ end







int a,b,c,d,e;
class AA
{
protected:
public:
 void getab()
 {
 cout<<"\nEnter a and b value:";
 cin>>a>>b;
 }
};

class BB:public AA    {
protected:
public:
void getc()
 {
 cout<<"Enter c value:";
 cin>>c;
 }
};

class CC
{
protected:
public:
 void getd()
 {
 cout<<"Enter d value:";
 cin>>d;
 }
};

class DD:public BB,public CC
{
protected:
public:
 void result()
 {
 getab();    getc();
 getd();    e=a+b+c+d;
 cout<<"\n Addition is :"<<e;
 }
};


 // yaha parhybrid inheritancce program end










class base {
public:
    void display1()
    {
        cout << "\nBase class content.";
    }
};
class derived : public base {
public:
    void display2()
    {
        cout << "1st derived class content.";
    }
};

class derived2 : public derived {
    void display3()
    {
        cout << "\n2nd Derived class content.";
    }
};

// yaha par multilevel  inheritance end















class member {
    char gender[10];
    int age;

public:
    void get()
    {
        cout << "Age: "; cin >> age;
        cout << "Gender: "; cin >> gender;
    }
    void disp()
    {
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
class stud : public member {
    char level[20];

public:
    void getdata()
    {
        member::get();
        cout << "Class: "; cin >> level;
    }
    void disp2()
    {
        member::disp();
        cout << "Level: " << level << endl;
    }
};
class staff : public member {
    float salary;

public:
    void getdata()
    {
        member::get();
        cout << "Salary: Rs."; cin >> salary;
    }
    void disp3()
    {
        member::disp();
        cout << "Salary: Rs." << salary << endl;
    }
};




// yaha par herarichal inheritance end














//multipal inheritance

class A
{
 	public:
 	int x;
 	void getx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
};
class B
{
 	public:
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
};
class C : public A, public B   //C is derived from class A and class B
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x + y;
 	    getche();
 	}
};

// yaha par multipal inheritance end












//single inheritance ki class s jo inheritate hongi
class emp {
public:
    int eno;
    char name[20], des[20];

    void get() {
        cout << "Enter the employee number:";
        cin>>eno;
        cout << "Enter the employee name:";
        cin>>name;
        cout << "Enter the designation:";
        cin>>des;
    }
};

class salary : public emp {
    float bp, hra, da, pf, np;
public:

    void get1() {
        cout << "Enter the basic pay:";
        cin>>bp;
        cout << "Enter the Humen Resource Allowance:";
        cin>>hra;
        cout << "Enter the Dearness Allowance :";
        cin>>da;
        cout << "Enter the Profitablity Fund:";
        cin>>pf;
    }

    void calculate() {
        np = bp + hra + da - pf;
    }

    void display() {
        cout << eno << "\t" << name << "\t" << des << "\t" << bp << "\t" << hra << "\t" << da << "\t" << pf << "\t" << np << "\n";
    }
};

// single inheritance ki class end














class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};
//class end














class rectangle
{
   private:
   int l,b;
   public:
   rectangle(int x=2,int y=4)
   {
      l=x;
      b=y;
      cout<<"i am parametrized";
   }
   /* rectangle()
   {
      cout<<"i am default";
   }*/   void area()
   {
      cout<<"\narea is = "<<l*b;
   }
};







//class end polymorphis clsass











class student
{
    private:
        char name[30];
        int age;
    public:
        void getData(void)
        {
            cout<<"Enter name:";
            cin>>name;
          cout<<"Enter age:";
          cin>>age;
        }

        void showData(void)
        {
        cout<<"Name:"<<name<<",Age:"<<age<<endl;
        }
};


// student polymorphism class end


class firstsem{

	public:
	void hello(){
		printf("welcome in programming world\n");
	}

	void add(){
		int a,b,c;
		cout<<"enter a two no you want to add";
		cin>>a>>b;
		c=a+b;
		cout<<c;
	}

	void inte(){
		int a;
printf("Enter an integer\n");
scanf("%d", &a);
printf("The integer is: %d\n", a);
	}

	void simint()
	{

		float principle, time, rate, SI;

    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);


    SI = (principle * time * rate) / 100;

    printf("Simple Interest is = %f", SI);

	}

	void areatri(){

		double a, b, c, s, area;

   printf("Enter the sides of triangle\n");

   scanf("%lf%lf%lf", &a, &b, &c);

   s = (a+b+c)/2;

   area = sqrt(s*(s-a)*(s-b)*(s-c));

   printf("Area of the triangle = %.2lf\n", area);
	}

	void odd(){
		int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
        if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
	}

	void calc(){
		int Op;
	int num1, num2, result = 0;

	printf("\n Please Enter an Operator (+, -, *, /)  :  ");
  	scanf("%d", &Op);

	printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
  	scanf("%d%d", &num1, &num2);

  	switch(Op)
  	{
  		case 1:
  			result = num1 + num2;
  printf("%d",result);
  			break;
  		case 2:
  			result = num1 - num2;
  printf("%d",result);
  			break;
  		case 3:
  			result = num1 * num2;
  			printf("%d",result);
			  break;
  		case 4:
  			result = num1 / num2;
  			printf("%d",result);
  			break;
		default:
			printf("\n You have enetered an Invalid Operator\n\n\n ");
	}

	//printf("\n The result of %.2f %c %.2f  = %.2f", num1, Op, num2, result);
	}

	void series()
	{

		int n, sum = 0, c, value;

  printf("How many numbers you want to add?\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 1; c <= n; c++)
  {
    scanf("%d", &value);
    sum = sum + value;
  }

  printf("Sum of the integers = %d\n", sum);

	}

	void greth(){
		double n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number.", n1);
    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number.", n2);
    if( n3>=n1 && n3>=n2 )
        printf("%.2f is the largest number.", n3);


	}
	void swap(){
		int x, y, t;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);

  t = x;
  x = y;
  y = t;

  printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
	}


	void ife(){
		 int a,b,c;
printf("Enter the first number for a..:\n");
scanf("%d",&a);
printf("Enter the second number for b..:\n");
scanf("%d",&b);
printf("Enter the third number for c..:\n");
scanf("%d",&c);
if(a>b){
    if(a>c){
      printf("%d is a large number\n",a);
}
else{
    printf("%d is less than number %d and  %d\n",a,c);
}
}
else{
    printf("%d is a less than number %d\n",a,b);
}


	}
};


//class end firstr sem all program ki





class second_sem{
	public:
		void higharray(){
		    //printf("heyyyyyyyyyyy");
			 int my_arr[] = {34,56,78,15,43,71,89,34,70,91};
    int i, max, min;

    max = min = my_arr[0];

    for(i = 0; i < 9; i++)
    {
        // if value of current element is greater than previous value
        // then assign new value to max
        if(my_arr[i] > max)
        {
            max = my_arr[i];
        }

        // if the value of current element is less than previous element
        // then assign new value to min
        if(my_arr[i] < min)
        {
            min = my_arr[i];
        }
     }

    printf("Lowest value = %d\n", min);
    printf("Highest value = %d", max);

		}


	void delarr(){
		int arr[100],n,i,j;
	int num,countDel;


	printf("Enter total number of elements: ");
	scanf("%d",&n);

	//read array elements
	printf("Enter array elements:\n");
	for(i=0;i< n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\nEnter number (element) to delete: ");
	scanf("%d",&num);

	//delete elements
	countDel=0;
	for(i=0;i< n;i++)
	{
		if(arr[i]==num)
		{
			countDel++;
			//shift all other elements up
			for(j=i;j< n;j++){
				arr[j]=arr[j+1];
			}
		}
	}
	if(countDel)
		printf("%d found %d times and deleted successfully.",num,countDel);
	else
		printf("%d not found.",num);

	printf("\nArray elements after deleting %d.\n",num);
	for(i=0;i<(n-countDel);i++)
	{
		printf("%d\n\n\n\n",arr[i]);
	}

	}

	void counter(){
		char s[] = "TajMahal";     // String Given
   char ch = 'a';             // Character to count

   int i = 0;
   int count = 0;             // Counter

   while(s[i] != '\0') {
      if(s[i] == ch)
         count++;

      i++;
   }

   if(count > 0) {
      if(count == 1)
         printf("%c appears %d time in '%s'\n\n\n\n\n", ch, count, s);
      else
         printf("%c appears %d times in '%s'\n\n\n\n\n", ch, count, s);
   } else
      printf("%c did not appear in %s\n\n\n\n", ch, s);
	}

	void palindrom(){
		char string1[20];
    int i, length;
    int flag = 0;
gotoxy(30,10);
    printf("Enter a string:");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}

    if (flag) {
            gotoxy(30,11);
        printf("%s is not a palindrome", string1);
    }
    else {
        gotoxy(30,11);
        printf("%s is a palindrome", string1);
    }
	}


void pmat(){


 /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }

   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         }
      }printf("\n");
   getch();
   getche();

   }




void mult(){

int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
gotoxy(30,10);
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  gotoxy(30,11);
  printf("Enter elements of first matrix\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
gotoxy(30,12);
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);

  if (n != p){
        gotoxy(30,13);
    printf("The matrices can't be multiplied with each other.\n");
  }
  else
  {gotoxy(30,13);
    printf("Enter elements of second matrix\n");

    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }
gotoxy(30,14);
    printf("Product of the matrices:\n");

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }
  }
  getche();


}

void multi(){

int i, j, k, x=1;
int arr[3][3][3];


printf(":::3D Array Elements:::\n\n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
		arr[i][j][k] = x;
		printf("%d\t",arr[i][j][k]);
		x++;
		}
		printf("\n");
	}
	printf("\n");
}
getch();


}

void reservestring(){

char Str[100], RevStr[100];
  	int i, j, len;

  	printf("\n Please Enter any String :  ");
  	cin>>Str;

  	j = 0;
  	len = strlen(Str);

  	for (i = len - 1; i >= 0; i--)
  	{
  		RevStr[j++] = Str[i];
  	}
  	RevStr[i] = '\0';

  	printf("\n String after Reversing = %s\n\n", RevStr);




}

void dupli()
{

    char str[100];
  	int i, j, k;

  	printf("\n Please Enter any String :  ");
  	cin>>str;

  	for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}

	printf("\n The Final String after Removing All Duplicates = %s\n\n\n\n  ", str);
}

void cancatinate(){
 char s1[100], s2[100], i, j;
 gotoxy(30,10);
    printf("Enter first string: ");
    scanf("%s", s1);
    gotoxy(30,11);
    printf("Enter second string: ");
    scanf("%s", s2);
    // calculate the length of string s1
    // and store it in i
    for(i = 0; s1[i] != '\0'; ++i);
    for(j = 0; s2[j] != '\0'; ++j, ++i)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    gotoxy(30,12);
    printf("After concatenation: %s", s1);

}


void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
// special pointer in pointer switch

void sp(){


    int var =10;
    int *p;
    p= &var;

    printf ( "Address of var is: %p", &var);
    printf ( "\nAddress of var is: %p", p);

    printf ( "\nValue of var is: %d", var);
    printf ( "\nValue of var is: %d", *p);
    printf ( "\nValue of var is: %d", *( &var));

    /* Note I have used %p for p's value as it represents an address*/
    printf( "\nValue of pointer p is: %p", p);
    printf ( "\nAddress of pointer p is: %p", &p);


}


void vovelp()
{

    char str[100];
    char *ptr;
    int  cntV,cntC;

    printf("Enter a string: ");
    cin>>str;

    //assign address of str to ptr
    ptr=str;

    cntV=cntC=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            cntV++;
        else
            cntC++;
        //increase the pointer, to point next character
        ptr++;
    }
  printf("Total number of VOWELS: %d, CONSONANT: %d\n",cntV,cntC);


}

void nullp(){


int num ;
printf("enter a no");
scanf("%d",&num);
	int *ptr1 = &num;
	int *ptr2;
	int *ptr3=0;

	if(ptr1 == 0)
		printf("ptr1: NULL\n");
	else
		printf("ptr1: NOT NULL\n");

	if(ptr2 == 0)
		printf("ptr2: NULL\n");
	else
		printf("ptr2: NOT NULL\n");

	if(ptr3 == 0)
		printf("ptr3: NULL\n");
	else
		printf("ptr3: NOT NULL\n");



}

void readstringp()
{


    int arr[10];        //declare integer array
    int *pa;            //declare an integer pointer
    int  i;

    pa=&arr[0];         //assign base address of array

    printf("Enter array elements:\n");
    for(i=0;i < 10; i++){
        printf("Enter element %02d: ",i+1);
        scanf("%d",pa+i);   //reading through pointer
    }

    printf("\nEntered array elements are:");
    printf("\nAddress\t\tValue\n");
    for(i=0;i<10;i++){
        printf("%08X\t%03d\n",(pa+i),*(pa+i));
    }



}
void sspecial(){



int color;
	int bcolor;
	int x,y;
	int d;
char str[100];
scanf("%s",str);
	//init random to return random value each time
	rand();
	//clears the screen
//	clrscr();
system("cls");
	//infinite loop until key is not pressed
	while(!kbhit())
	{
		//gerenate randon text and background color
		color =rand()%16;
		bcolor=rand()%16;

		//define text color
		system("color 7");
		//define background color
		system("color 77");
		//check if both colors are same, continue the loop
		if(color==bcolor)
			continue;

		//generate random X and Y Co-ordinates
		x = rand()%75;
		y = rand()%25;
		//define position to print the text
		gotoxy(x,y);
		//print the text
		printf("%s",str);
		system("color 04");
		//delay
		for(int i=0;i<=100000000;i++);
	}



}


void pointerp(){


  int num;
  printf("eneter a no");
  scanf("%d",&num);

     //A normal pointer pr2
     int *pr2;

     //This pointer pr2 is a double pointer
     int **pr1;

     /* Assigning the address of variable num to the
      * pointer pr2
      */
     pr2 = &num;

     /* Assigning the address of pointer pr2 to the
      * pointer-to-pointer pr1
      */
           pr1 = &pr2;

     /* Possible ways to find value of variable num*/
     printf("\n Value of num is: %d", num);
     printf("\n Value of num using pr2 is: %d", *pr2);
     printf("\n Value of num using pr1 is: %d", **pr1);

     /*Possible ways to find address of num*/
     printf("\n Address of num is: %p", &num);
     printf("\n Address of num using pr2 is: %p", pr2);
     printf("\n Address of num using pr1 is: %p", *pr1);

     /*Find value of pointer*/
     printf("\n Value of Pointer pr2 is: %p", pr2);
     printf("\n Value of Pointer pr2 using pr1 is: %p", *pr1);

     /*Ways to find address of pointer*/
     printf("\n Address of Pointer pr2 is:%p",&pr2);
     printf("\n Address of Pointer pr2 using pr1 is:%p",pr1);

     /*Double pointer value and address*/
     printf("\n Value of Pointer pr1 is:%p",pr1);
     printf("\n Address of Pointer pr1 is:%p",&pr1);

}



void arrayp(){


 int *p;

   /*Array declaration*/
   int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;

   /* Assigning the address of val[0] the pointer
    * You can also write like this:
    * p = var;
    * because array name represents the address of the first element
    */
   p = &val[0];

   for ( int i = 0 ; i<7 ; i++ )
   {
      printf("val[%d]: value is %d and address is %p\n", i, *p, p);
      /* Incrementing the pointer so that it points to next element
       * on every increment.
       */
      p++;
   }

}




void basicfile(){




FILE *filePointer ;

    // Get the data to be written in file
    char dataToBeWritten[50];
        cin>>dataToBeWritten;

    // Open the existing file GfgTest.c using fopen()
    // in write mode using "w" attribute
    filePointer = fopen("GfgTest.c", "w") ;

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;

        // Write the dataToBeWritten into the file
        if ( strlen (  dataToBeWritten  ) > 0 )
        {

            // writing in the file using fputs()
            fputs(dataToBeWritten, filePointer) ;
            fputs("\n", filePointer) ;
        }

        // Closing the file using fclose()
        fclose(filePointer) ;

        printf("Data successfully written in file GfgTest.c\n");
        printf("The file is now closed.") ;
    }



}








};


//claass 2nd sem end




//file handlin program coding


unsigned long long int fileSize(const char *filename)
{
    // Open the file
    FILE *fh = fopen(filename, "rb");
    fseek(fh, 0, SEEK_END);
    unsigned long long int size = ftell(fh);
    fclose(fh);

    return (size);
}

// A Function to check if the file exists or not
bool fileExists(const char * fname)
{
    FILE *file;
    if (file = fopen(fname, "r"))
    {
        fclose(file);
        return (true);
    }
    return (false);
}




//y file handling ki fun ka declaration h jo remove rename and file size h jiski coding case m hi kar di h









/*void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
*/



// y doubly link ki coding h
struct Node;
typedef struct Node * PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node
{
    int e;
    Position previous;
    Position next;
};

void Insert(int x, List l, Position p)
{
    Position TmpCell;
    TmpCell = (struct Node*) malloc(sizeof(struct Node));
    if(TmpCell == NULL)
        printf("Memory out of space\n");
    else
    {
        TmpCell->e = x;
        TmpCell->previous = p;
        TmpCell->next = p->next;
        p->next = TmpCell;
    }
}

int isLast(Position p)
{
    return (p->next == NULL);
}

Position Find(int x, List l)
{
    Position p = l->next;
    while(p != NULL && p->e != x)
        p = p->next;
    return p;
}

void Delete(int x, List l)
{
    Position p, p1, p2;
    p = Find(x, l);
    if(p != NULL)
    {
        p1 = p -> previous;
        p2 = p -> next;
        p1 -> next = p -> next;
        if(p2 != NULL)                  // if the node is not the last node
            p2 -> previous = p -> previous;
    }
    else
        printf("Element does not exist!!!\n");
}



void Display(List l)
{
    printf("The list element are :: ");
    Position p = l->next;
    while(p != NULL)
    {
        printf("%d -> ", p->e);
        p = p->next;
    }
}
// yaha par doubli link list coding khatam

//circular link list ka declarartion h yaha par sta
//circular link list ka declartion khatam

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void getup()
{
    system("cls");
    gotoxy(10,2);
    printf("Press X to Exit, Press Space to Jump");
    gotoxy(62,2);
    printf("SCORE : ");
    gotoxy(1,25);
    for(int x=0;x<79;x++)
    printf("ß");
}

int t,speed=40;
void ds(int jump=0)
{
    static int a=1;

    if(jump==0)
        t=0;
    else if(jump==2)
        t--;
    else t++;
    gotoxy(2,15-t);
    printf("                 ");
    gotoxy(2,16-t);
    printf("         ÜÛßÛÛÛÛÜ");
    gotoxy(2,17-t);
    printf("         ÛÛÛÛÛÛÛÛ");
    gotoxy(2,18-t);
    printf("         ÛÛÛÛÛßßß");
    gotoxy(2,19-t);
    printf(" Û      ÜÛÛÛÛßßß ");
    gotoxy(2,20-t);
    printf(" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ");
    gotoxy(2,21-t);
    printf(" ßÛÛÛÛÛÛÛÛÛÛÛ  ß ");
    gotoxy(2,22-t);
    printf("   ßÛÛÛÛÛÛÛß     ");
    gotoxy(2,23-t);
    if(jump==1 || jump==2){
    printf("    ÛÛß ßÛ       ");
    gotoxy(2,24-t);
    printf("    ÛÜ   ÛÜ      ");
    }else if(a==1)
    {
    printf("    ßÛÛß  ßßß    ");
    gotoxy(2,24-t);
    printf("      ÛÜ         ");
    a=2;
    }
    else if(a==2)
    {
    printf("     ßÛÜ ßÛ      ");
    gotoxy(2,24-t);
    printf("          ÛÜ     ");
    a=1;
    }
    gotoxy(2,25-t);
    if(jump!=0){
        printf("                ");
    }
    else
    {

        printf("ßßßßßßßßßßßßßßßßß");
    }
    delay(speed);
}
void obj()
{
    static int x=0,scr=0;
    if(x==56 && t<4)
    {
    scr=0;
    speed=40;
    gotoxy(36,8);
    printf("Game Over");
    getch();
    gotoxy(36,8);
    printf("         ");
    }
    gotoxy(74-x,20);
    printf("Û    Û ");
    gotoxy(74-x,21);
    printf("Û    Û ");
    gotoxy(74-x,22);
    printf("ÛÜÜÜÜÛ ");
    gotoxy(74-x,23);
    printf("  Û    ");
    gotoxy(74-x,24);
    printf("  Û  " );
    x++;
    if(x==73)
    {
    x=0;
    scr++;
    gotoxy(70,2);
    printf("     ");
    gotoxy(70,2);
    printf("%d",scr);
    if(speed>20)
        speed--;
    }
}












main()
{

char name[30];
system("color 09");
gotoxy(30,15);
printf("PLS ENTER YOUR NAME \n");
printf("                                   ");
scanf("%s",name);
system("cls");
system("color 09");


// STAR SQUARE PATTER
 int i1, j1;

    /* Input number of rows from user */
    //printf("Enter number of rows: ");
    //scanf("%d", &N);

    /* Iterate over each row */
system("color 03");
    for(i1=1; i1<=10; i1++)
    {
        /* Iterate over each column */
        for(j1=1; j1<=80; j1++)
        {
            if(i1==1 || i1==10 || j1==1 || j1==80)
            {

                    for(int k=0;k<=10000;k++)
                    for(int l=0;l<=1000;l++);/* Print star for 1st, Nth row and column */
                    printf("*");
 delay(10);
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }

// STAR SQUARE PATTER END

system("color 25");
gotoxy(10,5);

	printf("PLEASE WAIT MR/MRS %s\n WE ARE LOAD PROGRAM FOR YOU\N PRESS ANY KEY TO CONTINUE",name);

	getch();
	system("cls");
	gotoxy(31,13);
	printf("LOADING....");
	//gotoxy(37,13);
	//printf("...");
	for(int i=0;i<=18;i++){
		for(int j=0;j<=10000000;j++);

		printf("%c",177);}



system("cls");
        char c[100];
system("color 09");




for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);



        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("W");

        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("E");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("L");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("C");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("O");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("M");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("E");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf(" ");





        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("   ");

        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("TO  ");


        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("M");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("E");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("C");
        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("U");

        for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");
         for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("Y");



         for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("  P");
         for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("R"); for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("O"); for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("J"); for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("E"); for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("C"); for(int i=0;i<=10000;i++)
            for(int j=0;j<=10000;j++);
        printf("T");


 for(int i=0;i<=1000;i++)
            for(int j=0;j<=10000;j++);
        printf("");
         for(int i=0;i<=1000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");
         for(int i=0;i<=1000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");
         for(int i=0;i<=1000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");
         for(int i=0;i<=1000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");
         for(int i=0;i<=1000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");
         for(int i=0;i<=1000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");
         for(int i=0;i<=1000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");
         for(int i=0;i<=1000;i++)
            for(int j=0;j<=10000;j++);
        printf("R");






system("cls");
system("color 12");
    cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t\t"<<"***************************************************"<<endl;
			cout<<"\t\t\t"<<"**      -------------------------------          **"<<endl;
			cout<<"\t\t\t"<<"**      |   WELCOME TO SMGI COLLEGE   |          **"<<endl;
			cout<<"\t\t\t"<<"**      -------------------------------          **"<<endl;
			cout<<"\t\t\t"<<"**  Add-kandheshi pachar bharthana               **"<<endl;
			cout<<"\t\t\t"<<"**                 Etawah                        **"<<endl;
			cout<<"\t\t\t"<<"**     CONTACT US:8630779250                     **"<<endl;
			cout<<"\t\t\t"<<"***************************************************"<<endl;
			cout<<endl<<"\t\t\t\t"<<" Please Enter the Password"<<endl;
			cout<<"\t\t\t\t  ";cin>> c;
			if(strcmp(c,"SSKKT")==0)
			{
				cout<<"\t\t\t\t"<<"Your Password is Correct"<<endl;
				cout<<"\t\t\t\t";
				system("cls");

			}
			else
                exit (3);



	int i,j,ch;
	firstsem x;
	second_sem y;
	printf("********************************************************************************");
gotoxy(1,23);
printf("******************************************************************************");


























	gotoxy(40,12);
printf("BCA\n");
gotoxy(40,13);
printf("Non GUI ");
scanf("%d",&ch);
	system("cls");

system("color 08");
	gotoxy(30,12);
	printf("loading...");
	gotoxy(31,13);
	for(i=0;i<=18;i++){
		for(j=0;j<=10000000;j++);
		printf("%c",177);
	}
		system("cls");
		system("color 56");

loop:	switch(ch)
	{

		system("color 09");

		case 1:
    cout<<"###################:-WELCOME TO SHIVANSHU / BABU PROGRAMMING-:##################"<<endl<<endl;
	cout<<"\n";
	cout<<"\t\t\t"<<"**************************************"<<endl;
	cout<<"\t\t\t"<<"##   Enter 1 -> FIRST SEMISTER      ##"<<endl;
	cout<<"\t\t\t"<<"**************************************"<<endl;
	cout<<"\t\t\t"<<"##   Enter 2 -> SECOND SEMISTER     ##"<<endl;
	cout<<"\t\t\t"<<"**************************************"<<endl;
	cout<<"\t\t\t"<<"##   Enter 3 -> THIRD SEMISTER      ## "<<endl;
	cout<<"\t\t\t"<<"**************************************"<<endl;
    cout<<"\t\t\t"<<"##   Enter 4 -> FOURTH SEMISTER     ## "<<endl;
    cout<<"\t\t\t"<<"**************************************"<<endl;
    cout<<"\t\t\t"<<"##   Enter 5 -> FIFTH SEMESTER      ## "<<endl;
    cout<<"\t\t\t"<<"**************************************"<<endl;
    cout<<"\t\t\t"<<"##   Enter 6 -> SIX SEMESTER        ## "<<endl;
    cout<<"\t\t\t"<<"**************************************"<<endl;
    cout<<"\t\t\t"<<"##   Enter 7 -> SMGI                ## "<<endl;
	cout<<"\t\t\t"<<"**************************************"<<endl;
	cout<<"\t\t\t"<<"##   Enter 8 -> Exit                ##"<<endl;
	cout<<"\t\t\t"<<"**************************************"<<endl<<endl;
	cout<<"\t\t\t"<<"Please Enter Our Choice";

			scanf("%d",&ch);

			switch(ch)

			{

			//case 1 1 sem ka h

				case 1:
				    system("cls");


// star pattern ani,matiomnQ				     int i1, j1;

    /* Input number of rows from user */
    //printf("Enter number of rows: ");
    //scanf("%d", &N);

    /* Iterate over each row */
    for(i1=1; i1<=10; i1++)
    {
        /* Iterate over each column */
        for(j1=1; j1<=80; j1++)
        {
            if(i1==1 || i1==10 || j1==1 || j1==80)
            {

                    for(int k=0;k<=10000;k++)
                    for(int l=0;l<=1000;l++);/* Print star for 1st, Nth row and column */
                    printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }
    //star patter animation










				    system("color 20");
				    gotoxy(10,5);
					printf("hello word\n");
                    gotoxy(10,6);

					printf("add two no\n");
                    gotoxy(10,7);
					printf("print integer\n");

					gotoxy(10,8);
					printf("simple interest\n");
					gotoxy(10,9);
					printf("area of triangel\n");
					gotoxy(10,10);
					printf("odd even\n");
					gotoxy(10,11);
					printf("calculator\n");
					gotoxy(10,12);
					printf("add series\n");
					gotoxy(10,13);
					printf("greatest 3 no\n");
					gotoxy(10,14);
					printf("swapping\n");
					gotoxy(10,15);
					printf("if else\n");
                   scanf("%d",&ch);
                  //   system("cls");
                    // system("color 43");
    switch(ch)
             {
                //case 1 sem k frst program k liye h
             case 1:
			          system("cls");
                      system("color 43");

                       x.hello();
                       getche();
             break;

             case 2:
	                	system("cls");
		                x.add();

                    	getche();
            break;

             case 3:
                       system("cls");
		             	x.inte();
		            	system("color 55");

		               getche();
             break;

            case 4:
		            		system("color 53");
		            		x.simint();
		            		//system("cls");
		                 	getche();
             break;


            case 5:
		            		//	system("color 43");
                         system("cls");
                         system("color 43");
                        x.areatri();
                        getche();
                        //system("cls");
            break;

            case 6:
								system("cls");
									system("color 56");
									x.odd();
		            			//	system ("cls");
		             			getche();
            break;

            case 7:
		            					system("cls");
		            					x.calc();
		            					getche();
		            					//system("cls");
            break;

            case 8:
		            					system("cls");
										x.series();
										system("color 78");
                                         getche();

            break;

            case 9:
		            			    	system("cls");
		            				  system("color 89");
									   x.greth();
                                      getche();
            break;


            case 10:
                                    system("cls");
		            				system("color 89");
                                    x.swap();
												  getche();
            break;


            case 11:
		            						 	 system("cls");
		            				system("color 89");
									x.ife();
									getche();
									break;

									//case 1 k 11 program k case end ho gye

            default :
                                exit (2);

// first 11 program ka switch case end hua h
		}



//case 2 sem h outer loop ka
    case 2:
                        system("cls");
system ("color 55");
					 	// star oatter animayion
					 	 int i1, j1;

    /* Input number of rows from user */
    //printf("Enter number of rows: ");
    //scanf("%d", &N);

    /* Iterate over each row */
    for(i1=1; i1<=10; i1++)
    {
        /* Iterate over each column */
        for(j1=1; j1<=80; j1++)
        {
            if(i1==1 || i1==10 || j1==1 || j1==80)
            {

                    for(int k=0;k<=10000;k++)
                    for(int l=0;l<=1000;l++);/* Print star for 1st, Nth row and column */
                    printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }

    // star patter animation
                        gotoxy(40,12);
						printf("1 array\n");
				    	gotoxy(40,13);
						printf("2 string \n");
						gotoxy(40,14);
						printf("3 pointer\n");
						gotoxy(40,15);
						printf("4 File Handling\n");
						gotoxy(40,16);
		                scanf("%d",&ch);
            switch(ch)
					{
					    //case 2 ka array case ka case 1 h
                case 1:
                              system("cls");
							   gotoxy(30,13);

                                printf("1. 1D\n");
                                gotoxy(30,14);
                                printf("2. 2D");
                                gotoxy(30,15);
                                printf("3. Multi Dimension");
                               scanf("%d",&ch);
                  switch(ch)
                         {
                          case 1:
										 		//system("cls");
										 		gotoxy(30,12);
										 		system("cls");
										 		printf("1.  High and low element in array");
										 		getch();
										 		gotoxy(30,13);
										 		printf("2.  delete 1d element");
										 		scanf("%d",&ch);
                                switch(ch){

                                    case 1:
		            			             	system("color 89");
										        y.higharray();
										        getch();
                                        break;

                                   case 2:
										 				//	system("cls");
										 					system("color 06");
										 					y.delarr();
										 					getch();
                                   break;

                                 default:
                                exit(4);

                                    }
                                    //case 2 ka iner loop khatam 2 aur h avi
                                    //case 2 h dimension ka 1d k baad 2d aur 3d k liye
                    case 2:
                                    // case 2 2 opt h 2d k liye
												 	system("cls");
												 	gotoxy(30,12);
												 	printf("2d array print a matrix");
												 	gotoxy(30,13);
												 	printf("\n multiply two matrix");
												 	scanf("%d",&ch);
                                        switch(ch)
                                        {
                                                case 1:
                                                    system("cls");
                                                    y.pmat();
                                                    getch();
                                                    break;



                                                case 2:
                                                    system("cls");
                                                    system("color 50");
                                                    y.mult();
                                                    getch();

                                                    break;
                                            default:
                                                    break;

												 	}
                                             case 3:
                                                    system("cls");
                                                    printf("multi D array");
                                                   y.multi();
                                                   getch();
                                                    break;
										 }
										 // yaha par arry khatm




							case 2:

										 system("color 43");
										 gotoxy(30,12);
										 printf("1 . string counter");
										 gotoxy(30,13);

                                        printf("2 . string palinfrom or not");
										 gotoxy(30,14);
										 printf("3 . reverse string ");
										 gotoxy(30,15);
										 printf("4 . string duplicate char remove ");
										 gotoxy(30,16);
										 printf("5 . string cacatinate ");
										 gotoxy(30,17);
						                 printf("6.     special string program");

	                					scanf("%d",&ch);
                       switch(ch){

						   	case 1:
								system("cls");
								y.counter();
							 	break;
							case 2:
								   system("cls");
                                   system("color 56");
							    	y.palindrom();
							 	   printf("\n\n");
								break;
                            case 3:
                                  system("cls");
                                  system("color 88");
                                  y.reservestring();
                                  getche();
                                    break;
                            case 4:
                                 system("cls");
                                system("color 88");
                                y.dupli();
                                getche();
                                break;

                            case 5:
                                system("cls");
                                system("color 97");
                                y.cancatinate();
                                getche();
                                break;


                            case 6:
                                system("color 67");
                                y.sspecial();
                                getche();
                                break;


                            default:
                                break;
				}


					case 3:
					        system("cls");
					        system ("color 67");
					    gotoxy(10,12);
					      printf("1.    pointer program to know the add");
					    gotoxy(10,13);
					       printf("2.   program to count vowels and consonants in a string using pointer");
	                    gotoxy(10,14);
					       printf("3. Example of Null pointer in C   ");
					    gotoxy(10,15);
					       printf("4 program to read array elements and print with addresses.    ");
                        gotoxy(10,16);
					       printf("5.  pointer to pointer");
                        gotoxy(10,17);
                           printf("6.   pointer to array");

                       scanf("%d",&ch);
                        switch(ch){

                       case 1:
                           system("color 66");
					        y.sp();
					        getche();
					    break;
                       case 2:
                               system("cls");
                               system("color 89");
                               y.vovelp();
                              getche();
                              break;
                      case 3:
                              system("cls");
                              system("color 55");
                              y.nullp();
                             getche();
                       break;
                   case 4:
                            system("cls");
                             system("color 51");
                                y.readstringp();
                             getche();
                      break;

                     case 5:
                           system("cls");
                            system("color 11");
                            y.pointerp();
                             getche();
                     break;


                  case 6:
                         system("cls");
                           system("color 65");
                           y.arrayp();
                            getche();
                              break;

                    default :
                         exit(1);

    }





// file handling ka case h pokkk
          case 4:
             system("cls");







                system("color 03");
                gotoxy(10,19);
               printf("1.  Basic Of File Handling ");

                gotoxy(10,20);
                printf("2.  File Rename Remove and Size");
                gotoxy(10,21);
                printf("3.  File Handling To create & write Name and Age In Database  ");
                gotoxy(10,22);

         scanf("%d",&ch);
    switch(ch)
    {

case 1:
                  system("cls");
                    system("color 21");
                    y.basicfile();
                      break;


 case 2:
                         system("cls");
                         system("color 23");

//yaha par file handling k remove ki coding h yaha s 2 fun ko call kia h jo sem_2 class k just baad h



                        printf("%llu Bytes\n", fileSize("Passwords.txt"));
                        printf("%llu Bytes\n", fileSize("Notes.docx"));

             if (fileExists("OldData.txt") == true )
                           printf("The File exists\n");
             else
                          printf("The File doen't exist\n");

                          rename("Videos", "English_Videos");
                          rename("Songs", "English_Songs");

                         remove("OldData.txt");
                         remove("Notes.docx");

            if (fileExists("OldData.txt") == true )
                           printf("The File exists\n");
          else
                         printf("The File doesn't exist\n");
                         break;

case 3:
    system("cls");
    system("color 50");

    //yaha par 1 class h student ka uska obj bana k file m datqa creat karna h studenty ka obj bana k file m data write hoga jo ki current directory m hoga

        student s;

    ofstream file;

    //open file in write mode
    file.open("aaa.txt",ios::out);
    if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    cout<<"\nFile created successfully."<<endl;

    //write into file
    s.getData();    //read from user
    file.write((char*)&s,sizeof(s));    //write into file

    file.close();   //close the file
    cout<<"\nFile saved and closed succesfully."<<endl;

    //re open file in input mode and read data
    //open file1
    ifstream file1;
    //again open file in read mode
    file1.open("aaa.txt",ios::in);
    if(!file1){
        cout<<"Error in opening file..";
        return 0;
    }
    //read data from file
    file1.read((char*)&s,sizeof(s));

    //display data on monitor
    s.showData();
    //close the file
    file1.close();

              }


                //break;
          default:
            exit(3);



}
exit(4);
//YAHA S BRACESS HATAYA H
//break;

					case 3:

					    system("cls");

					 // STAR ANIMATION
					 system("color 09");


    /* Input number of rows from user */
    //printf("Enter number of rows: ");
    //scanf("%d", &N);

    /* Iterate over each row */
    for(i1=1; i1<=10; i1++)
    {
        /* Iterate over each column */
        for(j1=1; j1<=80; j1++)
        {
            if(i1==1 || i1==10 || j1==1 || j1==80)
            {

                    for(int k=0;k<=10000;k++)
                    for(int l=0;l<=1000;l++);/* Print star for 1st, Nth row and column */
                    printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }//STAR ANIMATION



					    gotoxy(40,12);
						printf("c++");
						    gotoxy(40,13);
						printf("DS");
					scanf("%d",&ch);
					switch(ch)

					{


        case 1:
            system("cls");
            system("color 08");
            gotoxy(20,10);
            printf("1. ENCAPSULATION");
            gotoxy(20,11);
            printf("2. POLYMORPHISM");
            gotoxy(20,12);
            printf("3. INHERITANCE");
            gotoxy(20,13);
            printf("4. ABSTRACTION");
            gotoxy(20,14);
            printf("5. DATA HIDING");
			gotoxy(20,15);
			printf("6. CONSTRUCTOR & DECONSTRUCTOR & COPY CONSTRUCTOR");
			gotoxy(20,16);
			printf("7 FUNCTION OVERLOADONG");

            gotoxy(20,17);
           printf("8. VIRTUAL FUN\n\n\n\n\n\n\n\n\n\n\n\n\n");

           scanf(" %d",&ch);
switch(ch)

{
      case 1:{
               rectangle r;
               r.area();
               rectangle r1(3,6);
               r1.area();
               rectangle r2(10);
               r2.area();
               getch();
               getche();
           }
    break;

      case 2:
                   system("cls");

                   Animal myAnimal;
                   Pig myPig;
                   Dog myDog;

                   myAnimal.animalSound();
                   myPig.animalSound();
                   myDog.animalSound();
                   getche();
      break;

      case 3:
                   system("cls");
                   system("color 30");
                   printf("1 Single Inheritance\n");
                   printf("2 Multiple Inheritance\n");
                   printf("3 Hierarchical Inheritance\n");
                   printf("4 Multilevel Inheritance\n");
                   printf("5 Hybrid Inheritance (also known as Virtual Inheritance\n");
                   scanf("%d",&ch);
                   getche();
                 switch(ch)
                 {

              case 1:

//single inheritance ki main wali coding classs upper h
                int i, n;
                 char ch;
                  salary s[10];
              system("cls");
              cout << "Enter the number of employee:";
             cin>>n;
              for (i = 0; i < n; i++)
                {
                  s[i].get();
                   s[i].get1();
                  s[i].calculate();
               }
               cout << "\ne_no \t e_name\t des \t bp \t hra \t da \t pf \t np \n";
                 for (i = 0; i < n; i++)
                    {
                  s[i].display();
                   }
                  getch();
                  break;
    // yaha par single inheriatnce khatam


              case 2:
                  system("cls");
                  system("color 66");

                  C obj1; //object of derived class C
 	              obj1.getx();
 	              obj1.gety();
 	              obj1.sum();
 	              getch();
 	              break;
// yaha par multiple inheritance end



              case 3:

                      system("cls");
                  system("color 16");

                     member M;
                    staff S;
                    stud p;
                   cout << "Student" << endl;
                    cout << "Enter data" << endl;
                   p.getdata();
                   cout << endl
                   << "Displaying data" << endl;
                   p.disp();
                cout << endl<<  "Staff Data" << endl;
               cout << "Enter data" << endl;
                 S.getdata();
                cout << endl
                  << "Displaying data" << endl;
                  S.disp();
                 getch();
                  break;



// yaha par herarichal inheritance end

              case 4:
                    system("cls");
                    system("color 96");
                   derived2 D;
//                   D.display3();
                   D.display2();
                   D.display1();
                   getche();
                   break;

// yaha par multilevel inheritance end


              case 5:
                    system("cls");
                    system("color 96");
                        DD d1;
                     d1.result();
                     getche();
                     break;
    // y curly braces switch case k single and multi inheritance wala virtual sun wala jo switch case h vo

       }




case 4:
           system("cls");
                    system("color 90");
                Sum sm;
               sm.add();
cout<<"\n\n\n ###ABSTRACTION###\n\nemplementation details of the class are protected from the inadvertent user level errors."<<endl;
cout<<"A programmer does not need to write the low level code."<<endl;
cout<<"Data Abstraction avoids the code duplication, i.e., programmer does not have to undergo the same tasks every time to perform the similar operation."<<endl;
cout<<"The main aim of the data abstraction is to reuse the code and the proper partitioning of the code across the classes."<<endl;
cout<<"Internal implementation can be changed without affecting the user level code."<<endl;
getche();
break;




case 5:
           system("cls");
                    system("color 08");
printf("HEY %s PLEASE DO IT YOUR SELF I THINK YOU SEARCH IT VERY WELL SO DO IT ....%C",name,1);
getche();
break;

// data hiding



case 6:



break;


case 7:
           system("cls");
                    system("color 05");

    int ch;
    int a, b, r;
//x    clrscr();
    fn obj;
    cout << "\n\t\tFunction Overloading";
    cout << "\n 1.Area of Circle\n 2.Area of Rectangle\n 3.Area of Triangle\n 4.Exit\n";
            cout << "?Enter your Choice : ";
            cin>>ch;

    switch (ch) {
        case 1:
            cout << "Enter Radious of the Circle:";
            cin>>r;
            obj.area(r);
            break;
        case 2:
            cout << "Enter Sides of the Rectangle:";
            cin >> a>>b;
            obj.area(a, b);
            break;
        case 3:
            cout << "Enter Sides of the Triangle:";
            cin >> a>>b;
            obj.area(0.5, a, b);
            break;
        case 4:
            exit(0);
         }

      getch();


    // function overloading end



        case 8:
            system("cls");
            system("color 05");
          AAA *pA;
          BBB oB;
          pA = &oB;
          pA->show();
         getche();
         break;
// virtual function END
//default:
//break;
}

// y bracket inheritate poly abs wala h



        case 2://ds wala case
            system("cls");

            // star animation start
            int i1, j1;

    /* Input number of rows from user */
    //printf("Enter number of rows: ");
    //scanf("%d", &N);

    /* Iterate over each row */
    for(i1=1; i1<=10; i1++)
    {
        /* Iterate over each column */
        for(j1=1; j1<=80; j1++)
        {
            if(i1==1 || i1==10 || j1==1 || j1==80)
            {

                    for(int k=0;k<=1000;k++)
                    for(int l=0;l<=1000;l++);/* Print star for 1st, Nth row and column */
                    printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }// star animation ens




            system("color 09");
            gotoxy(20,10);
            printf("STACK & QUEUES");
            gotoxy(20,11);
            printf("LIST");
            gotoxy(20,12);
            printf("TREE");
            gotoxy(20,13);
            printf("B-TREE");
            gotoxy(20,14);
            printf("SORTING TECH");
            getche();
            scanf("%d",&ch);
        switch(ch)//y seitch case ds k opt ka h
        {

        case 1:
            system("cls");
            system("color 06");
            break;
        case 2:
            system("cls");
            system("color 05");
            printf("SINGLE LINK LIST\n");
            printf("DOUBLE LINK LIST\n");
            printf("CIRCULAR LINK LIST");
            scanf("%d",&ch);
        switch(ch){// y switch case link ist ka h
        case 1:
            //system("cls");
            system("color 01");

      gh:int ch;
		printf("Enter 1-> Insertion at Beginig\n");
		printf("Enter 2-> Insert at Last\n");
		printf("Enter 3-> Deletion at Beginig\n");
		printf("Enter 4-> Delete at Last\n");
		printf("Enter 5-> Delete by Spcify data\n");
		printf("Enter 6-> Delete by Spcify index\n");
		printf("Enter 7-> Display\n");
		printf("Enter 8-> Reverse\n");
		printf("Enter 9-> clear the screen\n");
		printf("Enter 10-> Exit\n");
		printf("Enter our Choice\n");

            while(1)
	{

		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert_b();
			break;
			case 2:
			insert_l();
			break;
			case 3:
			delet_b();
			break;
			case 4:
			delet_l();
			break;
			case 5:
			specify_d();
			break;
			case 6:
			specify_i();
			break;
			case 7:
			display();
			break;
			case 8:
			reverse();
			break;
			case 9:
                system("cls");
                goto gh;
			case 10:
			{
				printf("Exiting this programe\n");
				exit(1);
			}
			default:
			{
				printf("Invalid Input\n");
			}
		}
	}

// yaha par single link list khatam



            case 2:
                //system("cls");
                system("color 67");


//       int chh;
	F:	printf("Enter 1-> Insertion at Begining\n");
		printf("Enter 2-> Insertion at Last\n");
		printf("Enter 3-> Delete at Begining\n");
		printf("Enter 4-> Delete at Last\n");
		printf("Enter 5-> Display\n");
		printf("Enter 6-> Reverse\n");
		printf("Enter 7-> elete by Spcify data\n");
		printf("Enter 8-> elete by Spcify index\n");
		printf("Enter 9-> Clear Screen\n");
		printf("Enter 10-> Exit\n");
		printf("Enter our Choice\n");

                while(1)
	{

		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert_bb();
			break;
			case 2:
			insert_ll();
			case 3:
			delet_bb();
			break;
			case 4:
			delet_ll();
			break;
			case 5:
              displayy();
			break;
			case 6:
			reversee();
			break;
			case 7:
			specify_dd();
			break;
			case 8:
			specify_ii();
			break;
			case 9:
                system("cls");
                system("color 56");
                goto F;
			case 10:
			{
				printf("Exiting this programe\n");
				exit(1);
			}
			default:
			{
				printf("Invalid Input\n");
			}
		}
	}
	// yaha par doub;y link list calling fun end

            case 3://circular link list case
              break;







            }// link list bracket bend

        }// switch case single tree  sorting list stack queue wala h

//case 3 ka bracket h first swotch
break;
}

//case 4 h outer loop ka

					case 4:
					    system("cls");
						gotoxy(40,12);
						printf("coming soon kll");
					getche();
					break;

					case 5:
						gotoxy(40,12);
						printf("coming soon");
					getche();
					break;


					case 6:
                        gotoxy(40,13);

                        printf("COMING SOON");

					case  7:
                   system ("cls");
                   gotoxy(30,15);
                   system("color 70");
                   printf("****************");
                   printf("PHARMACY");
                   printf("****************");
                   gotoxy(30,16);
                   printf("****************");
                   printf("MANAGEMENT");
                    printf("****************");
                   getche();
                      getche();
                         getche();

                    break;

        case 8:
                        exit(2);


     default:
						exit(1);

			}

//yaha par semester switch case khatam ho gya jo 2 switch case h down m vo sabse oahla non gui wala h






        case 2:


            int i1, j1;

    /* Input number of rows from user */
    //printf("Enter number of rows: ");
    //scanf("%d", &N);

    /* Iterate over each row */
    for(i1=1; i1<=10; i1++)
    {// i vertiucal kitna chahghiye
        /* Iterate over each column */
        for(j1=1; j1<=80; j1++)
        {// yaha par j ko 1 80 tak chalaya taki display full ho horizontely
            if(i1==1 || i1==10 || j1==1 || j1==80)
            {

                    for(int k=0;k<=10000;k++)
                    for(int l=0;l<=1000;l++);/* Print star for 1st, Nth row and column */
                    printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }// star animation

              gotoxy(30,5);
            printf("1. snack game\n");
             gotoxy(30,6);
            printf("2. dino game\n");
            gotoxy(30,7);
            printf("3. TIC TOC");
            scanf("%d",&ch);
            switch(ch){

        case 1:
            system("cls");

   char key;

    Print();

    system("cls");

    load();

    length=5;

    head.x=25;

    head.y=20;

    head.direction=RIGHT;

    Boarder();

    Food(); //to generate food coordinates initially

    life=3; //number of extra lives

    bend[0]=head;

    Move();   //initialing initial bend coordinate







            case 2:
                    system("mode con: lines=29 cols=82");
                         char ch;
                            int i;
                           getup();
               while(true)
        {
                    while(!kbhit())
                    {
                        ds();
                         obj();
                    }
                         ch=getch();
                         if(ch==' ')
                 {
                       for(i=0;i<10;i++)
                      {
                          ds(1);
                       obj();
                      }
                     for(i=0;i<10;i++)
                    {
                       ds(2);
                      obj();
                    }
               }
                     else if (ch=='x')

                      return  0;
    }




            case 3:






    system("cls");
    menu();
    getch();
















            }// non gui m enter k baad snack aur dino wala switch case ka

}//stitch case non gui bca wala






}//main fun bracket
void Move()
{
    int a,i;

    do
    {

        Food();
        fflush(stdin);

        len=0;

        for(i=0; i<30; i++)

        {

            body[i].x=0;

            body[i].y=0;

            if(i==length)

                break;

        }

        Delay(length);

        Boarder();

        if(head.direction==RIGHT)
{
            Right();}

        else
         if(head.direction==LEFT)
 {

         Left();
 }
        else if(head.direction==DOWN)
  {

            Down();
  }
        else if(head.direction==UP)
   {Up();}

        ExitGame();

    }
    while(!kbhit());

    a=getche();

    if(a==27)

    {

        system("cls");

        exit(0);

    }
    key=getch();

    if((key==RIGHT && head.direction!=LEFT&&head.direction!=RIGHT)||(key==LEFT&&head.direction!=RIGHT&&head.direction!=LEFT)||(key==UP&&head.direction!=DOWN&&head.direction!=UP)||(key==DOWN&&head.direction!=UP&&head.direction!=DOWN))

    {

        bend_no++;

        bend[bend_no]=head;

        head.direction=key;

        if(key==UP)
        {head.y--;
        }
        if(key==DOWN)
{
            head.y++;
}
        if(key==RIGHT)

           {
               head.x++;
           }
        if(key==LEFT)
{

            head.x--;
}
        Move();

    }

    else if(key==27)

    {

        system("cls");

        exit(0);

    }

    else

    {

        printf("\a");

        Move();

    }
}

void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void GotoXY(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,b);
}
void load()
{
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("loading...");
    gotoxy(30,15);
    for(r=1; r<=20; r++)
    {
        for(q=0; q<=100000000; q++); //to display the character slowly
        printf("%c",177);
    }
    getch();
}
void Down()
{
    int i;
    for(i=0; i<=(head.y-bend[bend_no].y)&&len<length; i++)
    {
        GotoXY(head.x,head.y-i);
        {
            if(len==0)
                printf("v");
            else
                printf("*");
        }
        body[len].x=head.x;
        body[len].y=head.y-i;
        len++;
    }
    Bend();
    if(!kbhit())
        head.y++;
}
void Delay(long double k)
{
    Score();
    long double i;
    for(i=0; i<=(10000000); i++);
}
void ExitGame()
{
    int i,check=0;
    for(i=4; i<length; i++) //starts with 4 because it needs minimum 4 element to touch its own body
    {
        if(body[0].x==body[i].x&&body[0].y==body[i].y)
        {
            check++;    //check's value increases as the coordinates of head is equal to any other body coordinate
        }
        if(i==length||check!=0)
            break;
    }
    if(head.x<=10||head.x>=70||head.y<=10||head.y>=30||check!=0)
    {
        life--;
        if(life>=0)
        {
            head.x=25;
            head.y=20;
            bend_no=0;
            head.direction=RIGHT;
            Move();
        }
        else
        {
            system("cls");
            printf("All lives completed\nBetter Luck Next Time!!!\nPress any key to quit the game\n");
            record();
            exit(0);
        }
    }
}
void Food()
{
    if(head.x==food.x&&head.y==food.y)
    {
        length++;
        time_t a;
        a=time(0);
        srand(a);
        food.x=rand()%70;
        if(food.x<=10)
            food.x+=11;
        food.y=rand()%30;
        if(food.y<=10)

            food.y+=11;
    }
    else if(food.x==0)/*to create food for the first time coz global variable are initialized with 0*/
    {
        food.x=rand()%70;
        if(food.x<=10)
            food.x+=11;
        food.y=rand()%30;
        if(food.y<=10)
            food.y+=11;
    }
}
void Left()
{
    int i;
    for(i=0; i<=(bend[bend_no].x-head.x)&&len<length; i++)
    {
        GotoXY((head.x+i),head.y);
        {
            if(len==0)
                printf("<");
            else
                printf("*");
        }
        body[len].x=head.x+i;
        body[len].y=head.y;
        len++;
    }
    Bend();
    if(!kbhit())
        head.x--;

}
void Right()
{
    int i;
    for(i=0; i<=(head.x-bend[bend_no].x)&&len<length; i++)
    {
        //GotoXY((head.x-i),head.y);
        body[len].x=head.x-i;
        body[len].y=head.y;
        GotoXY(body[len].x,body[len].y);
        {
            if(len==0)
                printf(">");
            else
                printf("*");
        }
        /*body[len].x=head.x-i;
        body[len].y=head.y;*/
        len++;
    }
    Bend();
    if(!kbhit())
        head.x++;
}
void Bend()
{
    int i,j,diff;
    for(i=bend_no; i>=0&&len<length; i--)
    {
        if(bend[i].x==bend[i-1].x)
        {
            diff=bend[i].y-bend[i-1].y;
            if(diff<0)
                for(j=1; j<=(-diff); j++)
                {
                    body[len].x=bend[i].x;
                    body[len].y=bend[i].y+j;
                    GotoXY(body[len].x,body[len].y);
                    printf("*");
                    len++;
                    if(len==length)
                        break;
                }
            else if(diff>0)
                for(j=1; j<=diff; j++)
                {
                    /*GotoXY(bend[i].x,(bend[i].y-j));
                    printf("*");*/
                    body[len].x=bend[i].x;
                    body[len].y=bend[i].y-j;
                    GotoXY(body[len].x,body[len].y);
                    printf("*");
                    len++;
                    if(len==length)
                        break;
                }
        }
        else if(bend[i].y==bend[i-1].y)
        {
            diff=bend[i].x-bend[i-1].x;
            if(diff<0)
                for(j=1; j<=(-diff)&&len<length; j++)
                {
                    /*GotoXY((bend[i].x+j),bend[i].y);
                    printf("*");*/
                    body[len].x=bend[i].x+j;
                    body[len].y=bend[i].y;
                    GotoXY(body[len].x,body[len].y);
                    printf("*");
                    len++;
                    if(len==length)
                        break;
                }
            else if(diff>0)
                for(j=1; j<=diff&&len<length; j++)
                {
                    /*GotoXY((bend[i].x-j),bend[i].y);
                    printf("*");*/
                    body[len].x=bend[i].x-j;
                    body[len].y=bend[i].y;
                    GotoXY(body[len].x,body[len].y);
                    printf("*");
                    len++;
                    if(len==length)
                        break;
                }
        }
    }
}
void Boarder()
{
    system("cls");
    int i;
    GotoXY(food.x,food.y);   /*displaying food*/
    printf("F");
    for(i=10; i<71; i++)
    {
        GotoXY(i,10);
        printf("!");
        GotoXY(i,30);
        printf("!");
    }
    for(i=10; i<31; i++)
    {
        GotoXY(10,i);
        printf("!");
        GotoXY(70,i);
        printf("!");
    }
}
void Print()
{
    //GotoXY(10,12);
    printf("\tWelcome to the mini Snake game.(press any key to continue)\n");
    getch();
    system("cls");
    printf("\tGame instructions:\n");
    printf("\n-> Use arrow keys to move the snake.\n\n-> You will be provided foods at the several coordinates of the screen which you have to eat. Everytime you eat a food the length of the snake will be increased by 1 element and thus the score.\n\n-> Here you are provided with three lives. Your life will decrease as you hit the wall or snake's body.\n\n-> YOu can pause the game in its middle by pressing any key. To continue the paused game press any other key once again\n\n-> If you want to exit press esc. \n");
    printf("\n\nPress any key to play game...");
    if(getch()==27)
        exit(0);
}
void record()
{
    char plname[20],nplname[20],cha,c;
    int i,j,px;
    FILE *info;
    info=fopen("record.txt","a+");
    getch();
    system("cls");
    printf("Enter your name\n");
    scanf("%[^\n]",plname);
    //************************
    for(j=0; plname[j]!='\0'; j++) //to convert the first letter after space to capital
    {
        nplname[0]=toupper(plname[0]);
        if(plname[j-1]==' ')
        {
            nplname[j]=toupper(plname[j]);
            nplname[j-1]=plname[j-1];
        }
        else nplname[j]=plname[j];
    }
    nplname[j]='\0';
    //*****************************
    //sdfprintf(info,"\t\t\tPlayers List\n");
    fprintf(info,"Player Name :%s\n",nplname);
    //for date and time

    time_t mytime;
    mytime = time(NULL);
    fprintf(info,"Played Date:%s",ctime(&mytime));
    //**************************
    fprintf(info,"Score:%d\n",px=Scoreonly());//call score to display score
    //fprintf(info,"\nLevel:%d\n",10);//call level to display level
    for(i=0; i<=50; i++)
        fprintf(info,"%c",'_');
    fprintf(info,"\n");
    fclose(info);
    printf("Wanna see past records press 'y'\n");
    cha=getch();
    system("cls");
    if(cha=='y')
    {
        info=fopen("record.txt","r");
        do
        {
            putchar(c=getc(info));
        }
        while(c!=EOF);
    }
    fclose(info);
}
int Score()
{
    int score;
    GotoXY(20,8);
    score=length-5;
    printf("SCORE : %d",(length-5));
    score=length-5;
    GotoXY(50,8);
    printf("Life : %d",life);
    return score;
}
int Scoreonly()
{
    int score=Score();
    system("cls");
    return score;
}
void Up()
{
    int i;
    for(i=0; i<=(bend[bend_no].y-head.y)&&len<length; i++)
    {
        GotoXY(head.x,head.y+i);
        {
            if(len==0)
                printf("^");
            else
                printf("*");
        }
        body[len].x=head.x;
        body[len].y=head.y+i;
        len++;
    }
    Bend();
    if(!kbhit())
        head.y--;
}// yaha par snack game end























void insert_b()
{
	struct	node *ptr;
	int item;
	printf("Enter the value for node\n");
	scanf("%d",&item);
	ptr=(struct node*)malloc(sizeof(struct node));
	if(headd==NULL)
	{
		ptr->data=item;
		ptr->next=NULL;
		headd=ptr;
	}
	else
	{
		ptr->data=item;
		ptr->next=headd;
		headd=ptr;
	}count++;
}
void delet_b()
{
	struct node *ptr;
	ptr=headd;
	if(headd==NULL)
	{
		printf("NO any Nodes\n");
	}
	else
	{
		int del=ptr->data;
		headd=ptr->next;
		free(ptr);
		printf("Deleted node is %d\n",del);
	}
}
void display()
{
	struct node *ptr;
	ptr=headd;
	if(headd==NULL)
	{
		printf("Linklist is empty\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("Data is %d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}
void insert_l()
{
	int item;
	struct node *ptr;
	struct node *temp;
	temp=headd;
	printf("Enter the value of node\n");
	scanf("%d",&item);
	ptr=(struct node*)malloc(sizeof(struct node));
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	ptr->data=item;
	temp->next=ptr;
	ptr->next=NULL;
	count++;
}
void specify_d()
{
	int item;
	struct node *ptr;
	struct node *temp;
	ptr=headd;
	printf("Enter the value to delete the node\n");
	scanf("%d",&item);
	while(item!=ptr->data)
	{
		ptr=ptr->next;
	}
	if(item!=ptr->data)
	{
		printf("This value is not present\n");
	}
	else
	{
		headd->next=ptr->next;
		free(ptr);
	}

}
void delet_l()
{
	struct node *ptr;
	struct node *temp;
	ptr=headd;
	int del;
	if(headd==NULL)
	{
	 	printf("Not present any node\n");
	}
	else if(headd->next==NULL)
	{
		headd=NULL;
		free(headd);
	}
	else
	{
		while(ptr->next!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=NULL;
		del=ptr->data;
		free(ptr);
		printf("Delete last node data is %d\n",del);
	}
}
void specify_i()
{
	struct node *ptr=headd,*ptr1;
	int loc,i;
	printf("Enter the node\n");
	scanf("%d",&loc);
	if(headd==NULL)
	{
		printf("Specified node not present\n");
	}
	else
	{
      for(i=0;i<loc;i++)
	  {
	  	ptr1=ptr;
	  	ptr=ptr->next;
	  }
	ptr1->next=ptr->next;
	free(ptr);
	}
}
void reverse()
{
	struct node *ptr=headd,*ptr1=headd,*temp;
	int temp1,i;
	if(headd==NULL)
	{
		printf("node was not present");
	}
	else
	{
		ptr=headd;
		ptr1=headd;
		temp=NULL;
		for(i=0;i<count/2;i++)
		{
			while(ptr1->next!=temp)
			{
				ptr1=ptr1->next;
			}
		temp1=ptr->data;
		ptr->data=ptr1->data;
		ptr1->data=temp1;
		ptr=ptr->next;
		temp=ptr1;
		}
	}
}
// yaha par single link list end













// doubly fun defination start


void insert_bb()
{
	struct	nodee *ptrr;
	int itemm;
	printf("Enter the value for node\n");
	scanf("%d",&itemm);
	ptrr=(struct nodee*)malloc(sizeof(struct nodee));
	if(headdd==NULL)
	{
		ptrr->dataa=itemm;
		ptrr->nextt=NULL;
		ptrr->prevv=NULL;
		headdd=ptrr;
	}
	else
	{
		ptrr->dataa=itemm;
		ptrr->nextt=headdd;
		ptrr->prevv=NULL;
		headdd->prevv=ptrr;
		headdd=ptrr;
	}
}


void delet_bb()
{
	struct nodee *ptrr;
	ptrr=headdd;
	int del=ptrr->dataa;
	if(headdd==NULL)
	{
		printf("Not present any Nodes\n");
	}
	else
	{
		headdd=ptrr->nextt;
		headdd->prevv=NULL;
		free(ptrr);
		printf("Deleted data is %d\n",del);
	}
}


void displayy()
{
	struct nodee *ptrr;
	ptrr=headdd;
	if(headdd==NULL)
	{
		printf("Linklist is empty\n");
	}
	else
	{
		while(ptrr!=NULL)
		{
			printf("Data is %d\n",ptrr->dataa);
			ptrr=ptrr->nextt;
		}
	}
}



void insert_ll()
{
	int itemm;
	struct nodee *ptrr;
	struct nodee *tempp;
	tempp=headdd;
	printf("Enter the value of node\n");
	scanf("%d",&itemm);
	ptrr=(struct nodee*)malloc(sizeof(struct nodee));
	while(tempp->nextt!=NULL)
	{
	tempp=tempp->nextt;
	}
	ptrr->dataa=itemm;
	tempp->nextt=ptrr;
	ptrr->nextt=NULL;
	countt++;
}



void delet_ll()
{
	struct nodee *ptrr;
	struct nodee *tempp;
	ptrr=headdd;
	int del;
	if(headdd==NULL)
	{
	 	printf("Not present any node\n");
	}
	else if(headdd->nextt==NULL)
	{
		headdd=NULL;
		free(headdd);
	}
	else
	{
		while(ptrr->nextt!=NULL)
		{
			tempp=ptrr;
			ptrr=ptrr->nextt;
		}
		tempp->nextt=NULL;
		del=ptrr->dataa;
		free(ptrr);
		printf("Delete last node data is %d\n",del);
	}
}



void specify_ii()
{
	struct nodee*ptrr=headdd,*ptr11;
	int loc,i;
	printf("Enter the node\n");
	scanf("%d",&loc);
	if(headdd==NULL)
	{
		printf("Specified node not present\n");
	}
	else
	{
      for(i=0;i<loc;i++)
	  {
	  	ptr11=ptrr;
	  	ptrr=ptrr->nextt;
	  }
	ptr11->nextt=ptrr->nextt;
	free(ptrr);
	}
}



void reversee()
{
	struct nodee *ptrr=headdd,*ptr11=headdd,*tempp;
	int temp11,i;
	if(headdd==NULL)
	{
		printf("node was not present");
	}
	else
	{
		ptrr=headdd;
		ptr11=headdd;
		tempp=NULL;
		for(i=0;i<countt/2;i++)
		{
			while(ptr11->nextt!=tempp)
			{
				ptr11=ptr11->nextt;
			}
		temp11=ptrr->dataa;
		ptrr->dataa=ptr11->dataa;
		ptr11->dataa=temp11;
		ptrr=ptrr->nextt;
		tempp=ptr11;
		}
	}
}



void specify_dd()
{
	int itemm;
	struct nodee *ptrr;
	struct nodee *tempp;
	ptrr=headdd;
	printf("Enter the value to delete the node\n");
	scanf("%d",&itemm);
	while(itemm!=ptrr->dataa)
	{
		ptrr=ptrr->nextt;
	}
	if(itemm!=ptrr->dataa)
	{
		printf("This value is not present\n");
	}
	else
	{
		headdd->nextt=ptrr->nextt;
		free(ptrr);
	}
}

// doubly link list fun defination end















// tic toc game
void menu()
{
    int choice;
    system("cls");
    printf("\n--------MENU--------");
    printf("\n1 : Play with X");
    printf("\n2 : Play with O");
    printf("\n3 : Exit");
    printf("\nEnter your choice:>");
    scanf("%d",&choice);
    turn = 1;
    switch (choice)
    {
    case 1:
        player = 1;
        comp = 0;
        player_first();
        break;
    case 2:
        player = 0;
        comp = 1;
        start_game();
        break;
    case 3:
        exit(1);
    default:
        menu();
    }
}

int make2()
{
    if(board[5] == 2)
        return 5;
    if(board[2] == 2)
        return 2;
    if(board[4] == 2)
        return 4;
    if(board[6] == 2)
        return 6;
    if(board[8] == 2)
        return 8;
    return 0;
}

int make4()
{
    if(board[1] == 2)
        return 1;
    if(board[3] == 2)
        return 3;
    if(board[7] == 2)
        return 7;
    if(board[9] == 2)
        return 9;
    return 0;
}

int posswin(int p)
{
// p==1 then X   p==0  then  O
    int i;
    int check_val,pos;

    if(p == 1)
        check_val = 18;
    else
        check_val = 50;

    i = 1;
    while(i<=9)//row check
    {
        if(board[i] * board[i+1] * board[i+2] == check_val)
        {
            if(board[i] == 2)
                return i;
            if(board[i+1] == 2)
                return i+1;
            if(board[i+2] == 2)
                return i+2;
        }
        i+=3;
    }

    i = 1;
    while(i<=3)//column check
    {
        if(board[i] * board[i+3] * board[i+6] == check_val)
        {
            if(board[i] == 2)
                return i;
            if(board[i+3] == 2)
                return i+3;
            if(board[i+6] == 2)
                return i+6;
        }
        i++;
    }

    if(board[1] * board[5] * board[9] == check_val)
    {
        if(board[1] == 2)
            return 1;
        if(board[5] == 2)
            return 5;
        if(board[9] == 2)
            return 9;
    }

    if(board[3] * board[5] * board[7] == check_val)
    {
        if(board[3] == 2)
            return 3;
        if(board[5] == 2)
            return 5;
        if(board[7] == 2)
            return 7;
    }
    return 0;
}

void go(int n)
{
    if(turn % 2)
        board[n] = 3;
    else
        board[n] = 5;
    turn++;
}

void player_first()
{
    int pos;

    check_draw();
    draw_board();
    gotoxy(30,18);
    printf("Your Turn :> ");
    scanf("%d",&pos);

    if(board[pos] != 2)
        player_first();

    if(pos == posswin(player))
    {
        go(pos);
        draw_board();
        gotoxy(30,20);
        //textcolor(128+RED);
        printf("Player Wins");
        getch();
        exit(0);
    }

    go(pos);
    draw_board();
    start_game();
}

void start_game()
{
// p==1 then X   p==0  then  O
    if(posswin(comp))
    {
        go(posswin(comp));
        flag = 1;
    }
    else if(posswin(player))
        go(posswin(player));
    else if(make2())
        go(make2());
    else
        go(make4());
    draw_board();

    if(flag)
    {
        gotoxy(30,20);
        //textcolor(128+RED);
        printf("Computer wins");
        getch();
    }
    else
        player_first();
}

void check_draw()
{
    if(turn > 9)
    {
        gotoxy(30,20);
        //textcolor(128+RED);
        printf("Game Draw");
        getch();
        exit(0);
    }
}

void draw_board()
{
    int j;

    for(j=9; j<17; j++)
    {
        gotoxy(35,j);
        printf("|       |");
    }
    gotoxy(28,11);
    printf("-----------------------");
    gotoxy(28,14);
    printf("-----------------------");

    for(j=1; j<10; j++)
    {
        if(board[j] == 3)
            put_X_O('X',j);
        else if(board[j] == 5)
            put_X_O('O',j);
    }
}

void put_X_O(char ch,int pos)
{
    int m;
    int x = 31, y = 10;

    m = pos;

    if(m > 3)
    {
        while(m > 3)
        {
            y += 3;
            m -= 3;
        }
    }
    if(pos % 3 == 0)
        x += 16;
    else
    {
        pos %= 3;
        pos--;
        while(pos)
        {
            x+=8;
            pos--;
        }
    }
    gotoxy(x,y);
    printf("%c",ch);
    //tic tic game defination end
}
