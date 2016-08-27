#include "sort.h"
#include "creatArrPrinArr.h"

using namespace std;
int main()
{
	int a[] = { 1, 2 };
	std::swap(a[0], a[1]);
	cout << "a.." << a[0] << "..." << a[1] << endl;
	int i2 = 1;
	int k = 2;
	printf("i<<k+2 = %d\n\n", i2 << k + 1);
	int *arr = NULL;
#ifdef __cplusplus
	std::cout << "this is a c++ pro \n";
#else
	std::cout << "this is a c pro \n";
#endif
	int *array = creatRandomArray(def_N);
	printInitialArr(array, def_N);
	int i = 0;
	while (1){
		printf("����һ������ѡ��1.ѡ������2.���룬3.������4.�鲢���� 5.ϣ������6.ð������7.��������\n");
		scanf("%d", &i);
		switch (i){
		case 1:
			SelectSort(array, def_N);
			break;
		case 2:
			InsertSort(array, def_N);
			break;
		case 3:
			HeapSort(array, def_N);
			break;
		case 4:
			break;
		case 5:
			shellSort(array, def_N);
			break;
		case 6:
			BubbleSort(array,  def_N);
		case 7:
			QuickSort(array, def_N);
		default:
			break;
		}
		printSortedArr(array, def_N);

	}
}