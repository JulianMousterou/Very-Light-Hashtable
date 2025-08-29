# Very-Light-Hashtable
Small key-value store for resource constrained systems, such as microcontrollers with ~32KB RAM.

# Usage 

    #include "libconkv_defs.h"
    #include <stdio.h> 
    int main(){
        HT* ht = HT_CREATE();
        HT_INIT(ht); 
        HT_INSERT_KV(ht, "KEY1", "hellothere"); 
        char* hellothere = HT_GET_V(ht, "KEY1"); 
        printf("%s\n", hellothere);
     } 
Create a HT pointer and assign it to the "HT_CREATE()" function, initialize with "HT_INIT()" and put and get keys and values using "HT_INSERT_KV()" and "HT_GET_V()". 

## Hash Function 
Uses FNV-1a hash function, and linear probing for collisions. Reasoning is to be as light as possible and not necessarily super robust at the moment, I will explore adding new things or revising the code to hopefully make it into something that is useful and intuitive.

## Notes for the Future
I enjoy writing C code and will continue to, key-value stores have always fascinated me and if I can manage to make this one as light, and robust as possible I will have achieved my goal of making a decent and lightweight key-value store for embedded systems. Im looking to have a flash write function soon because it seems like that should be the next step. 

