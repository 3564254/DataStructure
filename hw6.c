# include <stdio.h>

void hanoi(int n, char start, char target, char to)
{
    if (n == 1)
        printf("%c���� ���� 1��(��) %c�� �ű�\n", start, to);
    else
    {
        hanoi(n - 1, start, to, target);
        printf("%c���� ���� %d��(��) %c�� �ű�\n", start, n, to);
        hanoi(n - 1, target, start, to);
    }
}

void main()
{
    hanoi(3, 'A', 'B', 'C');
}