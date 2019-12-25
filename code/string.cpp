#include <iostream>
#include <assert.h>
using namespace std;
class String
{
public:
	String(const char *str);            //��ͨ���캯��
	String(const String &other);             //���ƹ��캯��
	~String(void);                           //��������
	String & operator=(const String &other);//��ֵ����
private:
	char *m_String;                        //˽�г�Ա�������ַ���
};
String::String(const char *str)
{

	if (str == NULL)                         //���strΪ�գ�����ַ���
	{
		m_String = new char[1];             //����һ���ֽ�
		assert(m_String != NULL);
		cout << "��ͨ���캯��" << endl;
		*m_String = '\0';                  //��֮��ֵΪ�ַ���������
	}
	else
	{
		m_String = new char[strlen(str) + 1]; //����ռ�����str����
		assert(m_String != NULL);
		cout << "��ͨ���캯��" << endl;
		strcpy(m_String, str);             //��ֵstr��˽�г�Ա 
	}
}
String::String(const String &other)
{
	cout << "���ƹ��캯��" << endl;
	m_String = new char[strlen(other.m_String) + 1];
	strcpy(m_String, other.m_String);
}
String::~String(void)
{
        assert(m_String != NULL);    //���m_String ��ΪNULL���ͷŶ��ڴ�
		cout << "��������" << endl;
		delete[] m_String;              //�ͷź���ΪNULL
		m_String = NULL;


}
String & String::operator =(const String &other)
{
	cout << "��ֵ����" << endl;
	if (this == &other)                   //���������other��ͬһ������
	{
		return *this;                  //ֱ�ӷ��ر���
	}
	delete[] m_String;
	m_String = new char[strlen(other.m_String) + 1];
	strcpy(m_String, other.m_String);
	return *this;
}
void test() {
	String a("hello");           //������ͨ���캯��
	String b("word");            //������ͨ���캯��
	String c(a);                 //���ø��ƹ��캯��
	c = b;						 //���ø�ֵ����             
}
int main()
{
    test();
	system("pause");
	return 0;
}

