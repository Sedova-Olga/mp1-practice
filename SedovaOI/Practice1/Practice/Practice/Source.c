//��������� �������� ��� ���: 650 ��/�^3, ���: 800 ��/�^3, ������: 550 ��/�^3//
#include<stdio.h>
int main()
{
	double h, w, d, a, massa_zadnya_chast, massa_dverey, massa_polok, massa_verha_and_niza, massa_bokovyih_sten, massa_shcafa;
	int n = 0;
	printf("Vvedite znachenia v sm:"); //������ �� ���� ��������
	scanf("%lf %lf %lf", &h, &w, &d);
	if ((h < 180) || (h > 220) || (w < 80) || (w > 120) || (d < 50) || (d > 90)) // �������� �� ������������ ��������� ������ 
	{
		printf("Nekorrektnyi vvod");
		return 1;
	}
	a = h - 3; //������ ������� ���� 
	h *= 0.01; //������� � ����� 
	w *= 0.01;
	d *= 0.01;
	{
		massa_zadnya_chast = h * w * 0.005 * 800; //����� ������ ����� �����
		massa_dverey = h * w * 0.01 * 550; //����� ������
		while (a >= 40) //���� �� ������� ���������� �����
		{
			a -= 40;
			n++;
		}
		massa_polok = n * (w - 0.03) * d * 650 * 0.015; //����� �����
		massa_verha_and_niza = 2 * d * w * 0.015 * 650; //����� ��������� ����� � ����
		massa_bokovyih_sten = 2 * (h - 0.03) * d * 0.015 * 650; //����� ������� ����
		massa_shcafa = massa_zadnya_chast + massa_dverey + massa_polok + massa_verha_and_niza + massa_bokovyih_sten; //������� ����� ����� �����
		printf("%lf", massa_shcafa);

	}
	return 0;
}

//��������� �� ������ �����: ���� � ��� ����������� �� ������� ������, ������� �� ������ �������� ������� ����� ������, �� ����� ������ �������� ������� ������ � �������� ������