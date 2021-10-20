#pragma once
#ifdef TIMER_LIBRARY_EXPORTS
#define TIMER_LIBRARY_API __declspec(dllexport)
#else
#define TIMER_LIBRARY_API __declspec(dllimport)
#endif

#include <chrono>

using namespace std::chrono;

namespace TimerLibrary {
	class TIMER_LIBRARY_API TimerBase {
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
