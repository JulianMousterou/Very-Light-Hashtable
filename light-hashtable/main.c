#include "light-hashtable-defs.h"
#include <stdio.h> 

int main(){
	
	HT* ht = HT_CREATE();
	HT_INIT(ht); 
	HT_INSERT_KV(ht, "KEY1", "hellothere"); 
	char* hellothere = HT_GET_V(ht, "KEY1"); 
	printf("%s\n", hellothere);
} 

