#include <stdio.h>
/*NAME AMAAN KHAN
UIN 251P045 
ROLL NO 41
CLASS COMPUTER C3*/
int Prime_number (int num){
if (num <=1) 
 return 0;
for (int i=2; i*i<num; i++) {
if (num %i==0)
return 0;
}
return 1;
}
int main (){
int start, end;
printf("enter the two numbers (start and end):");
scanf ("%d %d",&start, &end) ;
printf ("prime number between %d and %d are :", start, end);
for (int i=start; i<=end; i++){
if (Prime_number(i)){
printf ("%d\n",i);
}
}
return 0;
}