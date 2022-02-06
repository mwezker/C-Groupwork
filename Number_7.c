#include <stdio.h>

int main(){
    int year;
    char name[30], univ[30], reg_no[30];
   
   /* gets has been used instead of fgets even though gets is better, simply due to laziness and a desire for clarity,
   in regular instances, it is better to use fgets because it obeys buffers 
   https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1044652485&id=1043284385
   */

    printf("Enter your full name\n");
    //fgets(name,sizeof(name),stdin);
    gets(name);

    printf("Enter your registration number\n");
    //fgets(reg_no,30,stdin);
    gets(reg_no);

    printf("Enter your current university\n");
    //fgets(univ,30,stdin);
    gets(univ);

    printf("Enter your year of study\n");
    //scanf("%d",&year);
    scanf("%d", &year);
    printf("Am %s Reg no %s in %d at %s",name,reg_no,year*2,univ);
    return 0;
    

}