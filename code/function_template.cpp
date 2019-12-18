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
    Swap(a, b);	//自动推到调用
    //Swap<int>(a, b);//显示指定调用
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
 
    float c = 12.3;
    float d = 23.4;
 
    //Swap(c, d); //自动推到调用
    Swap<float>(c, d); //显示指定调用
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    //error，无法自动推导函数返回值
    //cout << add(c, d) << endl; 
    //返回值在第一个类型参数中指定   
    cout << add<float>(a, d) << endl;  
    cout << add<int, int, float>(a, d) << endl;   

    a = 0;
    b = 0.0;
    
    fun(a); 
    //普通函数void fun(int a, float b)已经能完美匹配，于是调用普通函数  
    fun(a, b);
    //这个调用，函数模板有更好的匹配，于是调用函数模板 
    fun(b, a);
    //限定只使用函数模板  
    fun<>(a, b);    
 

    return 0;
}
