class BaseClass1{
 

public void firstfun(int age, String name) {
	
	System.out.println("Base Hello my name is"+ name+"and age is"+age);
}
}

class DerivedClass1 extends BaseClass1{ 
	
	@Override
	public void firstfun(int age, String name) {
		
		System.out.println(" Derived The my age is "+age+"the name is "+name);
	}
	
	public void firstfun(int age, String name, String address) {
		
		firstfun(age, name);
		
		System.out.println("Hello I am in the Derived class"+age+"  "+name+" "+address);
		
	}
	
}





public class MethodOverriding {
  public static void main(String[] args) {

	  BaseClass1 obj = new BaseClass1();
	  obj.firstfun(12, "Rahul");
	  DerivedClass1 obj2 = new DerivedClass1();
	  obj2.firstfun(23, "Vikash");
	  obj = new DerivedClass1();
	  
	  ((DerivedClass1)obj).firstfun(34, "Mahesh", "Gwalior");
}
}
