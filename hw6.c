# include <stdio.h>

void hanoi(int n, char start, char target, char to)
{
    if (n == 1)
        printf("%c에서 원판 1를(을) %c로 옮김\n", start, to);
    else
    {
        hanoi(n - 1, start, to, target);
        printf("%c에서 원판 %d를(을) %c로 옮김\n", start, n, to);
        hanoi(n - 1, target, start, to);
    }
}

void main()
{
    hanoi(3, 'A', 'B', 'C');
}