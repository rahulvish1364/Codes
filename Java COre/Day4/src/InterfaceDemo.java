interface IExample{
	void ExampleFunc();//They are pure virtual functions/abstract methods...
}

interface ISimple{
	void SimpleFunc();
}


class Example implements IExample{
	@Override
	public void ExampleFunc() {
		System.out.println("Example function of the interface");	
	}	
}

class SimpleExample implements IExample, ISimple{
	@Override
	public void SimpleFunc() {
		System.out.println("Simple Func implementation");		
	}

	@Override
	public void ExampleFunc() {
		System.out.println("Example Func implementation");		
	}
	
}

public class InterfaceDemo {

	public static void main(String[] args) {
		IExample ex = new SimpleExample();
		ex.ExampleFunc();
		//Using the same object reference, no need to create new instance...
		ISimple sim = (ISimple)ex;
		sim.SimpleFunc();
	}

}
