// for run  

// gcc first.c  ----> for compiler
// ./a.exe----> for run

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// // #include <dos.h>

// int main()
// {   
//      printf("hello");
// getch();
// }
// **********************************************OR
// #include<stdio.h>
// #include<conio.h>
// int main()
// {   
//      printf("hello");
// return 0;
// }

// variable in c:--->
//name of the memory location store some data 

//     int number = 55;
//     char str = '*';
//     int age = 22;
//   //  a=5;     //but yha error hogi 
//     age = 24;   //upade kara a ko to koi error nahi 
// float pi = 3.14;


// variable Rules : -
// 1.variable are case sencetiv 

// int a = 5;
// int A= 6; //both are differnt memory space 

//2. 1st charctor must be ALPHABET/"_"UNDERSCORE
//  {/}----> back salace 
// int a = 23;
// int _a= 23;

//3. no comma/ blank space 
// int amne,pal = 1;

// printf("%d", amne,pal);
// , is run in vs not in turboo, but not give exat value
//no other symbole other then "_";


// NOTE: iseme boolen or string data type nahi hote h 




// program staticture
// #include<stdio.h>// # preprocessor, <> angualr brakets , stdio.h- printf
// #include<conio.h> //scanf()
// int main(){
//     printf("hello");
//     return  0 // 0 error return
// }

// comments:------------->
//  that are note a part of programs
//1: single line {//}
/*multiline comment */



// Output:-------------------------------------------------------- 
// #include<stdio.h>
// int main(){
// printf(" Hello World \n");
// printf(" kuch bhi ");
// }


// Output---------------------------------------------------------
// format spacifier :- "%f,%d,%c"


//     int age =5;
//     float pi= 3.14;
//     char star='*';
// printf(" age is %d ", age);
// printf(" value of pi is %f ", pi);
// printf(" star looks like this %c ", star);


// Input------------------------------------------------------------
// &- m% bolte h ise variable ke address ko store karta h ye 


// int age;
// printf("enter the age ");
// scanf(" %d ", &age);
// printf("your age is %d", age );


//1} WEP ADDTION OF TWO NUM

// int a,b,c;
// printf("enter the Frist number A:");
// scanf(" %d ", &a);
// printf("enter the Frist number B:");
// scanf(" %d ", &b);
// int c = a+b;
// printf("sum of two numbers %d", c );


//2} WEP ADDTION OF TWO NUM without third variable 

// int a,b;
// printf("enter the Frist number A:");
// scanf(" %d ", &a);
// printf("enter the Frist number B:");
// scanf(" %d ", &b);
// printf("sum of two numbers %d", a+b );



// Compilation****************************************
// is A computer program that translates C code into machine code



// 3} WEP to calculate area of a square (side are given)
// {side *side }----->area of a square

// float side;
// printf("enter the side  :");
// scanf(" %f ", &side);
// printf("area of square %f", side*side );



//4} WEP to calculate area of a circle.(side is given)
// {pie*r*^2}

// float r;
//  float pie=3.14;
// printf("enter the Radius R:");
// scanf(" %f ", &r);
// printf("area of circle  %f", pie*r*r );


// #########################Chapter2###########################
// Instructions:-------------------------------------
// 1Type Declaration Instructions
// 2Arithmetic Instructions
// 3Control Instructions

////////// VALID /////////////

// int a = 22;
// int b = a; //o/p 22
// printf("%d ", b);

// int c = b + 1;
// printf("%d", c); // o/p 23

// int d = 1, e;
// printf("%d\n ", d); 
// printf("%d ", e); 

// int oldAge = 22;
// int newAge = oldAge+year;
// int year = 10; //-------------> that is through error  phle {year} declayer karna padega.


// int year = 10;
// int oldAge = 22;
// int newAge = oldAge+year;
// printf("%d", newAge);
// int x,y,z,s;
// x=y=z=5;
// s=x+2;
// printf("%d %d %d", x,y,z); 


/////////  INVALID  //////////////

// int x,y,z,s;
// int x,y,z=5;
// printf("%d%d%d", x,y,z); //error




// \\\\\\\\\\\\\\\\\\Arithmetic instructions\\\\\\\\\\\\\\\\\\\\

//NOTE - single variable on the LHS

//////////   VALID //////////////////

// int a =2,b=2,c=2;
// a = b + c;
// printf("%d ", a);
// a = b * c;
// printf("%d ", a);
// a = b / c;
// printf("%d ", a);





/////////  INVALID  //////////////
// b + c = a
// a = bc
// a = b^c

// int a, b =2, c=3;
// a = pow(b,c);
// printf("%d", a);    //2^3=8

//^ ---> ye power ke liye nahi hota xor operator ke liye hota h.

/////////////Modular Operator %/////////////////


//Returns remainder for int
//ye only intger ke liye use hota h 



// printf("%d\n ",3 % 2 );

// printf("%d",-3 % 2 );

// NOTE: modular opertor float (. value ) nahi leta h ;
// printf("%d\n ",3.3 % 2.2 );

/////////////////Type Conversion/////////////
// int + int ----------> int
// int + float--------->float
// (2)    (4)            (4)
// float + float-------->float


// printf("%d\n ",3 + 2 );
// printf("%d\n ",3.5 + 2 );// error {garbage value }
// printf("%f\n ",3.5 + 2 );
// printf("%d\n ",3.2 + 2.5 ); //error
// printf("%d\n ",3.2 + 2.5 );


// int a = 1.9999; // round of two nahi karega point ke bad ki sari value ko hata dega .
// printf("%d", a);


/////////////Operator Precedence/////////////
// [LEFT--->RIGHT] Associativity (for the same precedence)
//1)   {*,/,%}same precedence ho to l to r chalenge 
//2)    {+,-} same precedence ho to l to r chalenge 
//3)     {=}  warna lavel 1, lavel2, lavel3 ka follow karenge 
//     {MDMASE}


//Examples 1: according to precedence 
//x = 4 + 9 * 10 =94 
// printf("%d", 4 + 9 * 10);


//Examples 2: according to same precedence 
//x = 4 * 3 / 6 *2 L----->R
//          12/6*2
//            2*2 = 4 ans       
// int x;
// printf("%d", 4 * 3 / 6 *2);  //o/p =4


// Questions:

// 5*5-2*3 = 25 -2*3= 25-6=19
// 5*2/2*3 = 10/2*3= 5*3=15
// 5*(2/2)*3 = 15
// 5+2/2*3 = 8
// printf("%d", 5*5-2*3);
// printf("%d", 5*2/2*3);
// printf("%d", 5*(2/2)*3);
// printf("%d", 5+2/2*3);


//////////////////////Operators/////////////////////
/*
a. Arithmetic Operators
b. Relational Operators
d. Bitwise Operators
c. Logical Operators
e. Assignment Operators
f. Ternary Operator
 = assingment operetor
Operators:
Relational Operators---------->
 ==  equalto
>, >= greater then , greter then equal to
<, <= smaller then , smaller then equal to
!= not equal to 
*/

// printf("%d", 5==5); //o/p 1 ---> True(2,3,4,5,6,7,8,9)
// printf("%d", 5==6); //o/p 0 ---> False
// 3>4-->0
// 3<4-->1
// 4>4-->0
// 4>=4-->1
//4!=4-->0
//4===4-->1
// printf("%d\n", 5!=6);
// printf("%d", 5==6);


// 1-------> TRUE
// 0-------> FALSE
////////////////////////Operators////////////////////////
/*
 Logical operator 
 && AND   //  NOTE : {&} ---> Bitwise operator 
 || OR    //  NOTE : {|} ---> Bitwise operator
 ! NOT


 && AND----------->

  T   T   =   T
  T   F   =   F
  F   T   =   F
  F   F   =   F

()&&()
(1<3)&&(2<3)  = 1
  t      t    = t
 (5<3)&&(2<3)  = 0
   f     t      f
*/
// printf("%d",(1<3)&&(2<3));
// printf("%d",(5<3)&&(2<3));




// || OR--------------->
/*
  T   T   =   T
  T   F   =   T
  F   T   =   T
  F   F   =   F

(1<3)||(2<3)  = 1
  t      t    = t
(5>3)||(2>3)  = 1
   f     t      T
(5<3)||(2>3)  = 0
   F     F      F
*/
// printf("%d\n",(1<3)||(2<3));
// printf("%d\n",(5>3)||(2>3));
// printf("%d\n",(5<3)||(2>3));

//  ! NOT------------------>

// T  = F
// F  = T
// !(3>5)   0 {f}----->1{t}
// !(5>1)   1 {t}----->0{f}

// printf("%d\n",!(3>5));
// printf("%d\n",!(5>1));
// printf("%d",!(1<3)&&(2<3));
       //      T      T        T------>F (0)



///////////////Operator Precendence/////////
// Priority                Operator
// 1                          !
// 2                        *,/,%
// 3                         +, -
// 4                      <, <=, >, >= {Relational operator                        
// 5                         ==, !=    }
// 6                           &&      {logical operator 
// 7                           ||
// 8                            =       

// NOT prerator + MDMAS + relational operator + logical operator + assingment operator  

// ! */%+-<<=>>===!=&&||=

// /////////////////Assignment Operators{shoer hand operator }////////////////////////
// lambi chijo ko chhota kar ke likhate h 
/*
=
+=
-=
*=
/=
%=

a = a+b;
a += b;
a = a+b;
a -= b;
a = a+b;
a *= b;
a = a+b;
a /= b;
a = a+b;
a %= b;

*/

// int a = 1,b= 2;
// // a= a+b; 
// a+=b;              //{a= a}+b; agar ye same honge to hi likh ayenge
// printf("%d", a);

// Q 5} WAP num is divisible by 2or NOT.

// int a ;
// printf("enter the num");
// scanf("%d", &a);
// printf("%d ", a % 2==0);


//Q 6} WAP num is Even or odd.
//  0----> odd 
//  1----> even
// int a ;
// printf("enter the num");
// scanf("%d", &a);
// printf("%d ", a % 2==0);

// Q 7} 
// are the following valid or not.
// int a = 8^8;  // valid h but not a power 
// printf("%d\n", a); 

// int x;int y=x; //valid
// printf("%d%d", x,y);

// int x, y= x; //invalid
// printf("%d%d", x,y);


// char stars = '**'; //invalid- char single value contain arta h 
// printf("%d", stars);


// Q8 }
// print 1(true )or 0/(false)for following statements

// a. if it's sunday & it's snowing -> True 
// b. if it's monday & it's raining-> True
// c. if a num is greater than 9 & less than 100 -> True


// int sunday = 0;
// int snowing = 1;
// printf("%d", (sunday && snowing));    // false
// //               0         1             0
// printf("%d", (sunday || snowing));    // true
// //               0         1             1
// //  b. if it's monday & it's raining-> True   (DYS)

// Q) if num is two degite num then print true.
//(a>9 a<100)---> true
// int a ;

// scanf("%d", &a);
// printf("%d", a>9 && a<100); 
// // printf("%d", ((a>9&&a<100))); 


// ############################chapter 3 ##########################

// Conditional Statements:-
//     Types
//         1) if-else
  //        2) Switch
// 1) if-else--------------->




// Syntax:-------->
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
if(Condition) {
 //do something if TRUE
}
else {
 //do something if FALSE
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

//  int a ;
//  printf("enter the Age");
//  scanf("%d", &a);
//  if (a>=18 )
//  printf("you can vote ");
//  else
//  printf("you cant vate ");

// NOTE : for one statement

//  int a ;
//  printf("enter the Age\n");
//  scanf("%d", &a);
//  if (a>=18 )
//       {
//         printf("you can vote\n ");
//       }
//  else
//       {
//          printf("you cant vate ");
//       }

// printf("thanks");

// only if----------------->

//  int a ;
//  printf("enter the Age\n");
//  scanf("%d", &a);
//  if (a>=18 )
//       {
//         printf("you can vote\n ");
//       }

// printf("thanks");



// else if---------------------------->
// Syntex---------->
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// else if
// if(Condition 1) {
//  //do something if TRUE
// }
// else if (Condition 2) {
//  //do something if 1st is FALSE & 2nd is TRUE
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// int a;
//  printf("enter the Age\n");
//  scanf("%d", &a);
//  if (a>=18&&a<=50)
//           { 
//             printf("adult");
//           }
// else if (a>=13&&a<=18)
//           {
//             printf("teen");
//           }
// else if (a>=5&&a<=12)
//          {
//             printf("child");
//          }
// else{
//         printf("old");
//     }



// NESTED IF ------------>
// int a;
//  printf("enter the Age\n");
//  scanf("%d", &a);
//  if (a>=18&&a<=50)
//         { 
//             printf("adult");
//              if (a>=18&&a<=20)
//                 {
//                      printf("teen");
//                 }
//         }
// else if (a>=7&&a<=20)
//           {
//             printf("h");
//           }
// else if (a>=5&&a<=12)
//          {
//             printf("child");
//          }
// else{
//         printf("old");
//     }



// Ternary Operators------>
// SYNTAX---->
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// condition? True : FALSE;
//             { : } nahi to 
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// int a;
//  printf("enter the Age\n");
//  scanf("%d", &a);
//  (a>=18)?(printf("audult")):(printf("not audult\n"));
//   (a>=18)? printf("audult"): printf("not audult");




// Switch Operators---------------------------------->

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`
// switch(number) {
// case C1: //do something
//  break;
// case C2 : //do something
//  break;
// default : //do something
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`




// Q } sunday to monday 

// int day;
// printf("enter the day ");
// scanf("%d", &day);
// switch (day)
// {
// case 1:{
// printf("sunday");
//    break;
//        }

 
// case 2:{
// printf("mon");
//    break;
//        }
   

// case 3:{
// printf("tues");
//    break;
//        }
   

// case 4:{
// printf("wed");
//   break;
//        }
//    break;

// case 5:{
// printf("thurs");
//  break;
//        }
  

// case 6:{
// printf("frid");
//  break;
//        }
  

// case 7:{
// printf("satur");
//    break;
//        }

// default:{printf("wrong");}
    
// }





// Q } sunday to monday for charecter .

// char day;
// printf("enter the day sanday-sa mon-m, tues-t, wed-w, thurs-t fird-f, satur-s");
// scanf("%c", &day);
// switch (day)
// {
// case 's':{
// printf("sunday");
//    break;
//        }

 
// case 'm':{
// printf("mon");
//    break;
//        }
   

// case 't':{
// printf("tues");
//    break;
//        }
   

// case 'w':{
// printf("wed");
//   break;
//        }
  

// case 'T':{
// printf("thurs");
//  break;
//        }
  

// case 'f':{
// printf("frid");
//  break;
//        }
  

// case 'S':{
// printf("satur");
//    break;
//        }

// default:{printf("wrong");}
    
// }

// describe +ve, -ve and even or odd
// int num;
// printf("enter the num");
// scanf("%d", &num);
// if (num>0){
//    printf("positive ");
//    if(num%2==0){
//       printf("even");

//    }
//    else printf("odd");
// }
// else    printf("negetive ");


// Q 9} WAP to check a student passed or fail.
//       marks>30 is PASS
//       marks<=30 is FAIL

// int num;
// printf("enter the num");
// scanf("%d", &num);
// if (num >0 && num<=30){
//           printf("fail");
//         }
//    else if (num>30&& num <100) printf("pas");

// else  printf("wrong ");




// Q10 WAP to given grades to student 
// marks<30 is c
// 30<= marks<70 is B
// 70<= marks<90 is A 
// 90<= marks <= 100 is A+


// int num;
// printf("enter the num");
// scanf("%d", &num);
// if (num >0 && num<=30)  printf("C");
//    else if (num>30&& num <70) printf("B");
//  else if (num>=70&& num <90) printf("A");
//   else if (num>90&& num <=100) printf("A+");

// else  printf("wrong ");

// Q11} multiple choice 

// int x =2;
// // if (x=1){
//    if (x=0){    // c vala print karta h  kiyuki x me negetive value h x=0.
//    printf("x is equal to 1\n");
//    printf("%d ", x ); // x =1 ne replace kar diya a x = 2 ko 
// }
// else{
//    printf("x is not equal to 1");
//    printf("%d ", x ); 
// }

// a. given error
// b. print "x " is equal to 1
// c. print x ix not equal to 1


// Q 12} WAP to find if a character entered by user upper case or not.

// char ch;
// printf("enter the chater");
// scanf("%c", &ch);
// if (ch >= 'A' && ch<='Z')// single quate me hona chahiye.
// {
//    printf(" UPPEr");
// }
// else if(ch >= 'a' && ch<='z')
// {
//    printf(" LOWER");
// }
// else printf("wrong"); 




///////////////////Loop Control Instructions//////////////////////
// Types:-
// 1)for 
// 2)do 
// 3)while

/*for loop---------
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
for(initialisation; condition; updation) {
//do something
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// int i;
// // for(i = 0; i < 100; i++) // i---> iterator, counter variable.
// for(i = 100; i > 0; i--)
// {
//    // printf("hello\n");
//    printf("%d \n", i);
   
// }



// increment operator 
 
//  pre increment  ++i;
//  post increment  i++;

// int i =1;
//  printf("%d \n", i++);    printf("%d \n", i); ///use then increase 
// printf("%d \n", ++i);  printf("%d \n", i); //increase then use 

   

// decriment operator 
 
//  pre decriment  --i;
//  post decriment i--;

// int i =50;
//  printf("%d \n", i--); printf("%d \n", i); ///use then decriment  
// printf("%d \n", --i);  printf("%d \n", i); //decriment then use 


// for (float i = 0; i < 5.0; i++)
// {
//    printf("%f\n",i);
// }


// for (char i = 'a'; i < 'z'; i++)
// {
//    printf("%c\n",i);
// }



// infinite loop


// for (char i = 1; ; i++)
// printf("%c\n",i);




/*while loop

************************************
initialization
while(condition) {
//do something
inc/decriment

}
************************************
*/
// Q14) print to num 0 to n ,if n is given by uder 

// int a=0,b;
// printf("enter the num ");
// scanf("%d",&b);
// while (a<b)
// {
//    printf("%d\n", a);
//    a++;
// }




// *********************************************
/* do while loop -------> atleast ak bar to chalta hi h 


````````````````````````````````````````
do {
//do something
incriment/dicriment
} while(condition);
`````````````````````````````````````````````*/
// int i =1;
// do {
//    printf("%d\n", i);
//    i++;
// }while (i<=5);




// Q15) print the sum of first n natural num .
// int b;
// printf("enter the num ");
// scanf("%d",&b);
// int sum =0;
// for (int i=1; i<=b; i++)
// { 
//    sum = sum+i;
//    //  printf("%d\n", sum);
// }
  
//  printf("%d\n", sum); //for ke bhar karna h

// for (int i= b; i>=1;  i--)
// {
//    printf("%d ",i);
// }




// Q16 )print the table of a num input by the user.
// int n;
// printf("enter the table ");
// scanf("%d", &n);
// for(int i=1;i<=10;i++)
// printf("%d \n", n*i);

// *****************************************
// break Statemen ----->exit the loop
// for (int i = 0; i <=5; i++)
// {
//    if (i==3)
//    break;
//    {printf("%d\n",i);}
// }
// printf("end");



// Q17 keep taking number as input fro user until user enters an odd number


// int n;       
// do{
// printf("enter num ");   //4
// scanf("%d", &n);
// printf("%d \n",n);      
// if(n%2!=0){
//    break;
// }
// }
// while (1);
//             // while ke bhar h 
//    printf("thanku");

// ****************************************************
// continue Statement------------>{skip }to next iteration


// for (int i = 0; i < 5; i++)
// {
//   if(i==3){
//     continue;  //[3 ko chhodke sabhi value print kar dega ]
//   }
// printf("%d\n",i);
// }

// Q20} print all the odd number from 5 to 50

// for (int i = 5; i <= 50; i++)
// {
//   if(i%2==0){
//     continue;  //[sare even num ko skip kar dega ]
//   }
//   else 
// printf("%d\n",i);
// }


// Q21) FACTORIAL A NUM 2! = 2*1=2, 3!= 3*2*1=6

// int n;
// printf("enter the num ");
// scanf("%d", &n);
// int fact= 1;
// for (int i = 1; i <= n; i++)
// {
//   fact= fact*i;
// }
// printf("%d", fact);




// int n;
// printf("enter the num ");
// scanf("%d", &n);
// int fact =1;
// for ( int i = 1; i <=n; i++)
// {
//   fact =fact*i;
// }
// printf("%d", fact);




// Q22 print reverse of the table for a num n.
// int n;
// printf("enter the table");
// scanf("%d", &n);
// for (int i = 10; i >=1; i--)
// {
//  printf("%d\n", n*i); 
// }


// Q23) calculate the sum of all number between 5 to 50(including 5 & 50)

// int n=0 ;

// for(int i=5;i<=50;i++)
// {
// n = n+i;
// }printf("%d", n);

// printf("hello");
// return 0;
// }

// ###########################(FUNCATION))################################################33

// function is a block of code that perform perticular task.


// #include<stdio.h>
// #include<conio.h>
// void fun();      //funcation declaretion/ prototype 
// int main()
// {

//   for (int i = 0; i < 10; i++)
//   {
//     fun();      // funcation call
//   }

// return 0;
// }
// void fun()      //funcation definiation
// {
//   printf("hello\n");
// }



// Q27) write 2 funcation one to print "hello" & second to print "good bye"
// #include<stdio.h>
// #include<conio.h>
// void fun1();
// void fun2();
// int main()
// {
//   fun1();
//   fun2();
//   return 0;

// } 
// void fun1(){
//   printf("hello\n");
//   }
// void fun2()
// {printf("good");}

// Q28) write a funcation that print namaste if user is indian & Bonjour if the user  is french.
// #include<stdio.h>
// #include<conio.h>
// void indian();
// void french();
// int main()
// {
  
//   char ch;
//   printf("what is you nationality indian for I and french for F ");
//  scanf("%c", &ch);
//  if (ch=='i'){
//    indian();
//  }
//   else if (ch=='f'){
//    french(); 
//  }

//  else{
//   printf("w");
//  }
 
//   return 0;

// }
// void indian(){
//   printf("Namaste");
// }
// void french(){
//   printf("Bonjour");
// }

// - Execution always starts from main
//  A function gets called directly or indirectly from main
// - There can be multiple functions in a program.

//  A function gets called directly or indirectly from main
// #include<stdio.h>
// #include<conio.h>
// void indian();
// void french();
// int main()
// {
  

//  indian();
//   return 0;

// }
// void indian(){
//   printf("Namaste");
//   french();
// }
// void french(){
//   printf("Bonjour");
// }

//  There can be multiple functions in a program
// function type ---->
// 1) Library function           2) User defined function 
// Special functions               declared & defined by programmer
// inbuilt in C
// scanf( ), printf( )


// Passing Arguments----->functions can take value & give some value
// 1)parameter  {take  karta h use parameter bolte h }
// 2)return value {jo value return karta h use return type khte h}


// Passing Arguments
// 1)void printHello( );
// 2)void printTable(int n);
// 3)int sum(int a, int b);

// 1)void printHello( );-------------->

// #include<stdio.h>
// #include<conio.h>
// void indian();
// void french();
// int main()
// { 
//  indian();
//   return 0;
// }
// void indian(){
//   printf("Namaste");
//   french();
// }
// void french(){
//   printf("Bonjour");
// }




// 2)void printTable(int n);-------------------->

// #include<stdio.h>
// #include<conio.h>
// void fun(int n ); //declaration 
// int main()
// {
//   int n;
//   printf("enter the num"); //calling 
//   scanf("%d",&n);
//   fun(n);
//   return 0;
// }
// void fun(int n){ // definiation
//   for (int i = 1; i <=10; i++)
//   printf("%d\n",n*i);//++11 
// }





//  3)int sum(int a, int b);------------------>
// int ---> return, main ----> return apna apna hoga 


// #include<stdio.h>
// #include<conio.h>
// int sum ( int a,  int b );
// int main()
// {
//  int a,b;
//   printf("enter the first num ");
//   scanf("%d",&a);
//   printf("enter the second num ");
//   scanf("%d",&b);
//   int s= sum(a,b); //arugument / actual parameter
//   printf("%d",s);
//       return 0;
// }
// int sum(int x, int y){  //parameter
//   return x+y;
// }


// NOTE----------->
// a. Function can only return one value at a time
// b. Changes to parameters in function don't change the values in
// calling function.
// Because a copy of rgument is passed to the function.




// b. Changes to parameters in function don't change the values in
// calling function.


// WAP to add gst in price

// #include<stdio.h>
// #include<conio.h>
// void gst(float x);
// int main(){
//   float x =100.0;
//   // char x ='A';
//   gst(x);
//   printf("%d\n", x);    //100.000000
// //                       Because a copy of rgument is passed to the function.
//   return 0;
// }
// void gst(float x){
//   x = x + (.18*x);
//   printf("%f\n", x);    //118.000000

// }



// Q29) use library funcation to calculate the square of a um given by user.

// #include<stdio.h>
// #include<math.h>
// void calc(float value);
// int main(){
// int n = 8;
// calc(n);
// return 0;
// }
// void calc(float x){
// printf("%f",pow(x, 2));

// }

// write funcation to calculate area of a square, a cricle & a rectangle.

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// float Squarearea(float s);
// float criclearea(float c);
// float rectanglearea(float l, float b);
// int main(){
//  float s,c,r,l,b;

//   Squarearea(s);
//   criclearea(c);
//   rectanglearea(l,b);
//   return 0;

// }
// float Squarearea(float side)
// { 
//   printf("enter the side ");
//   scanf("%f", &side);
//   printf("%f \n", side*side);
   
// }
// float criclearea(float radius)
// {
//   printf("enter the radius ");
//     scanf("%f ", &radius);
// printf("%f \n", 3.14*pow(radius,2) );
    
// }
// float rectanglearea(float l, float b)
// {
//   printf("enter the lenth\n ");
//   printf("enter the width ");
//      scanf("%f ", &l);
//      scanf("%f ", &b);
// printf("%f\n", l*b);
// }

/*
///////////////////////////////Recursion:////////////////////////////////////


When a function calls itself, it's called recursion


a. Anything that can be done with Iteration, can be done with
recursion and vice-versa.
Properties of Recursion
b. Recursion can sometimes give the most simple solution.
d. Iteration has infinite loop & Recursion has stack overflow
*/
// #include<stdio.h>
// #include<conio.h>
// void hello(int count);
// int main(){ 
//   hello(10);
//   return 0;

// }  //recursiv
// void hello ( int count){
//   if (count==0){            //base case 
//     return ;   // void/ stop
//   }
//   printf("hello\n");
//   hello(count-1);

// }


// Q30) sum of frist n natural num
// n -> 1+2+3+4+--------+n-1 +n = sum(n-1)+n
// n = 5 --> _1+_2+_3+_4+ 5 = 15 sum(4)+5
// n = 4 --> _1+_2+_3+ 4 = 10 sum(3)+4
// n = 3 --> _1+_2+ 3 = 6, sum(2)+3
// n = 2 --> _1+ 2 = 3 , sum(n-1)+2, sum(1)+2
// n = 1 --> 1


// #include<stdio.h>

// int sum(int n);
// int  main()
// {     
//   printf("sum is : %d", sum(15));
//   return 0;
// }

// int sum(int n){
//   if (n ==1){
//     return 1;
//   }
//   int sumNm1= sum(n-1);
//   int sumN = sumNm1 + n;
//   return sumN;

// }


// #include<stdio.h>
// int fun(int n);
// int main (){
//   printf("sum is %d", fun(5));

  
//   return 0;
// }
// int fun (int n){
//  if (n==1){
//   return 1;
//  }

//   int sumNm1= fun(n-1);
//  int  sum = sumNm1 +n ;
//}

// Q31 factorial of n. 

// 5!= 1*2*3*4*5---> 4!*5 
// 4!= 1*2*3*4---> 3!*4 
// 3!= 1*2*3---> 2!*3 
// 2!= 1*2---> 1!*2 
// 1!= 1 ---> 1 




// factorial using recursion------------->
// #include<stdio.h>
// #include<conio.h>
// int fac(int n);
// int main()
// {
//     int n;
//     printf("enter the num");
//     scanf("%d",  &n); 
//    printf("fac of %d", fac(n));
//   // printf("fac of %d", fac(5));
// }

// int fac(int n){
//   if (n==1){
//     return 1;
//   }
//   int facNM1 = fac(n-1);
//   int facN = facNM1* n;
//    return facN;
// }




// #include<stdio.h>
// // #include<conio.h>
// int fun(int n);
// int main(){
  
 
// // ---------------------------------------------
//     fun(5);
//   printf("%d", fun); // error 
// // ---------------------------------------------
//  int s=fun(5);
//   printf("%d", s);
// // ---------------------------------------------
 
//   printf("%d", fun(5));
// // ---------------------------------------------

//   return 0;

// }
// int fun(int n){
//   if (n==1){
//     return 1;
//   }
// int facNm1= fun(n-1);
// int facN= facNm1*n;
// return facN;
// }






// factorial simple ------------>

// #include<stdio.h>
// #include<conio.h>
// int main()
// {  int num, fact = 1;
//   printf("enter the num ");
//   scanf("%d", &num);
//   for (int i = 1; i <= num; i++)
//   {
//   fact = fact*i;
  
//   }
//   printf("%d",fact);
//   return 0;
// }






// factorial using funcation 1 ------------>

// #include<stdio.h>
// #include<conio.h>
// int fun(int num);
// int main()
// {  int num;
//   fun(num);
//   return 0;
// }
// int fun(int n){
// int fact = 1;
//   printf("enter the num ");
//   scanf("%d", &n);
//   for (int i = 1; i <= n; i++)
//   {
//   fact = fact*i;
  
//   }
//   printf("%d",fact);
// }


// factorial using funcation 2 ------------>

// #include<stdio.h>
// #include<conio.h>
// int fun(int num);
// int main()
// {  int num;

//   printf("enter the num ");
//   scanf("%d", &num);

//   fun(num);
//   return 0;
// }
// int fun(int n){
//    int fact = 1;
//   for (int i = 1; i <= n; i++)
//   {
//   fact = fact*i;
  
//   }
//   printf("%d",fact);
// }



/*
Properties of recursion


a. Anything that can be done with Iteration, can be done with
recursion and vice-versa.
b. Recursion can sometimes give the most simple solution.
c. Base Case is the condition which stops recursion.
d. Iteration has infinite loop & Recursion has stack overflow
*/


// Q32)  write the fun to convert celsius to fahrenheit.
// far = celsius*(9.0/5.0)+32

// #include<stdio.h>
// #include<conio.h>
// float fun(float celsius);
// int main(){
  
// printf("celsius is conveted into fahrenheight %f ", fun(37));

// return 0;

// }
// float fun(float celsius){

//   float far = celsius * (9.0/5.0)+32;
//   return far ;

// }

// Q33) write a funcation to calculate percentage of a student feome marks in science, math & sanskrit.


// #include<stdio.h>
// #include<conio.h>
// int  fun(int math, int science, int english);
// int main(){
//   int science  = 79;
//   int english = 98;
//   int math = 100;
// printf("total persentage is %d  ", fun( math, science , english ) );
// return 0;

// }
// int  fun(int math, int science, int english){

  
//   return (science +math +english)/3 ;

// }

// Q 34} write a funcation to print n terms of the fibonacci sequence.{fibonachi bolte h }

/*
fib(0)      fib(1)      fib(2)      fib(3)      fib(4)   
0             1             1         2             3       5           8           13          21  .......

fib(2) = fib(0)  + fib(1)--------->    fib(n)= fib(n-1)+ fib(n-2) 

fib(3) = fib(1)  + fib(2)              fib(2)= fib(2-1)+ fib(2-2)= fib(1)+fib(0)

fib(4) = fib(2)  + fib(3)   

fib(5) = fib(3)  + fib(4)   

  


                        fib(5)
                      /        \
                     /          \
                    /            \
                   fib(4)       { fib(3) }
                  /     \         /    \
                 /       \       /      \
                /         \     /        \
            {  fib(3) } fib(2) fib(2)   fib(1)
              /    \                \
             /      \                \
            /        \                \
        fib(2)      fib(1)           fib(1)
          /
         /
     fib(1)

*/

// Q 35 write the funcation to print the nth term of thr fibonacci sequence.


// #include<stdio.h>
// #include<conio.h>
// int fib(int n);
// int main (){
//   int n;
//   // fib(5);
//   printf("nth term %d", fib(7));
//   return 0;                           
  
// }
// int fib(int n){
//   //base case
//   if(n==0){
//     return 0;
//   }
//   if (n==1){
//     return 1;

//   }
//   int fibNm1= fib(n-1);
//   int fibNm2 = fib(n-2);
//  int  fibN = fibNm1+fibNm2;
// //  printf(" fibonic of num %d is %d \n", n , fibN);
//  return fibN;
// }


// series print karane vala dekhna h. -------> ye array ke through ho rha h age 

/////////////////////////////// pointers/////////////////////////////////////
// Pointers:-
// A variable that stores the memory
// address of another variable

// address ka koi fix formet nahi hota  alag alag systm ka alag alag hota h 
// but address kabhi change nahi hota.


// syntax:-->
// int age = 25;
// int *ptr = &age;
// int _age =  *ptr;
// &-------------> address ke liye 
// *-------------> value ke liye


// #include<stdio.h>
// int main(){
// int age = 25;
// int *ptr = &age;
// int _age =  *ptr;
// printf("%d\n", _age);
// printf("%d\n", ptr);
// printf("%d\n", *ptr);
// printf("%d", &age);
// return 0;
// }



// Declaring Pointers
// int *ptr;
// char *ptr;
// float *ptr;



// Format Specifier
// printf("%p", &age);
// printf("%p", ptr);
// printf("%p", &ptr);

// #include <stdio.h>
// int main(){
//   int age = 22;
//   int *ptr = &age;
//   // printf("%p\n", &age);
//   printf("%u\n", &age); //haxa decimal ka unsignedint me address convert karke de dega
  
//   // printf("%p\n", &ptr);
//   printf("%u\n", ptr);
//     printf("%u\n", &ptr);
//   return 0;
// }




// Format Specifier
// int age = 22;
// int *ptr = &age;
// int _age =  *ptr;
// printf("%p", age);   -------->22
// printf("%p", *ptr);   -------->22
// printf("%p", *(&age)); -------->22



// #include<stdio.h>
// int main(){



// int age = 22;
// int *ptr = &age;
// int _age =  *ptr;
// printf("%p \n", age);  // -------->22
// printf("%p\n", *ptr);   //-------->22
// printf("%p\n", *(&age));// -------->22

// printf("%d \n", age);  // -------->22
// printf("%d\n", *ptr);   //-------->22
// printf("%d\n", *(&age));// -------->22
// return 0;

// }

// #include<stdio.h>
// int main(){
// int *ptr;
// int x;
// ptr = &x;
// *ptr = 1;
// printf(" x = %d\n",x);
// printf("*ptr = %d\n\n",*ptr);

// *ptr += 5;
// printf(" x = %d\n",x);
// printf("ptr =%d\n\n",*ptr);

// (*ptr)++;
// printf(" x = %d\n",x);
// printf("*ptr = %d\n\n",*ptr);

// return 0;
// }

// Pointer to Pointer
// A variable that stores the memory
// address of another pointer

// Pointer to Pointer
// Syntax
// int **pptr;
// char **pptr;
// float **pptr;
//  Q37 print the value of i from its pointer to pointer.
// #include<stdio.h>
// int main(){
//   float i = 12.0000;
//   float *ptr = &i;
//   float**pptr = &ptr;
  // //float***ppptr = &pptr;
//   printf("%f", ***ppptr);

//   return 0;
// }

/*
Pointers in Function Call
1  Call by Value- We pass value of variable as argument.
2  call by Reference- We pass address of variable as argument.
*/



// #include<stdio.h>
// void square(int n);
// void _square(int *n);
// int main(){
  
//    int num = 4;
//    square(num);
//    printf("num =%d\n",num);

//     _square(&num);
//    printf("num vrefrence =%d\n",num);

//   return 0;

// }
// //call by value.
// void square(int n){
//   n= n*n;
//   printf("square= %d\n", n);
// }
// void _square(int *n){
//     *n= (*n )* (*n);
//   printf("square= %d\n", *n);
// }

// // Q 38) swap 2 num, a & b.
// #include<stdio.h>
// int swap(int a , int b);
// int _swap(int *a , int *b);
// int main(){


//   int x =2, y=5;
   
//   printf("x is = %d & y is= %d\n" ,x, y);
//   swap(x ,y);


// _swap(&x ,&y);
//   printf("x is = %d & y is= %d \n" ,x, y);




//   return 0;
// }//call bye value 

// int swap(int a , int b){
//   int t= a;
//        a= b;
//        b= t;
//        printf("a = %d & b = %d \n\n", a, b);
// }

// // call by reference
// int _swap(int *a , int *b){
//   int t= *a;
//        *a= *b;
//        *b= t;
//        printf("a = %d & b = %d \n", *a, *b);
// }



// // call by refrence 


//  Q rite a fun to calcculate the sum, produc& average of two num// #include<stdio.h>
// void square(int n);
// void _square(int *n);
// int main(){
  
//    int num = 4;
//    square(num);
//    printf("num =%d\n",num);

//     _square(&num);
//    printf("num vrefrence =%d\n",num);

//   return 0;

// }
// //call by value.
// void square(int n){
//   n= n*n;
//   printf("square= %d\n", n);
// }
// void _square(int *n){
//     *n= (*n )* (*n);
//   printf("square= %d\n", *n);
// }

// // Q 38) swap 2 num, a & b.
// #include<stdio.h>
// int sum(int a , int b);
// int _product(int *a , int *b);
// int main(){


//   int x =2, y=5;
   
//   printf("x is = %d & y is= %d\n" ,x, y);
//   swap(x ,y);


// _swap(&x ,&y);
//   printf("x is = %d & y is= %d \n" ,x, y);




//   return 0;
// }//call bye value 

// int swap(int a , int b){
//   int t= a;
//        a= b;
//        b= t;
//        printf("a = %d & b = %d \n\n", a, b);
// }

// // call by reference
// int _swap(int *a , int *b){
//   int t= *a;
//        *a= *b;
//        *b= t;
//        printf("a = %d & b = %d \n", *a, *b);
// }

// Q 40 write a fun to calcilate the sum, produc& average of 2 num. print that average in the main funcation.

// #include<stdio.h>
// int dowork(int a, int b, int *sum, int  *prod , int *avg);
// int main(){
//   int a= 5, b= 2; 
//   int sum, prod,avg;
// dowork(a,  b,&sum,&prod , &avg);
// printf("sum is %d \n product is %d\n avg is %d", sum,prod,avg );
//   return 0;
// }
// int dowork(int a, int b, int *sum, int  *prod , int *avg){
//   *sum = a+b;
//   *prod= a*b;
//   *avg = (a+b)/2;


// }







// ///////////////////Arrays:-//////////////////////////////

// Collection of similar data types stored at
// contiguous memory locations.
// Syntax     _______________ size of array
 //          |              
// int marks[3];   ( int have 4 byte   )
// char name[10];
// float price[2];

// Input & Output
// scanf("%d", &marks[0]);
// printf("%d", marks[0]);



// #include<stdio.h>
// #include<conio.h>
// int main(){
//   // int marks1= 98;
//   // int marks1= 94;     // normal way 
//   // int marks1= 99;




//   //\\\\\\\\\\\\\\\\\\ when we use array\\\\\\\\\\\\\\\\\\




//   int marks[3];
//   printf("enter phy marks\n");
//   scanf("%d", &marks[0]);
//    printf("enter che marks\n");
//   scanf("%d", &marks[1]);
//    printf("enter math marks\n");
//   scanf("%d", &marks[2]);

//   // scanf("%d", &marks[3]); // run time error jo compiler nahi catch kar payega 


//   printf("phy marks =%d \nche marks =%d \nmath marks =%d ", marks[0],marks[1],marks[2]);
// return 0;
// }


// Q 41) wap to enter price of 3 items & print their final cost with gst.


// #include <stdio.h>
// #include <conio.h>
// int main(){

// float item[3];
// printf("item 1 price ");
// scanf("%f", &item[0]);

// printf("item 2 price ");
// scanf("%f", &item[1]);

// printf("item 3 price ");
// scanf("%f", &item[2]);



// printf("final cost with gst %f\n", item[0]+(.18*item[0]));

// printf("final cost with gst %f\n", item[1]+(.18*item[1]));

// printf("final cost with gst %f\n", item[2]+(.18*item[2]));

//   return 0;

// }


// Inititalization of Array
// int marks[ ] = {97, 98, 89};
// int marks[ 3 ] = {97, 98, 89};
// int char [30];//mmemory reserve ------>  30*1=30 --BYTE

//mmemory reserve ------>  3*4=12 --BYTE



// #include <stdio.h>
// #include <conio.h>
// int main(){

// float item[3]= { 100, 200, 300.0};
// // printf("item 1 price ");
// // scanf("%f", &item[0]);

// // printf("item 2 price ");
// // scanf("%f", &item[1]);

// // printf("item 3 price ");
// // scanf("%f", &item[2]);



// printf("final cost with gst %f\n", item[0]+(.18*item[0]));

// printf("final cost with gst %f\n", item[1]+(.18*item[1]));

// printf("final cost with gst %f\n", item[2]+(.18*item[2]));

//   return 0;

// }



/*

Pointer Arithmetic-------------------------->
Pointer can be incremented & decremented.

 
                4
     < --------------------- >
 _______________age_________________
|_________|_____22_______|__________|
    1996        2000          2004  is address ko point karega 
                                  ^
                                  |
      __________                  | 
     |          |ptr++ karne per  |
     |   2000   |--------------->2004
     |__________|

ptr++ karne per ak interger age jayega    


int age = 22;
int *ptr = &age;
ptr++; // data pype ka size increase kar deta h.



 case 1:------------> int -4 bye add
*/

// #include <stdio.h>
// int main(){
//   int age = 22;
//   int *ptr = &age;
//   printf("%u\n", ptr);
//   ptr++;
//   printf("%u\n", ptr ); 
//    ptr++;
//   printf("%u", *ptr );
//   return 0;
// }


// case 2-------->float----4 bye add

// #include <stdio.h>
// int main(){
//   float age = 2.2;
//   float *ptr = &age;
//   printf("%u\n", ptr);
//   ptr++;
//   printf("%u\n", ptr ); 
//    ptr++;
//   printf("%u", ptr );
//   return 0;
// }


// case 2-------->char----1 bye add

// #include <stdio.h>
// int main(){
//   char str= '*';
//   char *ptr = &str;
//   printf("%u\n", ptr);
//   ptr++;
//   printf("%u\n", ptr ); 
//    ptr++;
//   printf("%u", ptr );
//   return 0;
// }




// - We can also subtract one pointer from another
// - We can also compare 2 pointers


// #include<stdio.h>
// int main(){
//   int age = 23;
//   int _age = 24;
//   int *ptr = &age;
//   int *_ptr = &_age;

//   printf("diffrence =  %u", ptr-_ptr);
//   _ptr = &age;
//   printf("diffrence =  %u",ptr==_ptr);
//   return 0;

// }


// Array is a Pointer  - - -> array kka frist index khud me pointer hota h 
// int *ptr = &arr[0]; or
// int *ptr = arr; 


// Traverse an Array------------>
// #include<stdio.h>
// int main(){
//   int adhar[5];
//   int *ptr= &adhar[0];
//   for(int i=0; i<5; i++){
//     printf("%d index ", i);
//     scanf("%d", &adhar[i]);
//   }
// for(int i= 0; i<5; i++){
//   printf("%d index =%d\n",i,adhar[i]);
// }
// return 0;
// }


// Arrays as Function Argument------------->

// function declaration-----
// void printNumbers (int arr[ ], int n)
//             or
// void printNumbers (int *arr, int n)

// funcation call-----
// printNumbers(arr, n);



// #include<stdio.h>
// int fun(int *arr, int n);
// int main(){
//   int arr[]= {1,22,3,4,5,6};
//   fun(arr, 6);
//   return 0;
// }
// // int fun(int arr[], int n)//or
// int fun(int *arr , int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("num is %d\t", arr[i]);
//   }
//   printf("\n");
  
// }


// Multidimensional array---------------------->
// 2D array
// int arr[][]= {{1,3},{2,4}};   // Declare
                  // C1      c2
                  // 1       2
                  // 3       4
                  
                   
// //access    
// arr[0][0]
// arr[0][1]
// arr[1][0]
// arr[1][1]


// 2 student ke 3 sub ke nam

// #include<stdio.h>
// int main(){
//  int marks[2][3];
//  marks[0][0]= 90;
//  marks[0][1]= 90;
//  marks[0][2]= 90;

 
 
//  marks[1][0]= 90;
//  marks[1][1]= 90;
//  marks[1][2]= 90;

//  printf("%d", marks[0][0]);
//   return 0;
// }

// write a funcation to count the num of odd number in an array.


// # include<stdio.h>
// int countodd(int arr[], int n); // int n ---> size of array je jaruri h
// int main(){
// int arr[]= {1,2,3,4,5,6};
// printf("%d", countOdd(arr, 6));
// return 0;
// }
// int countodd(int arr[], int n){
// int count =0;
// for (int i = 0; i < n; i++)
// {
//    if(arr[i]%2!=0){
//     count++;
//    }
// }
// return count;

// }


// #include<stdio.h>
// int fun(int arr[] , int n);
// int main(){
// int arr[]= {1,2,3,4,5,6,7,8,10,11,15,14,13};
// printf("%d",fun(arr , 20));

//   return 0;
// }
// int fun(int arr[], int n){
//  int count =0;
// for (int i = 0; i < n; i++)
// {
//   if(arr[i]%2!=0){
//     count++;
//   }
// }
// return count;
// }

// Q43 
// int arr[]={1,2,3,4,5}
// for the given array, what will the following give?

// a} *(arr+2)-------------o/p=3
// b} *(arr+5)-------------o/p=err


// #include<stdio.h>
// int main(){
// int arr[]= {1,2,3,4,5,};
// printf("%d\n", *(arr+2));
// printf("%d", *(arr+5));

// return 0;
// }



/*Q44} write a fun to reverse an array.



EVEN NUMBER--
 _____________________________________
|        |         |         |        |      
|___1____|____2____|____3____|____4___|
   |          |      |      |        |
   |          |______|______|        |
   |________________|________________|                
                    |
                    |
 ___________________|__________________
|        |         |         |        |
|___4____|____3____|____2____|____1___|
                    
                    


Odd number--
                    
 ________________________________________________
|        |         |         |        |          |
|___1____|____2____|____3____|____4___|___5______|
   |          |         |            |        |
   |          |_________|____________|        |
   |________________    |_____________________|                
                        |
                        |
 _______________________|______________________
|        |         |         |        |       |
|___5____|____4____|____3____|____2___|___1___|
                    



 ________________________________________________
|        |         |         |        |          |
|___1____|____2____|____3____|____4___|___5______|
    (0)        (1)      (2)       (3)     (4)

___________________________________
 arr[i]       |           n-i-1
______________|____________________
      0       |           6-0-1=5
      1       |           6-1-1=4
      2       |           6-2-1=3
             

// approach---->
for (int  i = 0; i < n/2; i++)
{
  firstval = arr[i];0
  secondval = arr[n-i-1];5


  // exchangevalue--->
  arr[i]= secondval; 5
  arr[n-i-1]=firstvalu;
}
*/


// #include<stdio.h>
// int reverse(int arr[], int n);
// int prtarr(int arr[], int n);

// int main(){
// int arr[]= {1,2,3,4,5,6};
// for (int  j= 0; j <6; j++)
// {
//   printf("%d", j);
// }


// reverse( arr, 6);
// prtarr(arr, 6 );

// return 0;

// }

// int reverse(int arr[], int n){
//   for (int i = 0; i < n/2; i++)
//   {
//     int firstValue = arr[i];//0
//     int secondValue = arr[n-i-1]; //5

// // reverce array
// arr[i]= secondValue;//5
// arr[n-i-1]= firstValue;
// //  printf("%d\n\t", arr[i]);
//   }
 

// }
// int prtarr(int arr[], int n){
// for (int i = 0; i < n; i++)
// {
//   printf("%d\t", arr[i]);
// }}


// Q45} wap to store the first n fibonachi number .



// #include<stdio.h>
// #include<conio.h>
// int main(){
// int n;


// printf("enter the number");
// scanf("%d", &n);

// int fib[n];
// fib[0]=0;
// fib[1]=1;
// for (int i = 2; i < n; i++)
// {
//   fib[i]= fib[i-1]+fib[i-2];
//   printf("%d\t", fib[i]);
// }

//   return 0;

// }

// print nth term in fboniche series using recursion
// #include<stdio.h>
// #include<conio.h>
// int fib(int n);
// int main (){
//   int n;
//   // fib(5);
//   printf("nth term %d", fib(7));
//   return 0;                           
  
// }
// int fib(int n){
//   //base case
//   if(n==0){
//     return 0;
//   }
//   if (n==1){
//     return 1;

//   }
//   int fibNm1= fib(n-1);
//   int fibNm2 = fib(n-2);
//  int  fibN = fibNm1+fibNm2;
// //  printf(" fibonic of num %d is %d \n", n , fibN);
//  return fibN;
// }


// Q46) create a 2D array, storing the table of 2,3.
// 2 d array ke ander second dimension batana padega .
// #include<stdio.h>          row(2)   //10    2
// void storet(int arr[][10], int n, int m, int num);
// int main(){
//   return 0;

// }

// void storet(int arr[][10], int n, int m, int num){
// for (int  i = 0; i < m; i++)
// {
//   arr[n][i]]= n
// }



// }

/*\\\\\\\\\\\\\\\\\\\\ string\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Strings
A character array terminated by a '\0' (null character)
null character denotes string termination.


EXAMPLE--->
char name[ ] = {'S', 'H', 'R', 'A', 'D', 'H', 'A','\0'};
char class[ ] = {'A', 'P', 'N', 'A', ' ', 'C', 'O', 'L', 'L', 'E', 'G', 'E', '\0'};



Initialising Strings0----->
char name[ ] = {'S', 'H', 'R', 'A', 'D', 'H', 'A','\0'};
char class[ ] = {'A', 'P', 'N', 'A', ' ', 'C', 'O', 'L', 'L', 'E', 'G', 'E', '\0'};
char name[ ] = "SHRADHA";
char class[ ] = "APNA COLLEGE";


*/

// note  ------------>
// #include<stdio.h>
// int main()
// { 
//   char name[]= {1,2,3,4,5,6,7,8,9};
 
//   printf("%s", name);
// }


// #include<stdio.h>
// int main()
// { 
//   char name[]= {'a','b','c','d'}; 
//   printf("%s", name);

//   return 0;
// }

// EXTRA VALUE USE KARTA H ISLIYE NULL CHAR USE KARTe H 


/*
What Happens in Memory?
char name[ ] = {'S', 'H', 'R', 'A', 'D', 'H', 'A','\0'};
char name[ ] = "SHRADHA";
 _________________________________________________________________________
|       |         |         |       |         |         |       |         |
|__S___ |___H____ |___R____ |___A___|____D___ |____H___ |___A___|___/0____|
    001     002       003       004       005     006       007       008


Q 47) create string firstName & lasteName to store details of user & print all the character using a loop.
*/
// isme one bye character print ho rahe h for loop ki help se 

// #include<stdio.h>
// void fun(char arr[]);
// int main(){
//   char name[]= "amnesh";
//   char lname[]= "pal";
//   fun(name);
//   fun(lname); 
//   return 0;
// }
// void fun(char arr[]){
//   for (int i = 0; arr[i]!='\0'; i++)
//   {
//     printf("%c", arr[i]);
//   }
//   printf("\n");
// }

// String Format Specifier
// "%s"
// printf("%s", name);
// char name[ ] = "Shradha"

// %s ki help se print karte h 


// WAP to enter first name 
// #include<stdio.h>
// #include<conio.h>
// int main(){
// char fname[100];
// printf("enter the name ");
// scanf("%s", fname ); //not need to use scanf("%s", &name );
// // scanf("%s", &name );
// printf("your name is %s ", fname );
// return 0;

// }

// wap to enter first or last name 

// #include<stdio.h>
// #include<conio.h>
// int main(){
// char fullname[100];
// printf("enter the name ");
// scanf("%s", fullname ); //not need to use scanf("%s", &name );
// // scanf("%s", &name );
// printf("your name is %s ", fullname );
// return 0;

// }

// NOTE :- jab hm string use karte h to scanf space count nahi karta 

/*

IMPORTANT
scanf( ) cannot input multi-word strings with spaces
Here,
gets( ) & puts( ) come into picture




String Functions
1)gets(str) -------->Dangerous & Outdated(use nahi karna chahiye ise hacker hack kar lete h data )        
input a string                                                 
(even multiword)

2} puts(str)        
output a storing 




fgets( str, n, file)

stops when n-1
chars input or new
line is entered

*/


// #include<stdio.h>

// int main(){
//   char str[100];
//   printf("enter the paragraph ");
//   gets(str);
//   puts(str);
// }

// fgets( str, n, file)

// stops when n-1
// chars input or new
// line is entered

// #include<stdio.h>

// int main(){
//   char str[100];
//   printf("enter the paragraph ");
//   fgets(str,100,stdin);  // str-->string, n--> size, stdin-->file(), stdin --> standerd input output
//   puts(str);
// return 0;
// }



// String using Pointers------------>

// char *str = "Hello World";

// Store string in memory & the assigned address is stored in the char pointer 'str'.

// char *str = "Hello World";  // //can be reinitialized
// char str[ ] = "Hello World";   // //cannot be reinitialized



// // EXAMPLE 1:
// #include<stdio.h>
// int main(){
// char *str= "amneshpal";
// puts(str);
//  str = "palamnesh";
//  puts(str);


// //isme reinitialize kar sakte h.
// }


// // EXAMPLE 2:
// #include<stdio.h>
// int main(){
// char str[]= "amneshpal";
// puts(str);
//  str[] = "palamnesh"; //error
//  puts(str);


// //isme reinitialize nahi kar sakte h.
// }


// 49) make a program that input user's name & prints its lenth.
// #include<stdio.h>
// int count(char arr[]);
// int main(){
// char name[100];
// printf("enter your name ");
// fgets(name, 100,stdin);
// printf("%d", count(name) );


//   return 0;
// }

// int count(char arr[]){
//   int count=0;
//   for (int  i = 0; arr[i]!='\0'; i++)
//   {
//   count++;
//   }
//   return count-1;
// }


/*
Standard Library Functions-------------->
1 strlen(str)
count number of characters excluding '\0'
<string.h>

2 strcpy(newStr, oldStr)
copies value of old string to new string
<string.h>

3 strcat(firstStr, secStr)
concatenates first string with second string
<string.h>
firstStr should be large
enough

4 strcmp(firstStr, secStr)
Compares 2 strings & returns a value
<string.h>
0 -> string equal
positive -> first > second (ASCII)
negative -> first < second (ASCII)
*/

// ---------------------------------------------------------------------
// Standard Library Functions-------------->
// 1 strlen(str)
// count number of characters excluding '\0'
// <string.h>


// #include<stdio.h>
// #include<string.h>
// int main(){
// char name[100];
// printf("enter your name ");
// fgets(name,100,stdin);  // is funcation ke wajha se -1 use karna padta h varna srtlen excluding 0 value count karta h 
// // printf("%d", count(name) );
// int convertname =strlen(name);
// printf("lenth is %d",convertname-1);
// // printf("lenth is %ld",strlen(name)-1);
//   return 0;
// }

// NOTE : ------- strlen long int store kaarta h isliye ise phle simple int m convert karna padta 

// 2 strcpy(newStr, oldStr)
// copies value of old string to new string
// <string.h>

// #include<stdio.h>
// #include<string.h>
// int main(){
// char oldstr[]="amneshpal";
// char newstr[] ="palamnesh";
// strcpy(newstr,oldstr);
// puts(newstr);
// }



// 3 strcat(firstStr, secStr)
// concatenates first string with second string
// <string.h>
// firstStr should be large
// enough
// #include<stdio.h>
// #include<string.h>
// int main(){
// // char Friststr[]= "amnesh"; // error dega yha size bada hona chahiye 
// char Friststr[100]= "amnesh ";
// char secondstr[]= "pal";
// strcat(Friststr, secondstr);
// puts(Friststr);



//   return 0;
// }



// 4 strcmp(firstStr, secStr) comparission
// Compares 2 strings & returns a value
// <string.h>
// 0 -> string equal
// positive -> first > second (ASCII)
// negative -> first < second (ASCII)


// #include<stdio.h>
// #include<string.h>
// int main(){ 
// char friststr[]="hhh";// hhha
// char secondstr[] ="hhh";//hhhb ---->-1 ayega 
// strcmp(friststr,secondstr);
// puts(friststr);
// printf("%d", strcmp(friststr,secondstr)); same h to 0 ayega 
// }

// Q50) tke a string input the user using %c.
// #include<stdio.h>
// #include<conio.h>
// int main(){
// char str[100];
// char ch;
// int i =0;
// while(i!='\n'){
//   scanf("%c", &ch);
//   str[i]=ch;
// i++; 
// }
// str[i]= '\0';
// puts(str);
//   return 0;
// }


// Q 51)
// salting --- pwd secure karne ki technique ko salting khte h 
// find the salted form of a passwor entered by uder if the salt is 123 & added at the end.


// #include<stdio.h>
// #include<string.h>
// void fun(char password[]);
// int main(){
//   char password[100];
//   printf("enter the pws ");
//   scanf("%s", password);
// fun(password);
//   return 0;
// }
// void fun(char password[]){
//   char salt[] ="@123";
//  strcat(password,salt);
//  puts(password);
// }

// Q 52 write a funcation named slice, which takes a string & returns a sliced dtring from index n to m.
// #include<stdio.h>
// void slice(char str[], int n, int m);
// int main(){
// char str[]= "helloamnesh";
// slice(str, 2, 6);
//   return 0;
// }
// void slice(char str[], int n, int m){
// char newstr[100];
// int j=0;
// for (int i = n; i <= m; i++,j++)
// {
//    newstr[j]= str[i];
// }
// newstr[j]='\0';
// puts(newstr);
// }

// Q53) write a funcation to count the  occurrence of vowels.


// #include<stdio.h>
// int fun(char str[]);
// int main(){
//   char str[]="sharaddha";
//   fun(str);
//   return 0;
// }

// int  fun(char str[]){
//   int count= 0;
//   for (int  i = 0; str[i]!='\0'; i++)
//   { if(str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='e')
//     count++;
   
//   }
//    printf("that is vowel, ");
//   printf("num of value is %d", count);
// }



//Q54)check if a given character is present in a string or not.
// #include<stdio.h>
// void fun(char str[], char ch);
// int main(){
//   char ch = 'e';
// char str[]= "amnesh";
// // printf("enter the charecter ");
// // scanf("%d", &ch);
// fun(str, ch);

// return 0;
// }


// void fun(char str[], char ch){
// for (int i = 0; str[i] !='\0'; i++)
// {
//   if (str[i]==ch){
//     printf("charcter present in string");
//     return;
//   }
// }
// printf("charcter not present in string");
// }


// #include<stdio.h>
// int main(){
// char a;  
// printf("enter the alfabet");
// scanf("%c", &a);// scanf("%s",&a);
// printf("%d",a);

//   return 0;
// }




/////////////////////////Structures-------------->//////////////////
// a collection of values of different data types.



// EXAMPLE :-

// name (String)
// For a student store the following :
// roll no (Integer)
// cgpa (Float)


// Syntax----->

// struct student {
//  char name[100];
//  int roll;
//  float cgpa;
// };

// struct student s1;    // struct student user define daata type
// s1.cgpa = 7.5;

// #include<stdio.h>
// #include<string.h>
// struct student{
// int roll;
// float cgpa;
// char name[100];
// };
// int main(){
//   struct student s1;
// s1.roll =675;
// s1.cgpa= 34.5;
// //s1.name ="amnesh"; //error
//   strcpy(s1.name, "amnesh");
//   printf("student name %s\n",s1.name );
//   printf("student name %d\n",s1.roll );
//   printf("student name %f\n",s1.cgpa);
//   return 0;
// }



// Structures in Memory
// struct student {
// char name[100];
// int roll;
// float cgpa;
// }

// name        roll           cgpa
// 2010        2110           2114


// structures are stored in contiguous memory locations

// Q55) write a program to store the data of 3 student.


// #include<stdio.h>
// #include<string.h>
// struct student{
// int age;
// int roll;
// float cgpa;
// char name[100];
// };
// int main(){
// struct student s1;
// s1.age=54;
// s1.roll=001;
// s1.cgpa=80.0;
// strcpy(s1.name,"shradhha ");

// printf("bandi 1 name is %s \n",  s1.name);
// printf("sharaddha age is  %d \n", s1.age);
// printf("sharaddha roll is %d \n", s1.roll);
// printf("sharaddha cgpa is %f \n", s1.cgpa);

// printf("\n\n");

// struct student s2;
// s2.age= 43;
// s2.roll= 002;
// s2.cgpa=.9995;
// strcpy(s2.name,"nancy");

// printf("bandi 2 name is %s \n", s2.name);
// printf("nancy age is %d\n", s2.age);
// printf("nancy roll is %d\n", s2.roll);
// printf("nancy cgpa is %f\n", s2.cgpa);


// printf("\n\n");

// struct student s3;
// s3.age= 43;
// s3.roll= 002;
// s3.cgpa=.9995;
// strcpy(s3.name,"angali");

// printf("bandi 3 name is %s \n", s3.name);
// printf("angali age is %d\n", s3.age);
// printf("angali roll is %d\n", s3.roll);
// printf("angali cgpa is %f\n", s3.cgpa);


// printf("\n\n");

// struct student s4;
// s4.age= 43;
// s4.roll= 002;
// s4.cgpa=.9995;
// strcpy(s4.name,"akansha");

// printf("bandi 4 name is %s \n", s4.name);
// printf("akansha age is %d\n", s4.age);
// printf("akansha roll is %d\n", s4.roll);
// printf("akansha cgpa is %f\n", s4.cgpa);



// printf("\n\n");

// struct student s5;
// s5.age= 43;
// s5.roll= 002;
// s5.cgpa=.9995;
// strcpy(s5.name,"soniya ");

// printf("student 1 name is %s \n", s5.name);
// printf("soniya age is %d\n", s5.age);
// printf("soniya roll is %d\n", s5.roll);
// printf("soniya cgpa is %f\n", s5.cgpa);





// printf("\n\n");

// struct student s6;
// s6.age= 43;
// s6.roll= 002;
// s6.cgpa=.9995;
// strcpy(s6.name,"love");

// printf("student 1 name is %s \n", s6.name);
// printf("love age is %d\n", s6.age);
// printf("love roll is %d\n", s6.roll);
// printf("love  cgpa is %f\n", s6.cgpa);

// return 0;
// }




// no need to declare variable again and again
// group data management 

// Benefits of using Structures
// - Good data management/organization
// - Saves us from creating too many variable



// Array of Structures
// struct student COE[100];
// struct student ECE[100];
// struct student IT[100];


// ACCESS
// IT[0].cgpa = 7.6;
// IT[0].roll = 200;

// #include<stdio.h>
// #include<string.h>
// struct student{
// int age;
// int roll;
// float cgpa;
// char name[100];
// };
// int main()
//  { 
//       // ec== electronic
//   struct student ece[100];
//   ece[0].roll=001;
//   ece[0].age= 24;
//   ece[0].cgpa= 822.2;
//   strcpy(ece[0].name,"amnesh");

//   ece[1].roll=001;
//   ece[1].age= 24;
//   ece[2].cgpa= 822.2;
//   strcpy(ece[2].name,"amnesh");

//   ece[3].roll=001;
//   ece[3].age= 24;
//   ece[3].cgpa= 822.2;
//   strcpy(ece[3].name,"amnesh");

//   printf("name %s\n ",ece[0].name);
//    printf("age %d\n ",ece[0].age);
//     printf("roll %d\n ",ece[0].roll);
//      printf("cgpa %f\n ",ece[0].cgpa);

//        printf("name %s\n ",ece[2].name);
//    printf("age %d\n ",ece[2].age);
//     printf("roll %d\n ",ece[2].roll);
//      printf("cgpa %f\n ",ece[2].cgpa);

//        printf("name %s\n ",ece[3].name);
//    printf("age %d\n ",ece[3].age);
//     printf("roll %d\n ",ece[3].roll);
//      printf("cgpa %f\n ",ece[3].cgpa);



//   // \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

         
//       //  cse==computer science
//   struct student cse[100];
//   cse[0].roll=001;
//   cse[0].age= 24;
//   cse[0].cgpa= 822.2;
//   strcpy(cse[0].name,"b");

//   cse[1].roll=001;
//   cse[1].age= 24;
//   cse[2].cgpa= 822.2;
//   strcpy(cse[2].name,"c");

//   cse[3].roll=001;
//   cse[3].age= 24;
//   cse[3].cgpa= 822.2;
//   strcpy(cse[3].name,"d");



//  printf("name %s\n ",cse[0].name);
//    printf("age %d\n ",cse[0].age);
//     printf("roll %d\n ",cse[0].roll);
//      printf("cgpa %f\n ",cse[0].cgpa);

//        printf("name %s\n ",cse[2].name);
//    printf("age %d\n ",cse[2].age);
//     printf("roll %d\n ",cse[2].roll);
//      printf("cgpa %f\n ",cse[2].cgpa);

//        printf("name %s\n ",cse[3].name);
//    printf("age %d\n ",cse[3].age);
//     printf("roll %d\n ",cse[3].roll);
//      printf("cgpa %f\n ",cse[3].cgpa);


//   struct student ml[100];
//   ml[0].roll=001;
//   ml[0].age= 24;
//   ml[0].cgpa= 822.2;
//   strcpy(ece[0].name,"e");

//  ml[1].roll=001;
//   ml[1].age= 24;
//   ml[2].cgpa= 822.2;
//   strcpy(ml[2].name,"f");

//   ml[3].roll=001;
//   ml[3].age= 24;
//   ml[3].cgpa= 822.2;
//   strcpy(ml[3].name,"g");


//    printf("name %s\n ",ml[0].name);
//    printf("age %d\n ",ml[0].age);
//     printf("roll %d\n ",ml[0].roll);
//      printf("cgpa %f\n ",ml[0].cgpa);

//        printf("name %s\n ",ml[2].name);
//    printf("age %d\n ",ml[2].age);
//     printf("roll %d\n ",ml[2].roll);
//      printf("cgpa %f\n ",ml[2].cgpa);

//        printf("name %s\n ",ml[3].name);
//    printf("age %d\n ",ml[3].age);
//     printf("roll %d\n ",ml[3].roll);
//      printf("cgpa %f\n ",ml[3].cgpa);


//   return 0;
// }






// Initializing Structures-- ak line me bhi initialize kar sakte h 
// struct student s1 = { "shradha", 1664, 7.9};
// struct student s2 = { "rajat", 1552, 8.3};
// struct student s3 = { 0 };



// #include<stdio.h>
// struct employee{
// int age;
// float salary;
// int cgpa;
// };
// int main(){
// struct employee s1= {23, 55000.90, 666};
// printf("%d",s1.cgpa);
// }






// Pointers to Structures------------->
// struct student *ptr;
// ptr =&s1;
// struct student s1

// #include<stdio.h>
// struct employee{
// int age;
// float salary;
// int cgpa;
// };
// int main(){
// struct employee s1= {23, 55000.90, 666};
// // printf("%d",s1.cgpa);

// struct employee *ptr =&s1;
// printf("%d", (*ptr).age);

// return 0;
// }



// Arrow Operator----------------->

// (*ptr).code ptr->code


// #include<stdio.h>
// #include<string.h>
// struct student{
// int age;
// int roll;
// char name[100];
// };
// int main(){
//   struct student s1 = {21,001, "amnesh"};
//   // strcpy(s1.name,"amnesh");
//     struct student *ptr = &s1;
//     printf("%d\n", ptr->age);
//       printf("%s\n", ptr->name);
//         printf("%d\n", ptr->roll);
// return 0;
// }


// Passing structure to function
// //Function Prototype
// void printInfo(struct student s1);


// #include<stdio.h>
// #include<string.h>
// struct student{
// int age;
// char name[100];
// int roll;
// };
// void fun(struct student s1);
// int main(){
// struct student s1= {21, "amnesh", 002 };
// fun(s1);
// return 0;
// }
// void fun(struct student s1){

// printf("student information \n");
// printf("student roll num %d", s1.roll);
// printf("student roll num %d", s1.age);
// printf("student roll num %s", s1.name);
// }



// typedef Keyword------------>
// used to create alias for data types
// syntex-->
// #include<stdio.h>
// #include<string.h>
// typedef struct  computerengineeringstudent{
// int age;
// int roll;
// char name;
// }coe;
// int main(){
//   coe s1;
//   s1.age =32;
//   s1.roll =443;
//   printf("%d", s1.age);
//   return 0; 
// }

// coe student1;

// Q56 enter address(house no, block, city, state)of 5 people.


// #include<stdio.h>
// #include<string.h>
// typedef struct addressofpeople{
//   int houseNo;
//   char block[50];
//   char city[100];
//    char state[100];
// }aop;
// int main(){
// aop people1;
// people1.houseNo=24;
// strcpy(people1.block,"A");
// strcpy(people1.city,"MODINAGAR");
// strcpy(people1.state,"UP");

// printf("%d\n",people1.houseNo);
// printf("%s\n",people1.city);
// printf("%s\n",people1.block);
// printf("%s\n",people1.state);

// printf("\n");
// aop people2;
// people2.houseNo=24;
// strcpy(people2.block,"A");
// strcpy(people2.city,"MODINAGAR");
// strcpy(people2.state,"UP");

// printf("%d\n",people2.houseNo);
// printf("%s\n",people2.city);
// printf("%s\n",people2.block);
// printf("%s\n",people2.state);

// printf("\n");
// aop people3;
// people3.houseNo=24;
// strcpy(people3.block,"A");
// strcpy(people3.city,"MODINAGAR");
// strcpy(people3.state,"UP");

// printf("%d\n",people3.houseNo);
// printf("%s\n",people3.city);
// printf("%s\n",people3.block);
// printf("%s\n",people3.state);

// printf("\n");
// aop people4;
// people4.houseNo=24;
// strcpy(people4.block,"A");
// strcpy(people4.city,"MODINAGAR");
// strcpy(people4.state,"UP");

// printf("%d\n",people4.houseNo);
// printf("%s\n",people4.city);
// printf("%s\n",people4.block);
// printf("%s\n",people4.state);


// printf("\n");
// aop people5;
// people5.houseNo=24;
// strcpy(people5.block,"A");
// strcpy(people5.city,"MODINAGAR");
// strcpy(people5.state,"UP");

// printf("%d\n",people5.houseNo);
// printf("%s\n",people5.city);
// printf("%s\n",people5.block);
// printf("%s\n",people5.state);
//   return 0;
// }


// USING FUNCATION

// #include<stdio.h>
// #include<string.h>
// struct personlinfo{
//   int houseNo;
//   int block;
//   char city[100];
//   char state[100];
// };
// void  fun(struct personlinfo adds);
// int main(){
//   struct personlinfo adds[5];
//   printf("enter the info for peron 0: ");
//   scanf("%d", &adds[0].houseNo);
//   scanf("%d", &adds[0].block);
//   scanf("%s", adds[0].city);
//   scanf("%s", adds[0].state);


//   printf("enter the info for peron 1: ");
//   scanf("%d", &adds[1].houseNo);
//   scanf("%d", &adds[1].block);
//   scanf("%s", adds[1].city);
//   scanf("%s", adds[1].state);

//   printf("enter the info for peron 2: ");
//   scanf("%d", &adds[2].houseNo);
//   scanf("%d", &adds[2].block);
//   scanf("%s", adds[2].city);
//   scanf("%s", adds[2].state);



//     printf("enter the info for peron 3: ");
//   scanf("%d", &adds[3].houseNo);
//   scanf("%d", &adds[3].block);
//   scanf("%s", adds[3].city);
//   scanf("%s", adds[3].state);

//     printf("enter the info for peron 4: ");
//   scanf("%d", &adds[4].houseNo);
//   scanf("%d", &adds[4].block);
//   scanf("%s", adds[4].city);
//   scanf("%s", adds[4].state);
 

//   fun(adds[0]);
//   fun(adds[1]);
//   fun(adds[2]);
//   fun(adds[3]);
//   fun(adds[4]);

//   return 0;
// }

// void  fun(struct personlinfo adds){
//   printf("address is : %d, %d, %s, %s \n\n", adds.houseNo,adds.block,adds.city, adds.state );
// }


// #include<stdio.h>
// #include<string.h>
// struct student 
// {
//   int houseNo;
//   int block;
//   char city[100];
//   char state[100];
// };
// void fun( struct student s1);

// int main(){
//   struct student s1[5];
//   printf("enter the address of student 0");
//   scanf("%d", &s1[0].houseNo);
//   scanf("%d", &s1[0].block);
//   scanf("%s", s1[0].city);
//   scanf("%s", s1[0].state);


//     printf("enter the address of student 0");
//   scanf("%d", &s1[1].houseNo);
//   scanf("%d", &s1[1].block);
//   scanf("%s", s1[1].city);
//   scanf("%s", s1[1].state);


//     printf("enter the address of student 0");
//   scanf("%d", &s1[2].houseNo);
//   scanf("%d", &s1[2].block);
//   scanf("%s", s1[2].city);
//   scanf("%s", s1[2].state);


//     printf("enter the address of student 0");
//   scanf("%d", &s1[3].houseNo);
//   scanf("%d", &s1[3].block);
//   scanf("%s", s1[3].city);
//   scanf("%s", s1[3].state);


//     printf("enter the address of student 0");
//   scanf("%d", &s1[4].houseNo);
//   scanf("%d", &s1[4].block);
//   scanf("%s", s1[4].city);
//   scanf("%s", s1[4].state);


//   fun( s1[0]);
//   fun( s1[1]);
//   fun( s1[2]);
//   fun(s1[3]);
//   fun(s1[4]);

//   return 0;
// }
// void fun( struct student s1){
//   printf("address is %d,%d,%s,%s",s1.houseNo, s1.block,s1.city,s1.state);

// }



// Q57 create a structer to store vectors. then make a funcation to return sum of 2 vectors
// X1i+Y1j
// X2i+Y2j

// (X1+X2)i+(Y1+Y2)j



// #include<stdio.h>
// struct vector{
//   int x;
//   int y;
// };

// void  calcsum(struct vector v1, struct vector v2, struct vector sum);
// int main(){
// //                   x  y
//   struct vector v1= {5,10};
//   struct vector v2= {3,7};
//   struct vector sum= {0};

// calcsum(v1,v2,sum);

//   return 0;
// }
// void  calcsum(struct vector v1, struct vector v2, struct vector sum){

// sum.x=v1.x+v2.x;
// sum.y=v1.y+v2.y;

// printf("sum of x is : %d\n",sum.x);
// printf("sum of x is : %d\n",sum.y);

// }



// Q58)create a structure to store complex num.(use arrow operator)

// #include<stdio.h>
// struct complex
// {
//   int real;
//   int img;
// };
// int main(){
// struct complex s1={2,5};
// struct complex *ptr= &s1;
// printf("real part =%d\n",ptr->real);
// printf("img part =%d\n",ptr->img);
//   return 0;
// }


// Q59) you have to store the marks of 30 student in class.
// what will you use?

// a) array of  float 10 
// b) structure 


// ans) is. array of  float 10 

// 60) make a structure to store bank account information of a customer of abc bank .also an alias for it.


// #include<stdio.h>
// typedef struct accountdetail
// {
//    int acNo;
//    char name[100];

// }acd;

// int main(){
// acd A = {0000001,"amnesh"};
// acd B = {0000002,"love "};
// acd C = {0000003,"sharaddha"};

// printf("%d\n%s", A.acNo,A.name);
// printf("\n%d\n%s", B.acNo,B.name);
// printf("\n%d\n%s", C.acNo,C.name);

// return 0;  
// }


/*########################### Cheapter  10 FILE IO ################################

_______RAM_____________                       __________HARD DISK_____
|                     |                      |                        |
|                     |                      |                        |
|                     |   -----------------> |                        |
|                     |                      |                        |
|                     |   <----------------- |                        |
|                     |                      |                        |
|                     |                      |                        |
|_____________________|                      |________________________|

    voletile                                            non voletile 

   Hamara programe Ram ke ander hota h  



File IO
 file me ak container hota h 
FILE - container is a storage device to store data

- Contents are lost when program terminates. kiuki program RAM me hota h
- Files are used to persist the data 
- RAM is volatile


Operation on Files---->
Create a File
Open a File
Close a File
Read from a File
Write in a File


Types of Files---->\

Text Files
textual data ----- sense bana sakte 
.txt, .c. .java 



Binary Files -------sense nahi bana sakte 
binary data
.exe, .mp3, .jpg


File Pointer-->
FILE is a (hidden)structure that needs to be created for opening a file
A FILE ptr that points to this structure & is used to
access the file.

syntex--->
FILE *fptr;

Opening a File------->
fptr = fopen("filename", mode);
FILE *fptr;


Closing a File------->
fclose(fptr)


File Opening Modes------> ____
"r" open to read              |   agar file na ho to ye dono NUll dete h 
"rb" open to read in binary___|

"w" open to write            --------|       
"wb" open to write in binary --------| agar file nahi h to file ko create kar deta h or h to sab delete karke apna code likhta h

"a" open to append -------> phle vala code nahi chuta ae code ko add kar deta h  


*/

// best practis 
// Check if a file exists before reading from it.

// #include<stdio.h>
// int main(){
// FILE *fptr;
// fptr= fopen("test.text","w");
// if(fptr==NULL){
//   printf("file dosent exist\n");
// }
// else{
//   fclose(fptr);
// }
//   return 0;
// }





/*
// Reading from a file--->
// char ch
// fscanf(fptr, "%c", &ch);
           |      |     |_____address variable 
     file pointer |
                  |
            file specifire


*/


// reading a file ------>

// #include<stdio.h>
// int main(){
// FILE *fptr;
// fptr=fopen("test.text","r");

// char ch;
// fscanf(fptr,"%c",&ch);
// printf("%c", ch);
//   return  0;

// }



// Writing to a file
// fprintf(fptr, "%c", ch);

// #include<stdio.h>
// int main(){
// FILE *fptr;
// // fptr=fopen("test.text","w");
// fptr=fopen("test.text","a");
// fprintf(fptr,"%c", 'O');
//   return  0;

// }


// Read & Write only  char

// fgetc(fptr)  ------>read
// fputc( 'A', fptr)---->write

// #include<stdio.h>
// int main(){

// FILE *fptr;
// fptr = fopen("test.text", "r");
// fptr = fopen("test.text", "w");


// // printf("%c\n", fgetc(fptr)); read ke liye 
// fputc('m',fptr);   
// fputc('a',fptr);
// fputc('n',fptr);
// fputc('g',fptr);
// fputc('o',fptr);


//fprintf(fptr, "%c" ,'A');
// fclose(fptr);
//   return 0;
// }



// EOF(End Of File )---puri file ko read karene ke liye END of file ka use karte h.
// fgetc return EOF to show that the file has ended.

// #include<stdio.h>
// int main(){
// FILE *fptr;
// fptr = fopen("java.txt", "r");
// char ch;
// ch = fgetc(fptr);
// while(ch!=EOF){

//   printf("%c",ch);
//   ch= fgetc(fptr);
  
// }


// fclose(fptr);
// return 0;
// }


// make a program to input student information from a user & enter it to a file.

// #include<stdio.h>
// int main(){

// FILE *fptr;
// fptr = fopen("a.text","w");
//   int a,b,c;
// printf("enter the student age ");
// scanf("%d", &a);

// printf("enter the student roll ");
// scanf("%d", &b);

// printf("enter the student cgpa ");
// scanf("%d", &c);

// fprintf(fptr,"student age %d\n", a);

// fprintf(fptr,"student roll %d\n", b);

// fprintf(fptr,"student cgpa %d\n", c);
// fclose(fptr);
//   return 0;
// }


// Q 63write the program to all the odd num from 1 to n in a file.
// #include<stdio.h>
// int main(){
// FILE *fptr;
// fptr = fopen("odd.text","w");
// int n;
// printf("enter the num");
// scanf("%d", &n);

//   for (int i = 1; i <=n; i++)
//   {
//     if(i%2!=0){
//       fprintf(fptr, "%d", i);
//   }
// }

// fclose(fptr);
//   return 0;
// }



// Q64 2 num -a&b, are written in a file. write a program to replace them with their sum.

// #include<stdio.h>
// int main(){
// FILE *fptr;
// fptr = fopen("a.text","r");
// int a;
// fscanf(fptr, "%d", &a);
// int b;
// fscanf(fptr, "%d", &b);

// fclose(fptr);


// fptr = fopen("a.text","w");
// fprintf(fptr,"%d", a+b);
// fclose(fptr);


//   return 0;
// }


/////////////////////////////chapter 11////////////////////////////
/////////////////////    Dynamic Memory Allocation/////////////////


// Dynamic Memory Allocation------>
// It is a way to allocate memory to a data structure during
// the runtime.
// We need some functions to allocate
// & free memory dynamically


// Functions for DMA
// a. malloc( ) --->memory allocation
// b. calloc( ) --->continious allocation
// c. free( )  
// d. realloc( ) re-allocation

// malloc(){memory allocation}
//  takes number of bytes to be allocated
// & returns a pointer of type void
// ptr = (*int) malloc(5 * sizeof(int));




// sizeof operator ------------>
// #include<stdio.h>
// int main(){

// printf("%d\n", sizeof(int));
// printf("%d\n", sizeof(float));
// printf("%d\n", sizeof(char));
//   return 0;
// }

// malloc(){memory allocation}
//  takes number of bytes to be allocated
// & returns a pointer of type void
// ptr = (int*) malloc(5 * sizeof(int));

// #include<stdio.h>
// #include<stdlib.h>
// int main(){

// int *ptr;
// ptr= (int *)malloc(5*sizeof(int));
// ptr[0]=1;
// ptr[1]=2;
// ptr[2]=3;
// ptr[3]=4;
// ptr[4]=5;

// for (int i = 0; i <5; i++)

// {
//   printf("%d\n",ptr[i]);
// }



  // return 0;
// }


// Q65 wap to allocate memmory to store 5 prices.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// float *ptr;
// ptr = (float*)malloc(5*sizeof(float));
//  ptr[0]=1;
// ptr[1]=2;
// ptr[2]=3;
// ptr[3]=4;
// ptr[4]=5;
// for (int i = 0; i < 5; i++)
// {
//   printf("%f\n", ptr[i]);
// }
//   return 0;
// }

// calloc( ) coutinuous allocation 
// initializes with 0
// ptr = (*int) calloc(5, sizeof(int));

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// float*ptr;
// ptr = (float*)calloc(5,sizeof(float));
// for (int i = 0; i < 5; i++)
// {
//   printf("%f\n", ptr[i]);
// }
//   return 0;
// }


// Q66 wap to allocate memmory of size n , where n is entered by the user.
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//   int n;
// printf("enter the size ");
// scanf("%d", &n);
// int *ptr;
// ptr = (int *)calloc(n,sizeof(int));

// for (int  i = 0; i < n; i++)
// {
//   printf("%d\n", ptr[i]);
// }

//   return 0;
// }





// free( )
// We use it to free memory that is allocated
// using malloc & calloc
// free(ptr);

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//   int n;
// printf("enter the size ");
// scanf("%d", &n);
// int *ptr;
// ptr = (int *)calloc(n,sizeof(int));

// for (int  i = 0; i < n; i++)
// {
//   printf("%d\n", ptr[i]);
// }

// free(ptr);
// ptr = (int *)calloc(n,sizeof(int));

// for (int  i = 0; i < n; i++)
// {
//   printf("%d\n", ptr[i]);
// }
// ptr = (int *)calloc(2,sizeof(int));

// for (int  i = 0; i < 2; i++)
// {
//   printf("%d\n", ptr[i]);
// }
//   return 0;
// }



// realloc( )
// reallocate (increase or decrease) memory
// using the same pointer & size.
// ptr = realloc(ptr, newSize);


// allocte memory for 5 num. then dynammially increse it ti 8 num.


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// int *ptr;
// ptr =  (int*)calloc(5,sizeof(int ));
// printf("enter num 5 ");
// for (int i = 0; i < 5; i++)
// {
//   scanf("%d", &ptr[i]);

// }
// ptr = realloc(ptr,8);
// printf("enter num 8 ");
// for (int i = 0; i < 8; i++)
// {
//   scanf("%d", &ptr[i]);

// }

// for (int i = 0; i < 8; i++)
// {
//   printf("number%dis %d\n",i, ptr[i]);

// }
//   return 0;
// }


// Q69 create an array of size 5(using calloc )& enter its value from the user.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// int *ptr;
// ptr =  (int*)calloc(5,sizeof(int ));
// printf("enter the num 5");
// for (int i = 0; i < 5; i++)
// {
//    scanf("%d", &ptr[i]);
// }


// for (int i = 0; i < 5; i++)
// {
//   printf("number%dis %d\n",i, ptr[i]);

// }
//   return 0;
// }





// Q70 allocate memory to store first 5 odd num, then reallocate it to first even num.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// int *ptr;
// ptr = calloc(5, sizeof(int));
// ptr[0]=1;
// ptr[1]=2;
// ptr[2]=3;
// ptr[3]=4;
// ptr[4]=5;
// for (int  i = 0; i < 5; i++)
// {
//   printf("%d\n", ptr[i]);
// }

// ptr =realloc(ptr,6);
// ptr[0]=2;
// ptr[1]=2;
// ptr[2]=3;
// ptr[3]=4;
// ptr[4]=6;
// ptr[4]=12;
// for (int  i = 0; i < 6; i++)
// {
//   printf("%d\n", ptr[i]);
// }
//   return 0;
// }









































































































































