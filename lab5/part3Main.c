#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern char *  pop();
extern void push(char *);
extern void add(char * tag);

int main (int argc, char * argv[])
{
  int ch, var;
  char *str;
  char *popstr; // all these variables come from stdin
  while ((gets(ch)) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')) //If not any of those then continue looking in the file
       continue;
    else if(ch=='<')
    {
        gets(str); //Read in a string
        if(isalpha(str)){
                var = getchar();
                if((var =='>')&& (var !=EOF)){
                          push(str); //Only push str onto the stack when you have a complete tag
                          add(str);
                }
                else{
                printf("Incomplete tag. Try running again!");
                exit(1);
                }
        }
       else if(ch =='/'){
            gets(str);
            if(isalpha(str))//if ch is an alphabet
            {
                     var = getchar();
                      if((var =='>')&& (var !=EOF))
                      {
                           if((isEmpty()) == 1){ //if the stack is empty then you can't pop
                              fprintf(stderr,"The stack can't be popped because it's empty\n");
                              exit(0);
                           }
                           else if((strcmp((popstr = pop()),str)== 0 ) //if the stack isn't empty then you can pop and check poppedch against ch
                           {

                                  continue;
                           }
                           else //if the stack isn't empty then you can pop
                              {
                                 fprintf(stderr,"Invalid! The top of the stack doesn't match the popped character.\n");
                                 exit(1);
                           }
                      }
                      else{ //else for the closing '>' if
                         fprintf(stderr, "The closing identifier was not detected." );
                         exit(1);
                      }
            }
      }
  } //closing for if of '<'
  else{
      exit(0);
  }
} //Closing of while loop
  if((isEmpty())== 1){
       printf("Valid!\n");
       for(int i = 0; i<HASH_TABLE_SIZE;i++ ){
           printf("%s  \n",get().string,((get().count)/2));
       }
    exit(0);
 }
  else{
    printf("Invalid!\n");
    exit(1);}
    //get gets the Entry

}
