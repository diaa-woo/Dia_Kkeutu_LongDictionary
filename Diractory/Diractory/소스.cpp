#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LENGTH 64

void printWord(int a, int b) {
	int num = a, line_count = 0;
	char buffer[MAX_LENGTH];
	FILE* p_file = NULL;

	if (0 == fopen_s(&p_file, "words.txt", "rt")) {
		while (fgets(buffer, MAX_LENGTH, p_file) != NULL) {
			line_count++;
			if (line_count == num) {
				printf("%s", buffer);
				break;
			}
		}
		fclose(p_file);
	}
}

void dictory(char str) {
	switch (str) {
	case 'a':
		printWord(1, 22);
		break;
	case 'b':
		printWord(23, 35);
		break;
	case 'c':
		printWord(36, 55);
		break;
	case 'd':
		printWord(56,84);
		break;
	case 'e':
		printWord(85, 112);
		break;
	case 'f':
		printWord(113, 123);
		break;
	case 'g':
		printWord(124, 147);
		break;
	case 'h':
		printWord(148, 160);
		break;
	case 'i':
		printWord(161, 167);
		break;
	case 'j':
		printWord(168, 177);
		break;
	case 'k':
		printWord(178, 194);
		break;
	case 'l':
		printWord(195, 227);
		break;
	case 'm':
		printWord(228, 266);
		break;
	case 'n':
		printWord(267, 312);
		break;
	case 'o':
		printWord(313, 342);
		break;
	case 'p':
		printWord(343, 373);
		break;
	case 'q':
		printWord(374, 386);
		break;
	case 'r':
		printWord(387, 424);
		break;
	case 's':
		printWord(425, 448);
		break;
	case 't':
		printWord(449, 478);
		break;
	case 'u':
		printWord(479, 495);
		break;
	case 'v':
		printWord(496, 522);
		break;
	case 'w':
		printWord(523, 550);
		break;
	case 'x':
		printWord(551, 578);
		break;
	case 'y':
		printWord(579, 608);
		break;
	case 'z':
		printWord(609, 634);
		break;
	case 'A':
		printWord(1, 22);
		break;
	case 'B':
		printWord(23, 35);
		break;
	case 'C':
		printWord(36, 55);
		break;
	case 'D':
		printWord(56, 84);
		break;
	case 'E':
		printWord(85, 112);
		break;
	case 'F':
		printWord(113, 123);
		break;
	case 'G':
		printWord(124, 147);
		break;
	case 'H':
		printWord(148, 160);
		break;
	case 'I':
		printWord(161, 167);
		break;
	case 'J':
		printWord(168, 177);
		break;
	case 'K':
		printWord(178, 194);
		break;
	case 'L':
		printWord(195, 227);
		break;
	case 'M':
		printWord(228, 266);
		break;
	case 'N':
		printWord(267, 312);
		break;
	case 'O':
		printWord(313, 342);
		break;
	case 'P':
		printWord(343, 373);
		break;
	case 'Q':
		printWord(374, 386);
		break;
	case 'R':
		printWord(387, 424);
		break;
	case 'S':
		printWord(425, 448);
		break;
	case 'T':
		printWord(449, 478);
		break;
	case 'U':
		printWord(479, 495);
		break;
	case 'V':
		printWord(496, 522);
		break;
	case 'W':
		printWord(523, 550);
		break;
	case 'X':
		printWord(551, 578);
		break;
	case 'Y':
		printWord(579, 608);
		break;
	case 'Z':
		printWord(609, 634);
		break;
	}
}

int main() {
	char str1 = 0;
	scanf_s("%c", &str1,sizeof(str1));
	dictory(str1);
}