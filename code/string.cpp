#include <iostream>
#include <assert.h>
using namespace std;
class String
{
public:
	String(const char *str);            //普通构造函数
	String(const String &other);             //复制构造函数
	~String(void);                           //析构函数
	String & operator=(const String &other);//赋值函数
private:
	char *m_String;                        //私有成员，保存字符串
};
String::String(const char *str)
{

	if (str == NULL)                         //如果str为空，存空字符串
	{
		m_String = new char[1];             //分配一个字节
		assert(m_String != NULL);
		cout << "普通构造函数" << endl;
		*m_String = '\0';                  //将之赋值为字符串结束符
	}
	else
	{
		m_String = new char[strlen(str) + 1]; //分配空间容纳str内容
		assert(m_String != NULL);
		cout << "普通构造函数" << endl;
		strcpy(m_String, str);             //赋值str到私有成员 
	}
}
String::String(const String &other)
{
	cout << "复制构造函数" << endl;
	m_String = new char[strlen(other.m_String) + 1];
	strcpy(m_String, other.m_String);
}
String::~String(void)
{
        assert(m_String != NULL);    //如果m_String 不为NULL，释放堆内存
		cout << "析构函数" << endl;
		delete[] m_String;              //释放后置为NULL
		m_String = NULL;


}
String & String::operator =(const String &other)
{
	cout << "赋值函数" << endl;
	if (this == &other)                   //如果对象与other是同一个对象
	{
		return *this;                  //直接返回本身
	}
	delete[] m_String;
	m_String = new char[strlen(other.m_String) + 1];
	strcpy(m_String, other.m_String);
	return *this;
}
void test() {
	String a("hello");           //调用普通构造函数
	String b("word");            //调用普通构造函数
	String c(a);                 //调用复制构造函数
	c = b;						 //调用赋值函数             
}
int main()
{
    test();
	system("pause");
	return 0;
}

