#include<stdio.h>
#include<conio.h>

void main() {

  long inputNo, reversedNo = 0, reminder, no;
  clrscr();
  printf("Enter number to check weather Palindrome: ");
  scanf("%ld", &no);
  inputNo = no;
  while(no != 0) {
   reminder = no%10;
   reversedNo = reversedNo*10 + reminder;
   no = no/10;
  }
  if (inputNo == reversedNo)
  printf("%ld is Palindrome !", inputNo);
  else
  printf("%ld is not Palindrome !", inputNo);
  getch();

}