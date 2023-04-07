#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: 0 if failure, Else actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        int fx;
        ssize_t r, w;
        char *buffer;

        if (filename == NULL)
                return (0);
        fx = open(filename, O_RDONLY);
        if (fx == -1)
                return (0);
        buffer = malloc(sizeof(char) * letters);
        if (buffer == NULL)
        {
                close(fx);
                return (0);
        }
        r = read(fx, buffer, letters);
        close(fx);
        if (r == -1)
        {
                free(buffer);
                return (0);
        }
        w = write(STDOUT_FILENO, buffer, r);
        free(buffer);
        if (r != w)
                return (0);
        return (w);
}

