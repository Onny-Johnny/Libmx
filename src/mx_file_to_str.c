 #include "libmx.h" 

 char *mx_file_to_str(const char *file) {
 	int fd = open(file, O_RDONLY);
 	int len = 0;
 	char buf;
 	char *str;

 	if (fd > 0) {
 		while (read(fd, &buf, 1))
 			len++;
 		close(fd);
 		if (len > 0) {
 			fd = open(file, O_RDONLY);
	 		str = mx_strnew(len);
	 		for (int i = 0; read(fd, &buf, 1); i++)
	 			str[i] = buf;
	 		close(fd);
	 		return str;
 		}
 	}
 	return NULL;
 }
