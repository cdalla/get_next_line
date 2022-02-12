#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char	*s = "a";
    
    fd = open("get_next_line.c", O_RDONLY);
    if (fd < 1)
        printf("%s", "ERR");
    //s = get_next_line(fd);
    //printf("%s", s);
    while(s)
    {
        
        s = get_next_line(fd);
        printf("%s", s);
        //if (s != NULL)
        free(s);
    }
	//close(fd);
	// fd = open("empty", O_RDONLY);
    // if (fd < 1)
    //     printf("%s", "ERR");
    // s = get_next_line(fd);
    // printf("%s", s);
    // free(s);
    // s = get_next_line(fd);
    // printf("%s", s);
    // free(s);
	
    // s = get_next_line(fd);
    // printf("%s", s);
    // free(s);
    // s = get_next_line(fd);
    // printf("%s", s);
    // free(s);
    // s = get_next_line(fd);
    // printf("%s", s);
    // free(s);
    // s = get_next_line(fd);
    // printf("%s", s);
    // free(s);
    // s = get_next_line(fd);
    // printf("%s", s);
    // free(s);
	//close(fd);
   // system("leaks main");
}