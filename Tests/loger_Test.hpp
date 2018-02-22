#ifndef LOGER_TEST_HPP
#define LOGER_TEST_HPP
#include <qt5/QtTest/QTest>

#include "loger.hpp"

class loger_TEST: public QObject 
{
	Q_OBJECT
public:
	loger_TEST();
private Q_SLOTS:
	// will be called before the first testfunction is executed.
	void initTestCase();
	// will be called after the last testfunction was executed.
	void cleanupTestCase();
	// will be called before each testfunction is executed.
	void init();
	// will be called after every testfunction.
	void cleanup();
	
	void CreateLoger();
	void TestStream();
	void TestAllLevel();
private:
	Loger* m_log;
	
};

#endif // LOGER_TEST_HPP
