//my_atoi.c
#include <stdio.h>

#define STR_MAX 16
//문자열을 정수로 변환하는 함수
//string = '123';
//string[0] = '1'; '1'-'0'; 0 * 10 + (49 - 48); => 1
//string[1] = '2'; '2'-'0'; 1 * 10 + (50 - 48); => 12
//string[2] = '3'; '3'-'0'; 12 * 10 + (51 - 48); => 123
int my_atoi(char string[]) {
	
	int count = 0, num = 0;
	//문자열이 끝날때까지 반복
	while (string[count] != 0) {
		//반복할 때마다 이전 값에 10을 곱해서 자릿수 증가
		num = (num * 10) + (string[count] - '0'); //'0' = 48
		count++; //다음 문자로 이동
	}
	return num;
}

int main(void) {

	int first_num, second_num;
	char first_str[STR_MAX], second_str[STR_MAX];
	
	printf("첫 번째 정수 입력: ");
	gets(first_str); //fgets 안됨? 
	//fgets(first_str, STR_MAX, stdin);
	printf("두 번째 정수 입력: ");
	gets(second_str);

	//printf("문자합:\n"); 못해요ㅠㅠ
	//printf("%s + %s = %s", first_str, second_str, first_str+second_str);

	first_num = my_atoi(first_str);
	second_num = my_atoi(second_str);

	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);

	return 0;
}