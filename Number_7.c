#include <stdio.h>

/*
Write a program using c/vb compiler which captures the following from keyboard and prints them on the screen. 
i.	Your surname and other names
ii.	Your registration number
iii.	The year of study
iv.	Your current university
v.	 concatenates the strings above and output them as one string in the form:	Am______Reg no_______in_______at_________

*/
int main(){
    int year;
    char name[30], univ[30], reg_no[30];
   
   /* gets has been used instead of fgets even though gets is better, simply due to a desire for clarity,
   in regular instances, it is better to use fgets because it obeys buffers 
   https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1044652485&id=1043284385
   */

    printf("Enter your full name\n");
    gets(name);

    printf("Enter your registration number\n");
    gets(reg_no);

    printf("Enter your current university\n");
    gets(univ);

    printf("Enter your year of study\n");
    scanf("%d", &year);
    printf("Am %s Reg no %s in %d at %s",name,reg_no,year*2,univ);
    return 0;
    

}