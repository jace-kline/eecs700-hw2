#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int check_password(const char * buf){
	if (buf[0] == 'p' &&
	    buf[1] == 'a' &&
	    buf[2] == 's' &&
	    buf[3] == 's'){

		int * a = 0;
		*a = 1;
	}
	return 0;
}

int main(int argc, char * argv[]){
	return check_password(argv[1]);
}
