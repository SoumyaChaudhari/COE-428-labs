#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch, poppedch; // ch is from stdin and poppedch is the c
  int counterarr[25] = '0';
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
            poppedch = pop();
            //Let's check if the stack is empty.
            if((isEmpty()) == 1)
               exit(0);
            else if(poppedch != ch )
            {
                printf("Invalid!\n");
                exit(1);
            }
        }
    }

  }
  if(isEmpty()== 0){
    fprintf(stderr,"Invalid!\n");
    exit(1);}
  else{
    fprintf(stderr,"Valid!\n");
    for(int i = 0: 25){
        if(counterarr[i] == '0'){
            printf("%c %d\n", (i + 'a'));
        }

     }
     exit(0);
   }
}
