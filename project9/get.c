//get.c
#include <stdio.h>

int main(void) {
	// 입력 문자가 있으면 계속 읽고 출력하는 프로그램
	// @까지 읽을 수 있음
	char ch;

	printf("Enter characters to read(@ to stop)>>>");

	// 파일이 있으면
	// char* filename = 'C:/Windows/Data/file.txt';
	// while ((ch = getc(filename)) != 'EOF')
	while ((ch = getc(stdin)) != '@') {
		// 받은 문자를 다시 출력
		putchar(ch); // 한 문자씩 출력
	}

	printf("\nEnd of Input.\n");

	return 0;
}