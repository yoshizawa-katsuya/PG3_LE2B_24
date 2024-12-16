#include <stdio.h>
#include <thread>
using namespace std;

int main() {

	bool wait1 = true;
	bool wait2 = true;

	std::thread th1([&]() {printf("thread 1\n");
	wait1 = false; });

	std::thread th2([&]() {
		while (wait1)
		{

		}
		printf("thread 2\n");
		wait2 = false; });

	std::thread th3([&]() {
		while (wait2)
		{

		}
		printf("thread 3\n"); });

	th1.join();
	th2.join();
	th3.join();

	return 0;
}