//gets.c
#include <stdio.h>

#define MAX_CHAR 20

int main(void) {
	//문자열을 마지막에 NULL 문자 0을 포함해야 하므로
	//최대 MAX_CHAR-1 개까지 입력 가능
	char input_str[MAX_CHAR];

	printf("카카오뱅크 등록\n");
	printf("고객 이름 입력: ");

	// gets(input_str); // 주의(버퍼 오버플로우)
	// 안전한 대안: fgets(입력받을변수, 길이, 입력 스트림)
	fgets(input_str, MAX_CHAR, stdin);

	printf("%s님, 환영합니다!\n", input_str);


	return 0;
}