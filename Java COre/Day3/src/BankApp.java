/*enum Accountttype{
	CreditCard,
    FixedDeposit,
    Recurring,
    SavingBank
    
}



abstract class Accountt {
 int AccNo;
 String CutomerName;
 double balance;
 void Credit(double amount) {
	this.balance += amount;
	}
 void Debit(double amount) throw Exception {
	 if(amount > this.balance) throw new Exception("Insuffient Funds"); 
 }
 
 public double getBalance() {
	 return this.balance;
 }
 
abstract void calculateInterest();
}

class RDAccounttt extends Accountt{

	@Override
	void calculateInterest() {
	 
		double interest = this.getBalance() * 1/2 * 6/100;
		this.Credit(interest);
		
	}
	
}
class FDAccounttt extends Accountt{

	@Override
	void calculateInterest() {
	 
		double interest = this.getBalance() * 1/2 * 6/100;
		this.Credit(interest);
		
	}
	
}
class SBAccounttt extends Accountt{

	@Override
	void calculateInterest() {
	 
		double interest = this.getBalance() * 1/2 * 6/100;
		this.Credit(interest);
		
	}
	
}
class CCAccounttt extends Accountt{

	@Override
	void calculateInterest() {
	 
		double interest = this.getBalance() * 1/2 * 6/100;
		this.Credit(interest);
		
	}
	
}

class AccounttSelector {
	public static Accountt creatAccountt(Accountttype acc) throws Exception {
		switch (acc) {
		case CreditCard:
			return new CCAccounttt();
			break;
		case FixedDeposit:
			return new FDAccounttt();
			break;
		case Recurring:
			return new RDAccounttt();
			break;
		case SavingBank:
			return new SBAccounttt();
			break;
		default:
		   throw new Exception("the type of account you are looking for cannot be found");
		}
	}
	
}*/

public class BankApp{
	public static void main(String[] args) {
		System.out.println("HEllo");
	}
}




		/*Accountt account = new CCAccounttt();
	     account.Credit(5000);
	     account.calculateInterest();
	    */ //System.out.println(account.getBalance());
	     //account = AccounttSelector.creatAccountt(Accountttype.FixedDeposit);
	     //account = AccounttSelector.creatAccountt(Accountttype.CreditCard);
	     
	   