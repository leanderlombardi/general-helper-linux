#include <stdlib.h>

int main() {
	system("rpm >/dev/null");
	if ((int)system("echo $?") == 0) {
		system("cc rpm.c -o installer");
	}

	system("pacman >/dev/null");
	if ((int)system("echo $?") == 0) {
		system("cc pacman.c -o installer");
	}

	system("apt >/dev/null");
	if ((int)system("echo $?") == 0) {
		system("cc apt.c -o installer");
	}

	return 0;
}

