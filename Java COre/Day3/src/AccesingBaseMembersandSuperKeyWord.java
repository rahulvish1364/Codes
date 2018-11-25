class Human {
 String Name;
 Human(String name){
  this.Name=name;
  System.out.println("The name of the Super Human is " + this.Name);
 }
 
 public void Display() {
	 System.out.println("Hello i am Base Class");
 }

}

class goodHuman extends Human{

	goodHuman() {
		super("God");
		// TODO Auto-generated constructor stub
	}
	
}

class justHuman {
	goodHuman baseobj = new goodHuman();
	public void Display() {
		baseobj.Display();
		System.out.println("I am last derived class");
	}
}

public class AccesingBaseMembersandSuperKeyWord {
 
	public static void main(String[] args) {
	
	Human man = new goodHuman(); // Human object created it so constructor called count 1
	justHuman jman = new justHuman(); // jussHuman is creted it so it created the object of  good human classgoodhuman class constructor will be called
	// which in turn will call the constructor of the base class 
	// so thats base cinstructor is called twice ;
	jman.Display(); //atlast this function will be called which is calling base class function					
}
	}
