#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int tn[] = { 12, 23, 36, 5, 46, 9, 25 };
	int min = 0, max = 0;
	void minmax(int *p_tn,int taille, int *p_min, int *p_max);

	//int taille = size(tn);
	//int *p_tn = tn;

	minmax(&tn[0], size(tn), &min, &max);

	cout << "Min, max : " << min << " " << max << endl;
	system("PAUSE");
}

void minmax(int *p_tn, int taille, int *p_min, int *p_max)
{
	// p_tn = &tn[0], taille = sizeof(tn), p_min = &min, p_max = &max
	
	*p_min = *p_tn;
	*p_max = *p_tn;

	for (int i = 0; i < taille; i++)
	{
		if (*(p_tn + i) < *p_min)
		{
			*p_min = *(p_tn + i);
		}

		if (*(p_tn + i) > *p_max)
		{
			*p_max = *(p_tn + i);
		}
	}

	return;
}