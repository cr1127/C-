#include <iostream>
 
using namespace std;
 
template <typename T>
void Swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}


template <typename T1, typename T2, typename T3>
T1 add(T2 a, T3 b)
{
    T1 ret;
    ret = static_cast<T1>(a + b);
    return ret;
}


template <typename T>
void fun(T a)
{
    cout << "void fun(T1 a)" << endl;
}
 
template <typename T1, typename T2>
void fun(T1 a, T2 b)
{
    cout << "void fun(T1 a, T2 b)" << endl;
}
 
void fun(int a, float b)
{
    cout << "void fun(int a, float b)" << endl;
}


int main()
{
    int a = 10;
    int b = 20;
    Swap(a, b);	//�Զ��Ƶ�����
    //Swap<int>(a, b);//��ʾָ������
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
 
    float c = 12.3;
    float d = 23.4;
 
    //Swap(c, d); //�Զ��Ƶ�����
    Swap<float>(c, d); //��ʾָ������
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    //error���޷��Զ��Ƶ���������ֵ
    //cout << add(c, d) << endl; 
    //����ֵ�ڵ�һ�����Ͳ�����ָ��   
    cout << add<float>(a, d) << endl;  
    cout << add<int, int, float>(a, d) << endl;   

    a = 0;
    b = 0.0;
    
    fun(a); 
    //��ͨ����void fun(int a, float b)�Ѿ�������ƥ�䣬���ǵ�����ͨ����  
    fun(a, b);
    //������ã�����ģ���и��õ�ƥ�䣬���ǵ��ú���ģ�� 
    fun(b, a);
    //�޶�ֻʹ�ú���ģ��  
    fun<>(a, b);    
 

    return 0;
}
