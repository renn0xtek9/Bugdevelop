#ifndef SINGELTON_HPP
#define SINGELTON_HPP


//! \class Singleton<T>
//! \brief Baseclass for the Singleton design pattern.
template<typename T>
class Singleton
{
public:
	static T* getInst()
	{
		if(m_pSelf != nullptr)
		{
		return m_pSelf;
		}
		else
		{
		m_pSelf = new T;
		return m_pSelf;
		}

	}
	//! Destroys the internal instance of T
	static void destroyInst()
	{
		if(m_pSelf != nullptr)
		{
		delete m_pSelf;
		m_pSelf = nullptr;
		}
	}
// 	Singleton()=delete;
// 	virtual ~Singleton()=delete;
	
protected:
	Singleton(){}
	virtual ~Singleton(){}
private:
	Singleton( const Singleton& )=delete;
	Singleton& operator=( const Singleton& ) {return *this;}

	static T* m_pSelf;
};

template<typename T> T* Singleton<T>::m_pSelf=0;
#endif // SINGELTON_HPP
