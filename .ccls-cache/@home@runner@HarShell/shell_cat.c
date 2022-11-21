#include <stdio.h>

int main(int argc, char* argv[]){
	FILE* ptr;
    char ch;
    ptr = fopen(argv[2], "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    while (!feof(ptr)) {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    fclose(ptr);
    return 0;
}