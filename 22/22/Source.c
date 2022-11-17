#include<stdio.h>
#include<locale.h>
#include<math.h>

double sch_y(double x)
{
	double y;
	if (x > 0)
	{
		y = log(fabs(pow(x, 3 / 2)));
	}
	return y;
}
double sch_v(double x)
{
	double y;
	if (x > 1)
	{
		y = sqrt(tan(x * x - 1));
	}
	if (x >= 0 && x <= 1)
	{
		y = -2 * x;
	}
	if (x < 0)
	{
		y = exp(cos(x));
	}
	return y;
}
double sch_s(double x)
{
	double y;
	y = (x - 1) / (x + 1) + 1 / 3 * pow((x - 1) / (x + 1), 3) + 1 / 5 * pow((x - 1) / (x + 1), 5) + 1 / 7 * pow((x - 1) / (x + 1), 7);
	return y;
}
//��������� �������
typedef double (*Tsch) (double);
//���������
double sch_y(double);
double sch_v(double);
double sch_s(double);
void result(Tsch, double, double, double);
//������� ����� ����������
void t_result(Tsch f, double xn, double xk, double h)
{
	for (double x = xn;x <= xk;x += h)
		printf(" x= %5.2lf, y = %8.41f\n", x, f(x));
}
void main()
{
	double x1,x2,sh;
	int r;
	setlocale(LC_ALL, "RUS");
	printf("������� ��������:");
	scanf("%lf%lf", &x1, &x2);
	printf("������� ���:");
	scanf("%lf", &sh);
	printf("�������� ��������: ���� ��������� �������� Y(x), ������� 1; ���� ��������� �������� V(x), ������� 2; ���� ��������� �������� S(x), ������� 3; ������� 4 ��� ������ �� ���������");
		while (r != 4)
		{
			switch(r)
		}
	/*printf("Y(x)\n");
	t_result(sch_y, x1, x2, sh);
	printf("V(x)\n");
	t_result(sch_v, x1, x2, sh);
	printf("S(x)\n");
	t_result(sch_s, x1, x2, sh);*/
}
