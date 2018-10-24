
#include "fileio.h"


int test() {
    int fileint = open("example.txt", O_CREAT | O_RDWR | O_APPEND, S_IWUSR | S_IXUSR | S_IRUSR);
    printf("fileint: %d\n", fileint);
    if (fileint > 0){
        write(1, "text opened\n", sizeof(char) * strlen("text opened\n"));

        char * holder = calloc(999, sizeof(char));
        if (read(fileint, holder, 999) < 0){
            write(2, "read error\n", sizeof(char) * strlen("read error\n"));
        }
        printf("this is what's in the file: %s\n", holder);

        if (write(fileint, "herooooo", 6) != 6) {
            write(2, "write error\n", sizeof(char) * strlen("write error\n"));
        }
        else{
            write(1, "i wrote herro into it\n", sizeof(char) * strlen("i wrote herro into it\n"));
        }

        if(close(fileint) >= 0) {
            write(1, "okay cool it closed\n", sizeof(char) * strlen("okay cool it closed\n"));
        }
        else{
            write(2, "close error\n", sizeof(char) * strlen("close error\n"));
        }

    }
    else{
        write(2, "open error\n", sizeof(char) * strlen("open error\n"));
    }
    return 0;
}