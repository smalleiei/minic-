#include <iostream>
using namespace std;

int main()
{

		//五只小猪称体重：300，350，200，400，250，找出并打印最重的小猪。
	int pig[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (pig[i] > max) {
		
			max = pig[i];
		
		}
	
	
	}
	cout << "最重体重为：" << max << endl;
	system("pause");
	return 0;
	}
	

