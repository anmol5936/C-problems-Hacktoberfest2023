#include <stdio.h>

int main() {

// Using while loop
char ch = 'z';
while(ch >= 'a'){
printf("%c ", ch);
ch--;
}

printf("\n");

// Using do-while loop
ch = 'z';
do {
printf("%c ", ch);
ch--;
}while(ch >= 'a');

printf("\n");

// Using for loop
for(ch='z'; ch>='a'; ch--){
printf("%c ", ch);
}

return 0;
}