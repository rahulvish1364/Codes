

//If a requirement comes where a class does not know on implementing one or more functions, U could
//mark the class as abstract and the methods are created as definitions. Implementations will done
//by the derived class...

abstract class TestClass{
	abstract void testFunc();
	void normalFunc() {
		System.out.println("Normal func");
	}
}

class TestImplClass extends TestClass{

	@Override
	void testFunc() {
		System.out.println("Implemented in the derived class");
	}

}
public class AbstractClassDemo {

	public static void main(String[] args) {
		TestClass cls = new TestImplClass();
		cls.normalFunc();
		cls.testFunc();		
	}

}
