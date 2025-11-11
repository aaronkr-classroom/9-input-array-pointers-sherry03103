//getch.c
#include <stdio.h>
#include <conio.h> // MS 표준 라이브러리

int main(void) {
	
	char input_data;
	int count = 1;

	while (1) { //while(1) : 무한 루프, break 필요로 함

		if (_kbhit()) { // 키보드 키가 눌리면
			input_data = _getch();

			// 'q', 'Q', ESC : 종료
			if (input_data == 'q' || input_data == 'Q' || input_data == 27) {
				printf("\n프로그램 종료\n");
				break;
			}
			rewind(stdin); // 표준 입력 버퍼에 있는 모든 입력값 초기화
			printf("Input %d: %c\n", count++, input_data);
		}
	}


	return 0;
}