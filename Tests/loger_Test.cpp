#include "loger_Test.hpp"
#include "loger.hpp"

loger_TEST::loger_TEST(): QObject()
{

}
void loger_TEST::cleanupTestCase()
{
	// will be called after the last testfunction was executed.
	m_log->destroyInst();
}
void loger_TEST::cleanup()
{
	// will be called after every testfunction.
}
void loger_TEST::initTestCase()
{
	// will be called before the first testfunction is executed.
	m_log=Loger::getInst();
}
void loger_TEST::init()
{
	// will be called before each testfunction is executed.
}
void loger_TEST::CreateLoger()
{
	//TODO delte the file and test wether it is really created or not !

}
void loger_TEST::TestAllLevel()
{
	
 	m_log->log("What the bug !!",LogMessageType::MsgDebug);
 	m_log->log("What the error !!",LogMessageType::MsgError);
 	m_log->log("What the fuck !!",LogMessageType::MsgInfo);
 	m_log->log("What the warning !!",LogMessageType::MsgWarning);
}
void loger_TEST::TestStream()
{
	int i=1;
	double d=2.3;

}



QTEST_MAIN(loger_TEST)

#include "moc_loger_Test.cpp"
