#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int md, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	md = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (md == -1)
		return (-1);
	if (text_content != NULL)
	{

		while (text_content[len])
			len++;
		wrote = write(md, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(md) == -1)
		return (-1);
	return (1);
}

