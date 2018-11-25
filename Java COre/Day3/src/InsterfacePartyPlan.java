class Gift{
	String name;
	void setName(String name){
		this.name=name;
	}
}
interface Iparty{
	void Invitation();
	void Decorate();
	void OrderCake();
	void OrderKhana();
	Gift provideReturnGift();
	}

interface Dance{
	void PlayMusic();
}
class BirthdayParty implements Iparty, Dance{

	@Override
	public void Invitation() {
	System.out.println("Hello, You are invited to he Birthday Party");	
	}

	@Override
	public void Decorate() {
	System.out.println("The Decoration is done on the Hawaain Theme");
		
	}

	@Override
	public void OrderCake() {
	System.out.println("This cake to be from the Barista Cafe");
		
	}

	@Override
	public void OrderKhana() {
		// TODO Auto-generated method stub
		System.out.println("The KHana have been ordered from the Radison Blue");
	}

	@Override
	public Gift provideReturnGift() {
		// TODO Auto-generated method stub
		Gift surprze = new Gift();
		surprze.setName("Cutlery");
		
		return surprze;
	}
	

	@Override
	public void PlayMusic() {
	 
		System.out.println("Play some party songs");
	}
	
}

class FareWell implements Iparty{

	@Override
	public void Invitation() {
		// TODO Auto-generated method stub
		System.out.println("Hello, You are invited to he Birthday Party");	
	}

	@Override
	public void Decorate() {
		// TODO Auto-generated method stub
		System.out.println("The Decoration is done on the Hawaain Theme");
	}

	@Override
	public void OrderCake() {
		// TODO Auto-generated method stub
		System.out.println("The Cake is ordered from the Indian Bakery");
	}

	@Override
	public void OrderKhana() {
		// TODO Auto-generated method stub
		System.out.println("The Khana have been ordered from the Great Indian Dhaba");
	}

	@Override
	public Gift provideReturnGift() {
		// TODO Auto-generated method stub
		return null;
	}
	
}


public class InsterfacePartyPlan {
	public static void main(String[] args) {
		Iparty  small = new BirthdayParty();
		small.Invitation();
		small.OrderKhana();
		small.provideReturnGift();
		//small = new FareWell();
		small.Decorate();
		small.OrderCake();
	    Dance dance = (Dance)small; // changing the Iparty type object to Dance type by type casting as this object is already been
	    //instantiated as  BirthdayDay Party as now becomes Iparty typr its method is implemented in BirthdayPArty so it is able acces is it
	    // thats how we can use the same object to change the behaviour at run time 
	    // this is called runtime polymorphism // 
	    // Note: More emphasis Should be put over the part that it the same object
		dance.PlayMusic();
	}
	
}
