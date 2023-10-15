#include <stdlib.h>

int install_nodejs() {
	system("sudo apt-get update && sudo apt-get update");
	system("sudo apt-get install npm nodejs");
	system("sudo npm install -g n");
	system("sudo n stable");

	return (int)system("$?");
}

