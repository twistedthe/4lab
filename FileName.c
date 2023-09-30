#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int c = 3, v0 = 4,v;
	float t, x;
	v = v0 * c;
	puts("¬ведите сколько км пробежал мальчик: ");
	scanf("%f", &x);
	t = x / v;
	printf("%.2f км мальчик пробежал за %.2f минут", x, t * 60);
}