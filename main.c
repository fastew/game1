#include "main.h"
#include "util.h"

int main() {
	init();
	while (1) {
		titledraw();
		int menucode = menudraw();
		if (menucode == 0) {
			int n = maplistdraw();
			if (n == 0) {
				gloop(0);
			}
			else if (n == 1) {
				gloop(1);
			}
		}
		else if (menucode == 1) {
			infodraw();
		}
		else if (menucode == 2) {
			return 0;
		}
		system("cls");
		setcolor(white, black);
	}
	return 0;
}



