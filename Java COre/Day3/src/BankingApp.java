enum Accountttype{
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
 void Debit(double amount) throws Exception {
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
			
		case FixedDeposit:
			return new FDAccounttt();
			
		case Recurring:
			return new RDAccounttt();
			
		case SavingBank:
			return new SBAccounttt();
			
		default:
		   throw new Exception("the type of account you are looking for cannot be found");
		}
	}
	
}
public class BankingApp {
 public static void main(String[] args) throws Exception {
	 
	 
   Accountt account = AccounttSelector.creatAccountt(Accountttype.FixedDeposit);
   account.Credit(4550.112);
   System.out.println(account.getBalance());
}
}
