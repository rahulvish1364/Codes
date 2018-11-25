
enum Mode{
	Card,
	Online,
	Paytm,
	Cash
}
class Business{
	
	public void makePayment(int money) {
		System.out.println("The money is to be transferred is " + money);
	}
}

class NewBusinees extends Business{
	public void makeNewPayment(int money, Mode transfer) {
		System.out.println("The mode of the payment is "+transfer+"the money tranffered is "+money);
	}
}





public class InheritanceDemo {
  public static void main(String[] args) {
	Business guy = new NewBusinees();
	guy.makePayment(5000);
	((NewBusinees)guy).makeNewPayment(6000,Mode.Paytm);
}
}
