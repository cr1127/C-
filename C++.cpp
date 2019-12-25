1.取模主要是用于计算机术语中。取余则更多是数学概念 
    
  对于正整数而言，取模运算和取余运算时一样的。

  对于整型数a，b来说，取模运算或者求余运算的方法都是：

    1）求整数商： c = a/b;

    2）计算模或者余数： r = a - c*b.

  求模运算和求余运算在第一步不同: 取余运算在取c的值时，向0方向舍入（fix()函数）;而取模运算在计算c的值时，向负无穷方向舍入（floor()函数）。

  例如计算：-7 Mod 4

    那么：a = -7；b = 4；

    第一步：求整数商c，如进行求模运算c = -2（向负无穷方向舍入），求余c = -1（向0方向舍入）；

    第二步：计算模和余数的公式相同，但因c的值不同，求模时r = 1，求余时r = -3。

  归纳：当a和b符号一致时，求模运算和求余运算所得的c的值一致，因此结果一致。

       当符号不一致时，结果不一样。求模运算结果的符号和b一致，求余运算结果的符号和a一致。


2.KMP算法

  1）暴力匹配算法

    如果用暴力匹配的思路，并假设现在文本串S匹配到 i 位置，模式串P匹配到 j 位置，则有：

      - 如果当前字符匹配成功（即S[i] == P[j]），则i++，j++，继续匹配下一个字符；

      - 如果失配（即S[i]! = P[j]），令i = i - (j - 1)，j = 0。相当于每次匹配失败时，i 回溯，j 被置为0。

  2）kMP算法

    克努特-莫里斯-普拉特操作（简称KMP算法）


3.sizeof 是操作符，在编译阶段就获得结果，

  strlen 是函数调用，在运行阶段才获得值。

  sizeof(float)返回值是一个整型，在编译阶段被整型替代了，所以这是一个整型表达式。


4.从运行层面来看，java、objectC、C# 都是类c语言，Python只有它是动态语言，是解释执行的，其他语言都需要先编译。


5.有符号数与无符号数的转换 0正1负

  1）无符号转换成有符号：

    看有符号数的最高位是否为1，如果不为1（为0），则无符号数就直接等于有符号数；如果有符号数的最高位为1，则将有符号数取补码，得到的数就是无符号数。

  2）有符号整数转换为无符号整数：

    看有符号数的最高位是否为1，如果不为1（为0），则无符号数就直接等于有符号数；如果有符号数的最高位为1，则将有符号数取补码，得到的数就是无符号数。
   
  原码： 在数值前直接加一符号值的表示法

  反码：正数的反码与原码相同；负数 符号位为1，数值位按位取反加1.

  补码：正数的补码和原码相同。负数：符号位为1，符号位也是数值位，数值位按位取反加1.

  模的概念：把一个计量单位称之为模或模数。例如8位二进制数，它的模数为256.

  在计算机中整数用补码的形式表示,如果计算机的字长为n位，n位二进制数的最高位为符号位，其余n-1位为数值位，
  采用补码表示法时，可表示的数X的范围是 -2的n-1次幂≤X≤2的n-1次幂-1

  当n=8时，可表示的有符号数的范围为-128～+127。两个有符号数进行加法运算时，如果运算结果超出可表示的有符号数的范围时，就会发生溢出，使计算结果出错。
  很显然，溢出只能出现在两个同符号数相加或两个异符号数相减的情况下。


6.以0开头的整数代表八进制数，以0x或0X开头代表十六进制。十进制字面值是带符号数，八进制和十六进制字面既可能是带符号的也可能是无符号的。


7.变量提供一个具名、可供程序操作的存储空间。数据类型决定着变量所占内存空间的大小和布局方式、该空间能存储的值的范围，以及变量能参与的运算。

  变量定义的基本形式：首先是类型说明符，随后紧跟有一个或多个变量名组成的列表，其中变量名以逗号分隔，最后以分号结束。

  对象是指一块能存储数据并具有某种类型的内存空间。


8.初始化不是赋值，初始化的含义是创建变量时赋予其一个初始值，而赋值的含义是把对象的当前值擦除，而以一个新值来替代。

  列表初始化：无论初始化对象还是某些时候为对象赋新值，都可以使用这样一组由**花括号**括起来的初始值了。

  当用于内置类型的变量是，这种初始化形式有一个重要特点：如果我们使用列表初始化且初始化存在丢失信息的风险，则编译器将报错。


9.变量声明和定义的关系

  1）声明使得名字为程序所知，一个文件如果想使用别处定义的名字则必须包含对那个名字的声明。

  2）定义负责创建与名字关联的实体。

    变量声明规定了变量的类型和名字，在这一点上定义与之相同。但是除此之处，定义还申请存储空间，也可能会为变量赋一个初始值。

    声明一个变量而非定义它，就在变量名前添加关键字extern,而且不要显式地初始化变量。

    变量能且只能被定义一次，但是可以被多次声明。


10.标识符

  c++的标识符由字母、数字和下划线组成。其中必须以字母或下划线开头。但是对大小写字母敏感。

  变量命名规范:

    1）标识符要能体现实际含义；

    2）变量名一般用小写字母；

    3）用户自定义的类名一般以大写字母开头，如Sales_item.

    4）如果标识符由多个单词组成，则单词间应有明显区分，如 student_loan或studentLoan.


11.作用域 是程序的一部分，在其中名字有其特定的含义。c++语言中大多数作用域都以花括号分隔。


12.复合类型：引用和指针

  1）引用（别名）&：引用必须被初始化，不能定义引用的引用，为引用的提供的初始值，可以是一个变量，也可以是另一个引用名；
  同一个变量可以定义多个引用。引用本身不是对象。

    引用只能绑定在对象上，而不能与字面值或某个表达式的计算结果绑定在一起。

    引用的格式：类型 &引用 = 变量名；

  2）指针：与引用类似，都实现了对其他对象的间接访问。

    不同点：其一，指针本身是一个对象，允许对指针赋值和拷贝，而且在它生命周期内它可以先后指向几个不同的对象。其二：指针无须在定义时赋初值。

    指针存放某个对象的地址，要想获取该地址，需要使用**取地址符（&）**。

    指针的值（地址）应属于下列4种状态之一：

    1） 指向一个对象；

    2） 指向紧邻对象所占空间的下一个位置；

    3） 空指针，意味着指针没有指向任何对象；

    4） 无效指针，也就是上述情况之外的其他信息。

    如果指针一个指向一个对象，则允许使用解引用符（操作符*）来访问该对象。

    解引用操作仅适用于那些确定指向了某个对象的有效指针。

    得到空指针最直接的办法就是用字面值nullpter来初始化指针，C++程序最好使用nullpter,同时尽量避免使用NULL。

    赋值永远改变的是等号左侧的对象。


13.void* 指针 ：是一种特殊的指针类型，可用于存放任意对象的地址。一个(void*)指针存放着一个地址，这一点和其他指针类型。
  以它的视角来看内存空间也就仅仅是内存空间，没有办法访问内存空间中所存的对象。


14.指向指针的引用

  引用本身不是一个对象，因此不能定义指向引用的指针。但指针是对象，所以存在对指针的引用。

  面对一条比较复杂的指针或引用的声明语句时，从右到左阅读有助于弄清楚它的真实含义。


15.const 常量类型 常量名 = 常量值。

  const限定符：const对象必须初始化，初始值可以是任意复杂的表达式。

  如果想在多个文件之间共享const对象，必须在变量的定义之前添加extern关键字。

  const的引用也称为“常量引用”，与普通引用不同的是，对常量的引用不能被用作修改它所绑定的对象。

  引用的类型必须与其所引用对象的类型一致，但是有两个例外，第一种例外情况是在初始化常量引用是允许用任意表达式作为初始值，
  只要该表达式的结果能转换成引用的类型即可。

  对const的引用可能引用一个并非const的对象。

​  type *const p ;//指针是常量，不能被修改，但其所指内存区域是变量，可修改

​  type const *p/const type *p;//指向常量的指针，指针是变量，可在指向其他内存单元，但其所指单元是常量，不能修改；

​  cosnt type const *p;//是指向常量的常指针，指针及其所指内存单元都为常量，皆不能被修改。

  函数和const: 用const限制的函数能够保证函数不对参数做任何修改。


16.const指针
  
  常量指针必须初始化，而且一旦初始化完成，则它的值（也就是存放在指针中的那个地址）就不能再改变了。

  顶层const 表示的是任意的对象是常量，这一点对任何数据类型都适合。

  底层const则与指针和引用等符合类型的基本类型部分有关。表示指针所指的对象是一个常量。

  指针类型即可以是顶层const也可以是底层const。

  进行拷贝操作时，顶层const没有啥影响，对于底层const,拷入和拷出的对象必须具有相同的底层const资格。

  const在前 ， 内容不能变

  const在后， 指针不能变

  const* ，指针指向为常量

  *const, 指针本身为常量。


17.constexpr 和常量表达式
  
  常量表达式是指指不会改变并且在编译过程就能得到计算结果的表达式。（字面值属于常量表达式，用常量表达式初始化的const对象也是常量表达式）

​  声明为constexpr的变量一定是一个常量，而且必须用常量表达式初始化；一个constexpr指针的初始值必须是nulltpr或者0，或者是存储于某个固定地址中的对象。

  constexpr声明中如果定义了一个指针，限定符constexpr仅对指针有效，与指针所指的对象无关。


18.类型别名
  
  传统的方法是使用typedef;

  新标准规定了一种新的方法，使用别名声明来定义类型的别名：using SI = Sales_item;


19.auto类型说明符

  auto让编译器通过初始值来推算变量的类型。使用atuo也能在一条语句中声明多个变量。
  因为一条声明语句只能有一个基本数据类型，所以该语句中所有变量的初始基本数据类型都必须一样。 

  编译器以引用对象的类型作为auto的类型,auto一般会忽略顶层const,同时底层const则会保留下来。
  如果希望推断出的auto类型是一个顶层const，需要明确指出。

  auto 变量必须在定义时初始化，这类似于const关键字。

  定义在一个auto序列的变量必须始终推导成同一类型。

  如果初始化表达式是引用，则去除引用语义。
  int a = 10;
  int &b = a;
  auto c = b;//c的类型为int而非int&（去除引用）

  如果初始化表达式为const或volatile（或者两者兼有），则除去const/volatile语义。

  如果auto关键字带上&号，则不去除const语意。

  初始化表达式为数组时，auto关键字推导类型为指针。
  int a3[3] = { 1, 2, 3 };
  auto b3 = a3;
  cout << typeid(b3).name() << endl;
  程序将输出 int*

  若表达式为数组且auto带上&，则推导类型为数组类型
  程序将输出 int[3]

  函数或者模板参数不能被声明为auto

  时刻要注意auto并不是一个真正的类型。
  auto仅仅是一个占位符，它并不是一个真正的类型，不能使用一些以类型为操作数的操作符，如sizeof或者typeid。


20.decltype类型指示符
  
  decltype的作用是选择并返回操作数的数据类型。

  decltype((variable))(注意事双层括号)的结果永远是引用，而decltype(variable)结果只有当variable本身就是一个引用才是引用。

21.string对象

  cin >> s;  //将string对象读入s,遇到空白停止

  while(cin >> s) //读取未知数量的string对象

  getline(cin, line) // 使用getline读取一整行

  由于size()函数返回的是一个无符号整型数的值，而且能足够存放下任何string对象的大小。
  所有用于存放string类型的size函数返回值的使用，都应该是string：：szie_type类型的。允许编译器通过auto或者decltype来推断变量的类型。


22.标准库类型vector

  列表初始化vector<int> v1(10,-1) ; //初始化10个-1    vector<string > articles ={"a","an","the"};

  向vector对象中添加元素 使用 v1.putsh_back(2);  

  v1.size()  //返回v1中的元素的个数
  
  v1.empty()  //如果v1不含有任何元素，返回真，否则返回假。、

  不能用下标形式添加元素。


23.迭代器介绍

  auto   b = v.begin() , e = v.end();  //b表示v的第一个元素，表示v尾元素的下一个位置 [begin, end)

  迭代器类型 const_iterator 和常量指针差不多，能读取但不能修改它所指的元素之。iterator 的对象可读可写。

  得到const_iterator 类型的返回值，引入两个新函数，分别是cbegin和 cend; 但凡是使用了迭代器的循环体，都不要向迭代器所属的容器调加元素。

  遍历数组和vector 时，使用for语句 

  for( auto i ：scores)
    cout  <<  i  << " ";
  cout << endl;


24.指针和数组

  使用取地址符(&)来获取指向某个对象的指针，取地址符可以用于任何对象。对数组的元素使用取地址符就能得到指向该元素的指针。
  在大多数表达式中，使用数组类型的对象其实是使用一个指向该数组首元素的指针。

  指针也是迭代器。标准库函数begin和end  ，begin函数返回指向数组ia首元素的指针，end函数返回指向数组ia尾元素下一位置的指针。

  假设结果指针指向一个元素，则允许解引用(*) 该结果指针。内置的下标运算所用的索引值不是无符号类型，这一点与vector和string不一样。


25.使用数组初始化vector对象

  int	int_arr[] 	= {0,1,2,3,4,5};

  vector<int>  ivec(begin(int_arr), end(int_arr));

  现代的C++程序应当尽量使用vector 和迭代器，避免使用内置数组和指针，应该尽量使用string，避免使用C风格的基于数组的字符串。


26.使用范围for语句处理多维数组

  要使用范围for语句处理多维数组，除了最内层的循环外，其他所有循环的控制变量都应该是引用类型。

  for ( auto & row : ia)
    for (auto col : row)
      cout <<  col  << endl;


27.类型

  - 内置类型：编译器内置的基本类型，如int, char, float, double, bool等

  - 复合类型：根据其它类型定义的类型，主要有这么几类：数组，字符串(C-style)，指针，引用，结构体(struct)，联合体(union)；

  - 类类型：用struct和class定义的类。


28.重载运算符

  c++语言定义了运算作用于内置类型和复合类型的运算对象时所执行的操作.当运算符作用于类类型的运算对象时，用户可以自行定义其含义。
  因为这种自定义的过程事实上是为已存在的运算符赋予了另外一层含义，所以称之为重载运算符。

  使用重载运算符时，其包括运算对象的类型和返回值的类型，都是由运算符定义的，但是运算对象的个数。
  运算符的优先级和结合律都是无法改变的。不改变语法结构。

  类重载、覆盖、重定义之间的区别：

  重载指的是函数具有的不同的参数列表，而函数名相同的函数。重载要求参数列表必须不同，比如参数的类型不同、参数的个数不同、参数的顺序不同。
  如果仅仅是函数的返回值不同是没办法重载的，因为重载要求参数列表必须不同。（发生在同一个类里）

  覆盖是存在类中，子类重写从基类继承过来的函数。被重写的函数不能是static的。必须是virtual的。
  但是函数名、返回值、参数列表都必须和基类相同（发生在基类和子类）

  重定义也叫做隐藏，子类重新定义父类中有相同名称的非虚函数（参数列表可以不同）。（发生在基类和子类）


29.左值和右值

  当一个对象被用作右值的时候，用的是对象的值，当对象被用作左值的时候，用的是对象的身份（在内存中的位置）。
  一个重要的原则是在需要右值的地方可以用左值来代替，但是不能把右值当成左值（也就是位置）使用。


30.处理复合表达式

   1）拿不准的时候最好用括号来强制让表达式的组合关系符合程序逻辑的要求。

   2）如果改变了某个运算对象的值，在表达式的其他地方不要在使用这个运算对象。


31.递增和递减运算符

  除非必须，否则不用递增递减运算符的后置版本。

  后置递增运算符的优先级高于解引用运算符，因此*pbeg++ 等价于 *(pbeg++)

  解引用运算符的优先级低于点运算符。


32.条件运算符

  cond? expr1:expr2; // if-else 逻辑


33.位运算符

  位运算符作用于整数类型的运算对象，并把运算对象看成是二进制位的集合。

  | 运算符 |  功能  |
  | :----: | :----: |
  |   ~    | 位求反 |
  |   <<   |  左移  |
  |   >>   |  右移  |
  |   &    |  位与  |
  |   ^    | 位异或 |
  |   \|   |  位或  |


34.sizeof运算符

  sizeof运算符返回一条表达式或一个类型名字所占的字节数。sizeof运算符满足右结合律，其所得的值是一个size_t类型的常量表达式。

  类型转换中当我们赋给无符号类型一个超出它表示范围的值时，结果是初始值对无符号类型表示数值总数取模后的余数。


35.命名的强制类型转换

  cast_name<type>(expression);

  cast_name是static_cast、dynamic_cast、const_cast、reinterpret_cast 中一种。

  static_cast :  任何具有明确定义的类型转换，只要不包含底层const,都可以使用static_cast.

  const_cast: 只能改变运算对象的底层const.

  reinterpret_cast: 通常为运算对象的位模式提供较低层次上的重新解释。


36.空语句和复合语句(块)

  空语句： 只含有一个单独的分号；如果在程序的某个地方，语法上需要一条语句但是逻辑上不需要，此时应该使用空语句。

  复合语句：指用花括号括起来的语句和声明的序列，复合语句也被称作块。
  如果在程序的某个地方，语法上需要一条语句，但是逻辑上需要多条语句，则应该使用复合语句。


37.switch语句

  switch(cin >> ch)  
  {   
    case 'a': ++ aCnt; break;   
    case 'b': ++bCnt; break; 
    default:  break; 
  } 

  case标签必须是整型常量表达式。default标签表示的是没有任何一个case标签能匹配上switch表达式的值。


38.迭代语句

  它通常称为循环，它重复执行操作直到满足某个条件才停下来。

  范围for语句  

  for(declaration ：expression)  
    statement; 

  experssion表示的必须是一个序列，比如用花括号括起来的初始值列表、数组、vector或string等类型的对象。

  declaration定义一个变量，序列中的每个元素都得能转换成该变量的类型。
  确保类型相容最简单的办法是使用auto类型说明符。
  如：
  vector<int> v={0,1,2,3,4,5,6,7};
  //若想改变容器内元素的值，范围变量必须是**引用**类型
  for (auto &r : v )  //对v中的每个元素
    r*=2;           //将v中的每个原素的值翻倍

39.try语句块和异常处理

  异常处理包括： throw表达式、try语句块、一套异常类，用在throw表达式和相关的catch子句之间传递异常的具体信息。

  throw表达式：包含关键字throw和紧随其后的一个表达式，其中表达式的类型就是抛出的异常类型。
  throw表达式后面通常紧跟一个分号，从而构成一条表达式语句。

  try语句块 

  try {
    program-statments  //组成程序的正常逻辑
    } catch (expcetion-declaration) {  //异常声明
      handler-statements
    } catch (exception-declaration) {
      handler-statements
    }


39.局部静态对象

  在程序的执行路径第一次经过对象定义语句时初始化，并且直到程序终止才被销毁，在此期间即使对象所在的函数结束执行也不会对它有影响。
  可以将局部变量定义成static类型从而获得这样的对象。

  size_t count_calls()
  {
    static size_t ctr = 0;
    return ++ ctr;
  }

  int main() 
  {
     for (size_t i = 0; i != 10; ++i)
      cout << count_calls() << endl;
    return 0;
  }


40.数组形参

  int *matrix[10];  //10个指针构成的数组

  int  (*matrix)[10];  // 指向含有10个整数的数组的指针

  initializer_list<T>  lst;  

  lst.size() //列表中的元素数量
    
  lst.begin()  //返回指向lst中首元素的指针

  lst.end()  //返回指向lst中尾元素下一位置的指针

  和vector不一样的是，initializer_list对象中的元素永远是常量值，我们无法改变initializer_list对象中元素的值。


41.返回类型和return语句

  return语句终止当前正在执行的函数并将控制权返回到调用该函数的地方。

  无返回值函数，void函数如果想在它的中间位置提前退出，可以使用return语句。

  在含有return语句的循环后面应该也有一条return语句，如果没有的话该程序就是错误的。很多编译器都无法发现此类错误。

  列表初始化返回值   函数可以返回花括号包围的值的列表。类似于其他返回结果，此处的列表也用来对表示函数返回的临时量进行初始化。


42.内联函数inline

  inline 返回值类型 函数名(函数参数) {
  //此处定义函数体
  }

  一般来说，inline适用的函数有两种，一种是在类内定义的成员函数，另一种是在类内声明，类外定义的成员函数，
  对于这两种情况inline的使用有一些不同： 

  第一种：在类内定义的成员函数，可以不用再函数头部加inline关键字。

  第二种：在类外定义的成员函数，必须在函数头部加inline关键字。

  使用注意事项：

  内联函数不能包括复杂的控制语句，如循环语句和switch语句；只将规模很小而使用频繁的函数声明为内联函数。


43.constexpr函数

  它是指能用于常量表达式的函数。要遵循几项约定：函数的返回类型以及所有形参的类型都得是字面值类型，而且函数体中必须有且只有一条return语句。
  算术类型、引用和指针都属于字面值类型。
  尽管指针和引用可以定义成constexpr，但它们的初始值受到严格限制。一个constexpr指针的初始值必须是nullptr、0或存储于某个固定地址中的对象。

44.queue函数 队列  stack 栈

  queue<Type> M ;

  M.empty() //是否为空

  M.push()//从已有元素后面增加元素

  M.size()//输出现有元素的个数

  M.front()//显示第一个元素

  M.back()//显示最后一个元素

  M.pop()//清除第一个元素

  stack<Type> N

  N.empty() //是否为空

  N.size() //栈中元素的个数

  N.top() //返回栈顶元素，但是不删除该元素

  N.pop() //弹出栈顶元素，但不返回其值

  N.push() //将元素压入栈顶。


45.sort函数

  void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);

  1）第一个参数first：是要排序的数组的起始地址。

  2）第二个参数last：是结束的地址（最后一个数据的后一个数据的地址）

  3）第三个参数comp是排序的方法：可以是从升序也可是降序。
  如果第三个参数不写，则默认的排序方法是从小到大排序。可以直接进行比较greater<int>() 递减， less<int>() 递增（省略） 


46.输出格式控制符

  //设置浮点数的精度，n是有效数字，输出的所有数值。
  setprecision(n);

  //设置域宽，n是输出数据占用屏幕宽度的字符个数，默认是按右对齐。输出数据的位数比n小，则左边留空，
  //如果大，则输出数据将自动扩展到所需要占用的列数。
  setw(n);

  //设置或取消输入/输出数据的各种格式，包括改变数值基数，设置浮点数的精度，转换字母大小写，设置对齐方式等。
  setiosflags(ios::left或者ios::right);
  resetiosflags();


47.动态内存

  malloc()和free();

  new 和 delete[]


48.函数

  函数重载就是允许在同一程序中(确切地讲是指在同一作用域内)定义多个同名函数，
  这些同名函数可以有不同的返回类型、参数类型、参数个数，以及不同的函数功能。

  inline函数:它的声明或定义不许在调用之前完成；一般而言，只有几行程序代码的、经常被调用的简单函数才适宜作为内联函数。


49.预处理器

  //#define常用于定义一个标识符常量或带参数的宏

  //#undef用于删除由#define定义的宏，使之不在起作用。


50.作用域

  作用域是指标识符在程序中的有效范围。生命期是指标识符在程序中的生存周期，也就是程序运行过程中，标识符在内存中存在的时间。

  C++的作用域大致可以分为全局作用域、局部作用域和文件作用域三种。
  还有一种更细的分法，按照作用域范围，作用域从大到小分为程序作用域、文件作用域、类作用域、函数作用域和块作用域5种类型。

  作用域限定符:: 在函数中，若局部变量和某个全局变量同名，可用作用域下限定符::

  存取全局变量的值。用法非常简单，就是在变量名前面加上作用域限定符::


51.文件输入和输出

  #include<fstream.h>
  ifstream inData; //定义输入文件流变量
  ofstream outData; //定义输出文件流变量
  filVar.open(filename,mode);//fileVar是上面定义的文件流变量，filename是磁盘文件名，mode是打开或建立文件的方式，可以是：
  ios::in  打开输入文件，ifstream类型变量的默认方式
  ios::out 建立输出文件，ofstream类型变量的默认方式
  ios::app 增加方式，若文件存在，将在文件尾增加数据，若不存在，就建立文件
  ios::trunc 若文件存在，则文件中已有内容将被清除
  ios::nocreate 若文件不存在，则打开操作失败
  ios::noreplace 若文件存在，则打开操作失败

  filVar.close(); //关闭文件 


52.类与对象

  类是面向对象程序设计的核心，是实现数据封装和信息隐藏的工具，是继承和多态的基础。

  类是一种有别于普通数据类型的自定义数据类型。

  1）普通数据类型只能包括数据定义，

  2）类却可以同时包括数据合函数的定义。并把他们组合成一个整体。对象其实是有类定义出来的变量。

  广义地讲，类与对象就是数据类型与变量的关系，类相当于一种数据类型，对象就是用数据类型定义的变量。

  struct将所有的成员都默认为public权限，这很不安全。
  如果在设计结构时，本想将成员设置为private权限，但因疏忽而忘记加上关键字private，成员就变成公有权限。

  c++引进了功能与struct相同但更安全的数据类型——类 class。一对{}表示类的范围，（}）后面的分号必不可少，表示类声明的结束。    

  数据成员可以是任何数据类型，如整型、浮点型、字符型、数组、指针、引用等，
  也可以是另外一个类的对象或指向对象的指针，还可以是指向自身类的指针或引用，但不能是自身类的对象。
  数据成员不能指定为自动、寄存器和外部存储类型。在声明类时，不能为数据成员赋初值。

  类对象的引用与结构相似，必须用成员访问限定符“.”作为对象名和对象成员之间的间隔符，
  如果定义了对象指针，在通过指针访问对象成员，要用->作为指针对象和对象成员之间的间隔符。

  构造函数具有以下几个特点：构造函数与类同名，构造函数没有返回类型，构造函数可以重载，构造函数有系统自动调用，不允许在程序中显式调用。


53.逗号表达式（x++,y++）的结果是y的值

  逗号表达式的求值顺序是从左向右的，最后一个表达式的值就是整个逗号表达式的值。


54.模板和泛型编程

  在c++中，存在泛型编程的概念：即不考虑具体数据类型的编程方式。泛型编程有函数模板和类模板
    
  1）函数模板 (function_template.cpp)
       
    函数模板是一种特殊的函数，可以使用不同的类型进行调用，对于功能相同的函数，不需要重复编写代码，并且函数模板与普通函数看起来很类似，
    区别就是类型可以被参数化。
       
    函数模板通过template与typename两个关键字来定义，如下：
       
    -template 关键字用于声明开始进行泛型编程
       
    -typename 关键字用于声明泛指类型,还可以用class
    
    // 模板类型参数
    // <typename T, typename T1, ...>为模板参数列表 T为模板类型参数或类型参数
    template <typename T>
	
	  void Swap(T& a, T& b)
    {
      T t = a;
	    a = b;
	    b = t;
	  }

    类型参数可以用来指定返回类型或函数的参数类型，以及在函数体内用来变量声明或者类型转换。
	
    使用函数模板时有两种方式
	
    - 自动类型推到调用 Swap(a, b)
	
    - 具体类型显示调用 Swap<int>(a, b)

    // 非类型模板参数 
    非类型模板参数表示一个值而非一个类型，我们通过一个特定的类型名（如：int）而非关键字 class 或者 typename 来指定非类型参数

    template <unsigned N, unsinged M>
    int compare(const char (&p1)[N], const char (&p2)[M])
    {
      return strcmp(p1, p2);
    }

    一个非类型参数可以是一个整型，或者是一个指向对象或函数类型的指针或（左值）引用。绑定到非类型整型参数的实参必须是一个常量表达式。
    绑定到指针或引用非类型参数的实参必须具有静态的生存期。指针参数也可以用nullptr或者一个值为0的常量表达式来实例化。

    模板非类型参数是一个常量值。在需要常量表达式的地方，可以使用非类型参数，例如，指定数组大小。

    inline 或 constexpr 说明符放在模板参数列表之后，返回类型之前。
    
	
    深入理解下函数模板：

    - 对于函数模板中使用的类型不同，编译器会产生不同的函数
	
    - 编译器会对函数模板进行两次编译
	
    - 第一次是对函数模板本身进行编译，包括语法检查等
	    
    - 第二次是对参数替换后的代码进行编译，这就相当于编译普通函数一样，进行类型规则检查等。

    需要注意的是:
       
    - 函数模板是不允许隐式类型转换的，调用时类型必须严格匹配
	     
    函数模板还可以定义任意多个不同的类型参数，但是对于多参数函数模板：
       
    - 编译器是无法自动推导返回值类型的
	
    - 可以从左向右部分指定类型参数
	
    如：
       
      int c = 12;
      float d = 23.4;
       
      cout << add<float>(c, d) << endl;
      cout << add<int, int, float>(c, d) << endl;

    函数模板跟普通函数一样，也可以被重载
       
    - C++编译器优先考虑普通函数
	
    - 如果函数模板可以产生一个更好的匹配，那么就选择函数模板

    - 也可以通过空模板实参列表<>限定编译器只匹配函数模板

    我们将类定义和函数声明放在头文件中，而普通函数和类的成员函数的定义放在源文件中。
    函数模板和类模板成员函数的定义通常放在头文件中。

  2）类模板 （如 ： vector<int >）

  声明类模板的语法为：

  template<typename 类型参数1 , typename 类型参数2 , …> 
  class 类名{
    //TODO
  };



    
55.C++重载运算符和重载函数
  
  1）函数重载

  在同一个作用域内，可以声明几个功能类似的同名函数，但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。
  您不能仅通过返回类型的不同来重载函数。

  2）重载运算符

  重载的运算符是带有特殊名称的函数，函数名是由关键字 operator 和其后要重载的运算符符号构成的。
  与其他函数一样，重载运算符有一个返回类型和一个参数列表。

  Box operator+(const Box&);

  声明加法运算符用于把两个 Box 对象相加，返回最终的 Box 对象。
  大多数的重载运算符可被定义为普通的非成员函数或者被定义为类成员函数。
  如果我们定义上面的函数为类的非成员函数，那么我们需要为每次操作传递两个参数，如下所示：

  Box operator+(const Box&, const Box&);

  可重载运算符/不可重载运算符

  下面是可重载的运算符列表：

  双目算术运算符 + (加)，-(减)，*(乘)，/(除)，% (取模)
  
  关系运算符 ==(等于)，!= (不等于)，< (小于)，> (大于)，<=(小于等于)，>=(大于等于)
  
  逻辑运算符 ||(逻辑或)，&&(逻辑与)，!(逻辑非)
  
  单目运算符 + (正)，-(负)，*(指针)，&(取地址)
  
  自增自减运算符 ++(自增)，--(自减)
  
  位运算符  | (按位或)，& (按位与)，~(按位取反)，^(按位异或),，<< (左移)，>>(右移)
  
  赋值运算符 =, +=, -=, *=, /= , % = , &=, |=, ^=, <<=, >>=
  
  空间申请与释放 new, delete, new[ ] , delete[]
  
  其他运算符 ()(函数调用)，->(成员访问)，,(逗号)，[](下标)

  下面是不可重载的运算符列表：

  . ：成员访问运算符

  .*, ->* ：成员指针访问运算符

  :: ：域运算符

  sizeof ：长度运算符

  ?: ：条件运算符

  # ： 预处理符号

  
56.抽象类和接口

  1）抽象类（abstract_shape.cpp）

  其实，在c++中并没有抽象类的概念，要实现抽象类则需要通过纯虚函数实现。纯虚函数指的是只定义函数原型的成员函数。
  在c++的类中，只要存在纯虚函数，那么该类就变成抽象类。

  (1) 每个具体图形的求面积算法不一样，所以加上virtual关键字，表明该函数是虚函数，在子类中重写时可以发生多态；

  (2) 为对Shape类求面积无意义，所以加上”= 0”表明该函数声明为纯虚函数，不需要定义函数体。

  (3) 抽象类不能生成对象，只能用作父类被继承，子类必须实现纯虚函数的具体功能，
  在子类中，父类的纯虚函数被实现后就变成虚函数，当然，如果子类没有实现父类的纯虚函数，那么子类也是抽象类一个。
  
  2）接口

  满足下面条件的C++类则成为接口:

  (1) 类中没有定义任何的成员变量 

  (2) 所有的成员函数都是公有的 

  (3) 所有的成员函数都是纯虚函数 

  (4) 接口是一种特殊的抽象类。


57.static 和 const

  1）static 定义

  (1) Static意为静态成员，若Static修饰的成员位于C++类中，那么Static就实现了同一个类，多个对象共享数据，协调行为的目的。

  (2) 静态变量具有全局变量的优势，又不会像全变量一样被滥用。C++中用于管理静态变量，就需要用到静态函数.

  (3) C++中类的静态成员，属于类，也属于对象，但终归属于类。(比较绕，直接记做属于类)

  static静态成员小结

  (1) 共享 ： static 成员变量实现了同族类对象间信息共享;
  
  (2) 初始化：static 成员使用时必须初始化，且只能类外初始化。声明与实现分离时;只能初始化在实现部分(cpp 部分);
  
  (3) 类大小： static 成员类外存储，求类大小，并不包含在内;
  
  (4) 存储 ： static 成员是命名空间属于类的全局变量，存储在 data 区 rw 段;
  
  (5) 访问 ：可以通过类名访问(无对象生成时亦可)，也可以通过对象访问。

  (6) static静态成员可以被类内的普通函数静态函数都可访问。
  
  static静态函数小结
  
  (1) 静态成员函数的意义，不在于信息共享，数据沟通，而在于管理静态数据成员， 完成对静态数据成员的封装。
  
  (2) staitc 修饰成员函数，仅出现在声明处，不可在定义处。
  
  (3) 静态成员函数只能访问静态数据成员。原因：非静态成员函数在调用时 this指针被当作参数传进。
  而静态成员函数是属于类，不属于对象，没有 this 指针。

  2）const 变量

  (1) const 修饰数据成员，称为常数据成员。常数据成员可被普通成员函数和常成员函数来使用，不可以更改。

  (2) const 常数据成员在使用前必须被初始化。也就是定义的同时就要初始化，之后不能再去赋值，只能使用。
      可以在类中(不推荐)，或初始化参数列表中(这是在类对象生成之前唯一一次改变 const 成员的值的机会了)。

  const 正确初始化方法<采用初始化列表进行初始化>

  (1) 初始化列表先与本对象的构造函数执行。

  (2) 初始化列表与成员的声明顺序相同的。

  const函数

  (1) const 修饰函数放在声明之后，实现体之前。

  (2) const 修饰函数不能修改类内的数据成员变量。

  (3) const 修饰函数只能调用 const 函数。非 const 函数可以调用 const 函数。

  (4) const 修饰的全局函数在定义和声明处都需要 const 修饰符。


58.虚函数

  虚函数在基类中使用关键字virtual声明的函数。在派生类中重新定义基类中定义的虚函数，会告诉编译器不要静态链接到该函数。

  我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用函数，这种操作被称为动态链接，或者后期绑定。

  纯虚函数 virtual int area() = 0;


59.函数参数传递的三种方式(x,*x,&x)

  1）值传递

  这种传递方式中，实参和形参是两个不同的地址空间，参数传递的实质是将原函数中变量的值，
  复制到被调用函数形参所在的存储空间中，这个形参的地址空间在函数执行完毕后，会被回收掉。
  整个被调用函数对形参的操作，只影响形参对应的地址空间，不影响原来函数中的变量的值，因为这两个不是同一个存储空间。

  2）引用传递
  
  这种传递方式中，形参是引用类型变量，其实是实参的一个别名，在被调用函数中，对引用变量的所有操作等价于对实参的操作。
  整个被调用函数对形参的操作执行完毕后，原先的实参的值也会发生改变。

  3）指针传递

  这种传递方式中，实参是变量的地址{swap(&a,&b);}，形参是指针类型的变量。在函数中对指针变量的操作，
  就是对实参(变量地址)所对应的变量的操作。整个被调用函数对形参的操作执行完毕后，原函数中的变量的值将会发生改变。

  //值传递   交换前a=1,b=2;交换后a=1,b=2;
  void swap(int a,int b){
      int temp=a;
      a=b;
      b=temp;
  }
   
  //引用传递  交换前a=1,b=2;交换后a=2,b=1;
  void swap(int &a,int &b){
      int temp=a;
      a=b;
      b=temp;
  }
   
  //指针传递  交换前a=1,b=2;交换后a=2,b=1;
  void swap1(int *a,int *b){
      int temp=*a;
      *a=*b;
      *b=temp;
  }

  swap(a,b);//值传递和引用传递
  swap1(&a,&b);//指针传递


60.调试帮助

  1）assert预处理宏
  
  assert是一种预处理宏，所谓的预处理宏其实是一个预处理变量，它的行为有点类似于内联函数，assert宏使用一个表达式作为它的条件：
  assert(expr);

  首先对expr求值，如果表达式为假，assert输出信息并终止程序的执行。如果1表达式为真，assert啥都不做

  2）NDEBUG预处理变量

  如果没有定义NDEBUG, 将执行#ifndef和#endif之间的代码，如果定义了NDEBUG,这些代码将被忽略

  #ifndef NDEBUG
    cerr << _ _func_ _ //存放当前调试的函数的名字
    cerr << _ _FILE_ _ //存放文件名的字符串字面值
    cerr << _ _LINE_ _ //存放当前行号的整型字面值
    cerr << _ _TIME_ _ //存放文件编译时间的字符串字面值
    cerr << _ _DATE_ _ //存放文件编译日期的字符串字面值
  #endif


61.顺序容器
  
  1）顺序容器的类型：

  vector                 可变大小的数组。支持快速随机访问。在尾部之外的位置插入或者删除元素可能很慢

  deque                  双端队列。支持快速随机访问。在头尾位置插入/删除速度很快

  list                   双向链表。只支持双向顺序访问。在list中任何位置进行插入/删除操作速度都很快

  forward_list           单向链表。只支持单向顺序访问。在链表任何位置进行插入/删除操作速度都很快，没有size操作。

  array                  固定大小数组。支持快速随机访问。不能添加或删除元素

  string                 与vector相似的容器，但专门用于保存字符。随机访问快。在尾部插入/删除速度快

  string和vector将元素保存在连续的内存空间中。由于元素是连续存储的，由元素的下标来计算其地址是非常快速的。适合随机访问，
  不适合中间位置进行添加和删除元素。

  list 和 forward_list 两个容器的设计目的是令容器任何位置的添加和删除操作都很快速。不支持元素的随机访问。

  deque 与string和vector相似，但是在deque的两端添加和删除元素都很快。

  forward_list和array是新C++标准增加的类型。与内置数组相比，array是一种更安全、更容易使用的数组类型，大小是固定的。
  forward_list的设计目的是达到与最好的手写的单向链表数据结构相当的性能。因此，forward_list没有size操作。

  确定使用哪种顺序容器

  通常情况下，使用vector是最好的选择

  如果你的程序由很多小的元素，且空间的额外开销很重要，则不要使用list或者forward_list.

  如果程序只有在读取输入时才需要在容器中间位置插入元素，随后需要随机访问元素，则
  ——首先，确定是否真的需要在容器中间位置添加元素，如果不要，插入到vector尾部，之后调用sort函数。
  ——如果必须在中间位置插入元素，输入阶段使用list，一旦输入完成，将List中的内容拷贝到一个vector中。

  2）begin 和 end 成员

  auto it1 = a.begin(); // list<string>::iterator

  auto it2 = a.rbegin(); // lis<string>::reverse_iterator

  auto it3 = a.cbegin(); // list<string>::const_iterator

  auto it4 = a.crbegin(); // list<string>::const_reverse_iterator

  3）容器的定义和初始化

  将一个新容器创建为另一个容器的拷贝的方法有两种:可以直接拷贝整个容器，或者（array）拷贝由一个迭代器对指定的元素范围。
  当将一个容器初始化为另一个容器的拷贝时，两个容器的容器类型和元素类型都必须相同。

  列表初始化 {}

  与顺序容器大小相关的构造函数才接受大小参数，关联函数并不支持。
  vector<int> ivec(10, -1);

  标准库array具有固定大小

    使用array类型，我们必须同时指定元素类型和大小：array<int, 42> //类型为：保存42个int的数组

    值得注意的是，虽然我们不能对内置数组类型进行拷贝或对象赋值操作，但是array并无此限制。

  4）赋值和swap

  1）swap
  swap(c1, c2);       //交换c1和c2中的元素，c1和c2必须具有相同的类型。swap通常比从c2向c1拷贝元素快得多。
  c1.swqp(c2);

  除了array外，交换两个容器内容的操作会保证很快--元素本身并未交换，swap只是交换了两个容器的内部数据结构。

  除了string外，指向容器的迭代器、引用和指针在swap操作之手都不会失效。它们仍指向swap操作之前所指向的那些元素。

  对于array，在操作之后，指针、引用和迭代器所绑定的元素保持不变，但元素值已经与另一个array中对应元素的值进行了交换。

  2）assign操作（仅顺序容器，不适合关联容器和array）

  seq.assign(b, e); //将seq中的元素替换为迭代器b和e所表示的范围中的元素。迭代器b和e不能指向seq中的元素。

  seq.assign(i1);

  seq.assign(n, t); //将seq中的元素替换为n个值为t的元素。

  可以用assign实现将一个vector中的一段char*值赋予一个list中的string。

  5）容器大小操作

  除了一个例外，每个容器类型都由三个与大小相关的操作。成员函数size、empty、max_size。
  max_size返回一个大于或者等于该类型容器所能容纳的最大元素数的值。

  forward_list支持max_size和empty，但不支持size

  6）关系运算符

  每个容器都有支持相等运算符（=、！=），除了无序关联容器外的所有容器都支持关系运算符（>、>=、<、<=）。

  比较两个容器实际上是进行元素的逐对比较，运算符的工作方式与string的关系运算符类似：

  (1) 如果两个容器具有相同大小且所有元素都两两对应相等，则这两个容器相等，否则两个容器不等。

  (2) 如果两个容器大小不同，但较小容器中每个元素都等于较大容器中的对应元素，则较小容器小于较大容器。

  (3) 如果两个容器都不是另一个容器的前缀子序列，则它们的比较结果取决于第一个不相等的元素的比较结果。

  7）顺序容器操作

  (1) 向顺序容器添加元素

    这些操作会改变容器大小，array不支持这些操作。

    forward_list 不支持push_back 和 emplace_back。

    vector 和 string 不支持 putsh_front 和 emplace_front。

    # 当调用push或insert成员函数时，我们将元素类型的对象传递给它们，这些对象被拷贝到容器中。
    # 而当我们调用一个emplace成员函数时，则是将参数传递给元素类型的构造函数。
    # 传递给emplace函数的参数必须于元素类型的构造函数匹配。
    # emplace相关函数可以减少内存拷贝和移动。

    c.putsh_back(t)                 //在c的尾部创建一个值为t或者由args创建的元素，返回void
    c.emplace_back(args)

    c.putsh_front(t)
    c.empace_front(args)

    c.insert(p, t)
    c.emplace(p, args)

    c.insert(p, b, e)

    c.insert(p, il)

    除了array和forward_list之外，每个顺序容器（包括string）都支持push_back。

    forward_list、list和deque容器还支持push_front。
    
    vector、list、deque和string都支持insert成员，forward_list提供了特殊版本的insert成员。

    # 将元素插入到vector、deque和string中任何位置都是合法的。然而，这样做可能很耗时。

    使用insert的返回值
    list<string> lst;
    auto iter = lst.begin();
    while(cin >> word) {
      iter = lst.insert(iter, word);
    }
    // insert返回的迭代器恰好指向这个新元素。
    
    访问容器的元素之前要确定非空

    包括array在内的每个顺序都有一个front成员函数，而除了forward_list之外的所有顺序容器都由一个back成员函数。这两个操作分别返回首元素和尾元素的引用。

    at和下标操作只适用于string、vector、deque 和 array。
    c[n] 返回c中下标为n的元素的引用。
    c.at(n) 返回下标为n的元素的引用。如果下标越界，则抛出out_of__range异常。

    访问成员函数返回的都是引用。如果我们使用auto变量来保存这些函数的返回值，并且希望使用此变量来改变元素的值，必须记得将变量定义为引用变量。

  (2) 删除元素

    forward_list有特殊版本的erase

    forward_list 不支持 pop_back; vector 和string 不支持pop_front.

    c.pop_back()

    c.pop_front()

    c.erase(p)          //删除迭代器p所有指定的元素，返回一个指向被删元素之后元素的迭代器。

    c.erase(b, e)       //删除迭代器b和e所指定的范围内的元素。返回一个指向最后一个被删元素之后的迭代器。

    c.clear()           //删除c中的所有元素。

  


62.size_t 和 size_type 区别

  1）size_t是全局定义的类型；size_type是STL类中定义的类型属性，用以保存任意string和vector类对象的长度

  2）string::size_type 制类型一般就是unsigned int, 但是不同机器环境长度可能不同 win32 和win64上长度差别;size_type一般也是unsigned int

  3）使用的时候可以参考：
   string::size_type  a =123;
   vector<int>size_type b=234;
   size_t b=456;

  4）size_t 使用的时候头文件需要 <cstddef> ；size_type 使用的时候需要<string>或者<vector>

  5）sizeof(string::size_type) 
    sizeof(vector<bool>::size_type) 
    sizeof(vector<char>::size_type)  
    sizeof(size_t) 
    上述长度均相等，长度为win32:4 win64:8

  6）二者联系：在用下标访问元素时，vector使用vector::size_type作为下标类型，而数组下标的正确类型则是size_t

  size_t j     如果j = 0, --j;会出错


