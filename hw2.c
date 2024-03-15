#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


int main(void) {

	char str[100];
    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("\n입력된 문자열은\n\"%s\"\n입니다.\n\n", str);
    printf("입력된 문자열의 길이 = %d\n",strlen(str) );
	return 0;
}
