//
//
//
#include <stdio.h>
#include <string.h>

#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];

int hash(char * tag){
    int i,sum_char=0,key;
    //To calculate the sum of the ASCII characters
    int str_len = strlen(tag);
    for(i = 0; i< str_len ; i++){
        sum_char = sum_char + *(tag+i);
    }
    //To find the key in the hash_table
    key = sum_char % HASH_TABLE_SIZE;
    return key;
}

void add(char * tag)
{
    int key;
    key = hash(tag);
    while(true){
          if(hash_table[key].count == 0) {
              hash_table[key].string = tag;
              hash_table[key].count = 1;
          }
          else if(hash_table[key].count != 0) {
                 if(hash_table[key].string == tag){
                     hash_table[key].count++;
                     break;
                 }
                 else{
                     key++;
                     key = key % HASH_TABLE_SIZE ;
                 }
          }
     }
}

Entry get(char * tag){ //returns an entry from the hash_table
    int key;
    Entry obj;
    key = hash(tag);
    while(true){
            if(hash_table[key].string == tag){
                    obj = hash_table[key];
                     break;
                 }
                 else{
                     key++;
                     key = key % HASH_TABLE_SIZE ;
                 }
     }
     return obj;
}
