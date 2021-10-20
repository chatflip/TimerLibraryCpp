#pragma once
#include <chrono>

using namespace std::chrono;

namespace TimerLibrary {
	class TimerBase {
	public:
		TimerBase();
		void Clear();
		bool IsStarted() const;
		void Start();
		unsigned long GetMs();
	private:
		system_clock::time_point m_start;
	};
}
