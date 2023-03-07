#include<stdio.h>
#include<stdlib.h>

int main(){
    
        printf("                          welcome to gourang.look system ^-^");

    int password;
    int fakeInput;

    printf("\n\nplease type your password");
    scanf("%d",&password);

    if (password<=2005 && password>= 2005)
    {
        printf("\n                          The password is correct :)");        
        printf("\n                          hello my close friend   :));                  
    }
    else
    {
        printf("\n                          The password is WRONG---");
        printf("\n                          you still have two times ");

        printf("\nTry again..");
        scanf("%d",&password);

        if (password<=2005 && password>= 2005)
        {
        printf("\n                          The password is correct :)");        
        printf("\n                          hello my close friend   :)");                  
        }
        else
        {
        printf("\n                          The password is WRONG---");
        printf("\n                          you still have one times ");

         printf("\nTry again..");
        scanf("%d",&password);


             if (password<=2005 && password>= 2005)
        {
        printf("\n                          The password is correct :)");        
        printf("\n                          hello my close friend   :)");                  
        }
        else
        {
        printf("\n                           WRONG---");
        printf("\n                           WRONG---");       
        printf("\n                           WRONG---");
        printf("\n                           WRONG---");
        printf("\n                           WRONG---");
        printf("\n                           WRONG---");
        printf("\n                           WRONG---");
        printf("\n                           WRONG---");
        printf("\n                           WRONG---");
    
        }
      }
   }   
   scanf("\n%d",fakeInput);
   return 0;
}