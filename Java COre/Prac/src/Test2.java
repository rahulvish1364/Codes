class Prac {

 public void fun1() {
	 System.out.println("Hello I am old");
 }

class Test extends Prac{
	public void fun1() {
		System.out.println("Hello I am new");
	}
}

public static void main(String[] args) {
	Prac obj = new Test();
	obj.fun1();
}
}


