#include <stdio.h>

int main(void)
{
    printf("Digite o Raio\n");
	float raio;
	scanf("%f", &raio);
	float area;
	area = 3.14 * (raio * raio);
    float perimetro;
	perimetro = 2 * 3.14 * raio;
	printf("A area desse circulo é %.2f e o seu perimetro é %.2f\n", area, perimetro);
}
