#include <iostream>
using namespace std;

int main()
{

		//��ֻС������أ�300��350��200��400��250���ҳ�����ӡ���ص�С��
	int pig[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (pig[i] > max) {
		
			max = pig[i];
		
		}
	
	
	}
	cout << "��������Ϊ��" << max << endl;
	system("pause");
	return 0;
	}
	

