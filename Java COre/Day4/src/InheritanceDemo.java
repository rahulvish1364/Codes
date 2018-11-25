enum PaymentMode{
	Cash,
	Cheque,
	Card,
	Paytm
}
class Business{
	public void MakePayment(int amount) {
		System.out.println(String.format("An Amount of Rs.%d has been made by cheque or cash", amount));				
	}
}//U cannot modify a class that is created. Open-Closed Principle 


class NewBusiness extends Business{
	public void MakeNewPayment(int amount, PaymentMode mode) {
		System.out.println(String.format("Payment of Rs.%d was made by the user thro %s", amount, mode));
	}
}

public class InheritanceDemo {

	public static void main(String[] args) {
		Business obj = new NewBusiness();
		obj.MakePayment(5000);
		
		((NewBusiness)obj).MakeNewPayment(5000, PaymentMode.Paytm);

	}

}
