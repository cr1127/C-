// 设计模式之禅 秦小波 use language Java
1.设计原则（6个）

	1）单一职责原则( Single Responsibility Principle SRP)

	RBAC模型( Role-Based Access Control)

	定义是 应该有且仅有一个原因引起类的变更。

	SRP的原话解释是：There should never be more than one reason for a class to change.

	SRP提出一个编写程序的标准，用职责或变化原因来衡量接口或类设计得是否优良，但是职责和变化原因都是不可度量的，因项目而异，因环境而异。

	接口一定要做到单一职责，类的设计尽量做到只有一个原因引起变化。


	2）里氏替换原则( Liskov Substitution Principle LSP)

	定义是 Fucntion that use pointers or referencees to base classes must be able to use objects of derived classes without knowing  it.

	里氏替换原则为良好的继承定义了一个规范，一句简单的定义包含了4层含义
	
	规范（4个）：

	（1）子类必须完全实现父类的方法

		在类中调用其他类时务必要使用父类或接口，如果不能使用父类或接口，则说明类的设计已经违背了LSP原则。

		如果子类不能完整地实现父类的方法，或者父类的某些方法在子类中已经发生“畸变”，则建议断开父子继承关系，
		采用依赖、聚集、组合等关系替代起来。

	（2）子类可以有自己的个性

		有子类出现的地方父类未必就可以出现

	（3）覆盖或实现父类的方法时输入参数可以被放大

		父类出现的地方子类就可以出现

		子类中方法的前置条件(输入参数类型覆盖范围)必须与超类中被覆写的方法的前置条件相同或者更宽松。

	（4）覆写或实现父类的方法时输出结果可以被缩小

	父类的一个方法的返回值是一个类型T，子类的相同方法(重载或重写)的返回值是S，
	那么里氏替换原则就要求S必须小于等于T，也就是说，要么S和T是同一个类型，要么S是T的子类

		重写：父类和子类的同名方法的输入参数是相同的，两个方法的范围值S小于等于T，这是重写的要求（重点）

		重载：方法的输入参数类型后者数量不相同，
		在里氏替换原则要求下，就是子类的输入参数宽于或等于父类的输入参数，就是你写的这个方法不会被调用。

		采用里氏替换原则的目的就是增强程序的健壮性，版本升级也可以保持很好的兼容性。
		即使增强子类，原有的子类还可以继续运行。在实际项目中，每个子类对应不同的业务含义，使用父类做参数，传递不同的子类完成不同的业务。

	注意：如果采用里氏替换原则，那么尽量避免子类的“个性”，
	一个子类有个性，这个子类和父类之间的关系就很难调和了，把子类当做父类使用，子类的个性“被抹杀”；
	把子类单独作为一个业务来使用，则会让代码间的耦合关系变得扑朔迷离，缺乏类替换的标准。


	3）依赖倒置原则( Dependence Inversion Principle, DIP)

	定义是 High level modules should not depend upon low level modules. Both should depend upon abstractions. 
				 abstractions should not depend upon detail. 
	       Details should depend upon abstractions. 
	每个逻辑的实现都是由原子逻辑组成的，不可分隔的原子逻辑就是低层模块。

	原子逻辑的再组装就是高层模块。

	java语言中，抽象就是指接口和抽象类，两者都不能直接被实例化。

	细节就是实现类，实现接口或者继承抽象类而产生的额类就是细节，其特点就是可以直接被实例化，也就是可以加上一个关键字new产生一个对象。
	
	面向接口编程(Object-Oriented Design OOD)

	采用DIP可以减少类间的耦合性，提高系统的稳定性，降低并行开发引起的风险，提高代码的可读性和可维护性。

	设计是否具备稳定性，只要适当地“松松土”，观察“设计的蓝图”是否还可以茁壮地成长就可以得出结论，
	稳定性较高的设计，在周围环境频繁变化的时候，依然可以做到“我自岿然不动”。

	并行开发最大的风险就是风险扩散，本来只是一段程序的错误或异常，逐步波及一个功能，一个模块，甚至到最后毁坏了整个项目。

	依赖倒置对并行开发的影响，两个类之间有依赖关系，
	只要制定出两者之间的接口(或者抽象类)就可以对立开发了，而且项目之间的单元测试也可一独立地运行。

	依赖的三种写法：

	（1）构造函数传递依赖对象

		public interface IDriver {
			// 是司机就应该会驾驶汽车
			public void drive();
		};

		public class Dirver implemnents IDriver {
			private ICar car;
			// 构造函数注入
			public Driver(ICar _car) {
				this.car = _car;
			}
			// 司机的额主要职责就是驾驶汽车
			public void drive() {
				this.car.run();
			}
		};

	（2）Setter方法传递依赖对象

		public interface IDriver {

			// 车辆型号
			public void setCar(ICar car);
			// 是司机就应该会驾驶汽车
			public void drive();
		};

		public class Dirver implemnents IDriver {
			private ICar car;
			// 构造函数注入
			public void setCar(ICar car) {
				this.car = car;
			}
			// 司机的额主要职责就是驾驶汽车
			public void drive() {
				this.car.run();
			}
		};

	（3）接口声明依赖对象

		public interface IDriver {
			// 是司机就应该会驾驶汽车
			public void drive();
		};

		public class Driver implemnents IDriver {
			// 是司机就应该会驾驶汽车
			public void drive(ICar car) {
				car.run();
			}
		};

		public interface ICar {
			// 是汽车就应该能跑
			public void run();
		}

		public class Benz implemnents ICar {
			// 汽车肯定会跑
			public void run() {
				System.out.println("奔驰汽车可以运行.........");
			}

		};

		// 业务场景
		public class Client {
			public static void main(String[] args) {
				IDriver zhangSan = new Driver();
				ICar benz = new Benz();
				zhangSan.drive(benz);
			}

		};
	
	总结：

	依赖倒置的本质就是通过抽象(接口或抽象类) 使各个类或模块的实现彼此独立，不互相影响，实现模块间的松耦合，
	只要遵循以下几个规则就可以：

	每个类尽量都有接口或者抽象类，或者抽象类和接口都具备

	变量的表面类型尽量都是接口或者是抽象类

	任何类都不应该从具体类派生

	尽量不要覆写基类的方法


	4）接口隔离原则










	

	