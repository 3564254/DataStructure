#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main(void) {

	char str[100];
    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str); str[len - 1] = 0;
    printf("\n입력된 문자열은\n\"%s\"\n입니다.\n\n", str); len = strlen(str);
    printf("입력된 문자열의 길이 = %d\n",len);
	return 0;
}
