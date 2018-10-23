

#include <fcntl.h>
#include <zconf.h>
#include <string.h>

int main(void) {
    int fileint = open("text",O_APPEND);
    if (fileint){
        write(1, "text opened\n", sizeof(char) * strlen("text opened"));
        

    }
}