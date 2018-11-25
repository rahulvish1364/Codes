abstract class Account{
	int accNo;
	String customerName;
	double balance;
	public void Credit(double depoAmount) 
	{
		this.balance +=depoAmount;	 
	}
	public void Debit(double amount ) throws Exception 
	{
		if(amount > balance) 
			throw new Exception("Insufiicient Fund");
		balance -=amount;
	 	
	}
	public double getBalance() {
		return balance;
	}
	public abstract void calculateInterest();
 
}
class SBAccount extends Account{

	@Override
	public void calculateInterest() {
	double amount = getBalance() * 1/2 *6.5/100; 	
		this.Credit(amount);
	}
	
}
class FDAccount extends Account{

	@Override
	public void calculateInterest() {

		double amount = this.getBalance() * 1/2 * 10/100;
		this.Credit(amount);
		
	}
	
}

class RDAccount extends Account{

	@Override
	public void calculateInterest() {

		double amount = this.getBalance() *10/100;
		this.Credit(amount);
		
	}
	
}


public class AbstractedClasses{
	public static void main(String[] args) {
		Account acc = new RDAccount();
		acc.Credit(4500);
		acc.calculateInterest();
		System.out.println(acc.getBalance());
		
		
		//System.out.println(acc.getBalance());
		
		
		
		
	}
	
}