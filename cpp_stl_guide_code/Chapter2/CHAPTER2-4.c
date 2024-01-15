//
// result:
//
// root@opensmarty:/home/opensmarty/Workspace/projects/study-cpp# ./build/CHAPTER2-4 
// One argument expected. 
// root@opensmarty:/home/opensmarty/Workspace/projects/study-cpp# ./build/CHAPTER2-4 2
// The argument supplied is 2 
// root@opensmarty:/home/opensmarty/Workspace/projects/study-cpp# ./build/CHAPTER2-4 333
// The argument supplied is 333 
//
//
//

#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc == 2) {
		printf("The argument supplied is %s \n", argv[1]);
	} else if (argc > 2) {
		printf("Too many arguments supplied.");
	} else {
		printf("One argument expected. \n");
	}

	return 0;
}
