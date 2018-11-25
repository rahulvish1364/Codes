 class BaseClass{
	 void Test() {
		 System.out.println("Hello I am Test of base");
	 }
 public void Test1() {
	 System.out.println("Hello I am in the base class");
 }
 
 
}

// Absract classes are the one which have atleast one abstract method abstrated methods are non implemented methods. 
class SecondClass extends BaseClass{

	@Override
	void Test() {
		System.out.println("Hello I am in the Derived Test");
	}
	@Override
	public void Test1() {
	System.out.println("Hello I am in the Second Class");
		
	}
	
}

class AbstractClass{
	public static void main(String[] args) {
		SecondClass obj = new SecondClass();
		obj.Test();
		BaseClass obj1 = new BaseClass();
		obj1.Test();
		BaseClass obj2 = new SecondClass();
		obj2.Test();
		
		
//		SecondClass obj3 = new BaseClass(); // Note: the instance of derived class cannot be made through the 
		
	}
}





