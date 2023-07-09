#ifndef __SYLAR_LOG_H_
#define __SYLAR_LOG_H_

#include <string>
#include <stdint.h>

namespace sylar{

class LogEvent {
public:
	LogEvent();
private:
	const char* m_file = nullptr;
	int32_t m_line = 0;
	uint32_t m_threadId = 0;
	uint32_t m_fiberId = 0;
	uint64_t m_time;
	std::string m_content;
};

// 日志器
class Logger {
public:
	enum Level {
		DEBUG = 1,
		INFO = 2,
		WARN = 3,
		ERROR = 4,
		FATAL = 5
	};

	Logger();


}

// 日志输出地
class LogAppender {
public:
	virtual ~LogAppender() {}
private:
};

class LogFormatter {

};

}

#endif  //__SYLAR_LOG_H
