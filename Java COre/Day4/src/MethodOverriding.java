class BaseClass{
	public void TestFunc() {
	
		System.out.println("TestFunc from the base class");
	}
}

class DerivedClass extends BaseClass{
	//If the signature changes, it becomes a new method with no strings attached to its base version...
	@Override
	public void TestFunc() {
		System.out.println("TestFunc from the derived class");
	}
	
	public void TestFunc(String different) {
		TestFunc();
		System.out.println("Test Func with arg " + different);
	}
}
public class MethodOverriding {

	public static void main(String[] args) {
		BaseClass cls = new BaseClass();
		cls.TestFunc();//Its the base version call
		
		cls = new DerivedClass();
		cls.TestFunc();//Will call the derived version....
		//Same object doing different operations on the same function is called as RUNTIME POLYMORPHISM...		
		//As this function is new to the derived class, and the base class is not aware of it, so U should
		//typecast it to its derived version and invoke the function... 
		((DerivedClass)cls).TestFunc("someString");//Method is overriden and will be behaving polymorphically.....
	}

}
