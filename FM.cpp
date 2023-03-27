#include <cstido>
#include <cstdi ib>
#include <ctime>

int main()
{
	clock_t start, finish;
	double duration;
	for (int = 0; i < 10; i++) {
		start = clock();
		int sum = sum_of_N(1000000);
		finish = clock();
		duration = (double)(finish - start)
			printf("합계 %d이고,%f 초 걸렸습니다\n", sum, duration);
	}
	
	return 0;
}