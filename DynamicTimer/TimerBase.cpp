#include "TimerBase.hpp"

using namespace TimerLibrary;

TimerBase::TimerBase() {
	m_start = system_clock::time_point::min();
}

void TimerBase::Clear() {
	m_start = system_clock::time_point::min();
}

bool TimerBase::IsStarted() const {
	return (m_start.time_since_epoch() != system_clock::duration(0));
}

void TimerBase::Start() {
	m_start = system_clock::now();
}

unsigned long TimerBase::GetMs() {
	if (IsStarted()) {
		system_clock::duration diff;
		diff = system_clock::now() - m_start;
		return (unsigned)(duration_cast<milliseconds>(diff).count());
	}
	return 0;
}