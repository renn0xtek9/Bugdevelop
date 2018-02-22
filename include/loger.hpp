#ifndef LOGER_HPP
#define LOGER_HPP
#include "Singleton.hpp"
#include <cstring>
#include <iostream>  

enum class  LogMessageType 
{
	MsgNone,	/**<Not important (just display the information without prefix and print to log file) */
	MsgDebug,	/**<Debug message in the log file */
	MsgInfo,	/**<Information message in the log file (minimum importance) */
	MsgWarning, 	/**<Warning information in the log file (intermediate importance)*/
	MsgError 	/**<Error information in the log file (highest importance)*/
};
enum class Error{
	BIGERROR 	= 1,
	MASSIVEERROR 	= 2,
	DABIGFATERROR	= 3
};



class Loger :public Singleton<Loger>
{
	friend class Singleton<Loger>;
public:
	void setOutputFolder(std::string p_outputfolder);
	void closeLogFile();
	void openLogFile();
	void setLogFile(const std::string& name);
	
	bool loggingEnabled();
	void setLoggingEnabled(bool enabled);
	
	void handleError (Error p_errcode,bool p_repeat=true,bool p_exit=false) noexcept;
	
	void log(const char* text);
	void log(const std::string& text, LogMessageType type = LogMessageType::MsgNone,bool showinstdout=true);
		

protected:
	Loger ()
	{ 
		
	}
	
	virtual ~Loger () 
	{ 
		if (loggingEnabled())
			closeLogFile();
	}
private:
	
	
	
};


#endif // LOGER_HPP



