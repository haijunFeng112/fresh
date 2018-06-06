#include<iostream>
using namespace std;
int main()
{
	int n, m, t1, t2, t, k;
	cin >> n >> m;
	int i, j, a[100000], temp;
	for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	int b[2000][2];
	for (i = 0; i < m; i++)
	{
		cin >> b[i][0] >> b[i][1];
	}
	for (i = 0; i < m; i++)
	{
		t1 = b[i][0];
		t2 = b[i][1];
		if ((t1 + t2) % 2 == 0) {
			k = 0;
			t = (t1 + t2) / 2 - 1;
			for (j = t1 - 1; j <= t; j++)
			{
				temp = a[j];
				a[j] = a[t2 - 1 - k];
				a[t2 - 1 - k] = temp;
				k++;
			}
		}
		else if ((t1 + t2) % 2 == 1)
		{
			k = 0;
			t = (t1 + t2 + 1) / 2 - 1;//4
			for (j = t1 - 1; j <t; j++)
			{
				temp = a[j];
				a[j] = a[t2 - 1 - k];
				a[t2 - 1 - k] = temp;
				k++;
			}
		}

	}
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;

}