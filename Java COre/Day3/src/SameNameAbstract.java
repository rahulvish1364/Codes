interface Hello{
	abstract void testfunc();
}

interface  Hi{
	abstract void testfunc();
}

abstract class Rahul{
	
	abstract void testfunc();
}
public class SameNameAbstract extends Rahul implements Hello , Hi { //it ok to extend and implement at the same time but you have to extend first 
	// then implement any interface 

	@Override
	public void testfunc() {
		System.out.println("Jellopino Cocktail");
		
	}
	
	public static void main(String[] args) {
		
		
		
	Hello greet = new SameNameAbstract();
		greet.testfunc();
		
	((Rahul)greet).testfunc();
	}

	
	
}
