#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch, poppedch; // ch is from stdin and poppedch is the c
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')) //????
      continue;
    if(ch=='<'){
        ch = getchar(); //Take another stdin
        if(isalpha(ch)){ // If ch is an alphabet then push it onto the stack
            push(ch);
        }
        else if(ch =='/'){
            ch = getchar();
            //Let's check if the stack is empty.
            if((isEmpty()) == 1) //if the stack is empty then you can't pop
               exit(0);
            else //if the stack isn't empty then you can pop
            {
                poppedch = pop();
                if(poppedch != ch ){
                   printf("Invalid!\n");
                   exit(1);
                 }
                 else{
                     printf("Valid!\n");
                 }
            }
        }
    }

  }
  if(isEmpty()== 0){
    fprintf(stderr,"Invalid!\n");
    exit(1);}
  else{
    fprintf(stderr,"Valid!\n");
    exit(0);}
}
