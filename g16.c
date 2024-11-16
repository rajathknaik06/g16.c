/*Olivia is a curious mind exploring the world of digits. Create a simple program to assist Olivia in understanding the addition of the last two digits of a given number. 



Prompt Olivia to input an integer n, calculate and display the sum of the last two digits.

Input format :
The input consists of an integer n.

Output format :
The output displays the sum of the last two digits of the input integer.*/




#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int rem1=n%10;        //last dighit
 int q=n/10;    //231 ans 4         // divide a number by 10 until it becomes 0
 int rem2=q%10;               //last 2nd digit
 printf("%d",rem1+rem2);
}
