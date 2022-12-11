#include <iostream>
using namespace std;
int main()
{

	//1,3,2,5,4-->4,5,2,3,1

	int arr[] = { 1,3,2,5,4 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;



	for (int i = 0; i < 5; i++) {
		
		if (start < end) {
			int temp = arr[end];
			arr[end] = arr[start];
			arr[start] = temp;
			start++;
			end--;

		}

			cout << arr[i] << endl;
		}
		
	
	
	
	
	


	system("pause");
	return 0;
}