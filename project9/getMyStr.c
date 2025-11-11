//getMyStr.c
#include <stdio.h>

#define MAX_CH 25

int getMyStr(char buffer[], int limit) {
	int i = 0, ch;

	while ((ch = getchar()) != '\n' && ch != EOF) {
		if (i < limit - 1) { // NULL 문자 공간 확보
			buffer[i++] = (char)ch;
		}
		else {
			// 입력 초과 현상 발생 시 남은 문자 버퍼에서 제거
			while (getchar() != '\n' && getchar() != EOF);
			buffer[i] = '\0'; // NULL 문자 추가
			return 0; // 입력 초과 현상 알림
		}
	}
	buffer[i] = '\0';
	return 1; // 정상 입력



	/*
	for (i = 0; i < limit; i++) {
		buffer[i] = getchar();
		if (buffer[i] == '\n') {
			buffer[i] = 0; //[ENTER] -> NULL 문자로 변경
			return 1; // 정상 입력
		}
		buffer[i] = 0; // 초기화
		rewind(stdin);
	}
	return 0; // 입력 초과 현상이 발생했음을 알림

	*/
}


int main(void) {

	char input_str[MAX_CH];
	int state; // 상태 : 사용자에게 최대 MAX_CH까지만 입력 받겠다고 제한


	printf("Enter text(max %d chars)>>> ", MAX_CH - 1);
	state = getMyStr(input_str, MAX_CH);

	if(state) printf("input: %s\n", input_str);
	else printf("input: %s -> out of range\n", input_str);



	return 0;
}