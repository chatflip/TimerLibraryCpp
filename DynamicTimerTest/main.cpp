#include "thread"
#include "iostream"
#include "TimerBase.hpp"

constexpr int TIME_TO_SLEEP = 1000;

int main() {
	TimerLibrary::TimerBase timer;
	std::cout << "HelloWorld" << std::endl;
	timer.Start();
	std::this_thread::sleep_for(std::chrono::milliseconds(TIME_TO_SLEEP));
	std::cout << timer.GetMs() << "ms spended" << std::endl;
	return 0;
}
