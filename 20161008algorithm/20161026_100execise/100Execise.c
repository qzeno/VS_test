/*************************
1.��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
**********************/

#include<stdio.h>
int main()
{

	int i = 1, j = 1,k = 1;
	for(i = 1; i < 05; i++)
	{
		for(j  =1; j < 5 ; j++)
		{
			for(k = 1; k < 5; k++)
			{
				if(i!=j && j!= k && i!=k)
					printf("%d%d%d\n",i,j,k);
			}
		}
	}

	return 0;
}