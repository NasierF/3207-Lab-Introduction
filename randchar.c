#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randchar(){
srand( (unsigned)time(NULL) );
int randnum = (rand()%26)+'A';
return (char)randnum
}
