#ifndef FILE_IO_H
#define FILE_IO_H
#include <fcntl.h>
#include <unistd.h>
int _putchar(char c);
int create_file(const char *filename, char *text_content);
size_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
#endif
