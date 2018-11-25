import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

class Employee implements Serializable{
 int empId;
 String empName;
 String empAddress;
 
 
 public Employee(int empId, String name, String address) {
	 
	 this.empId=empId;
	 this.empName=name;
	 this.empAddress=address;
	 
	 
	// TODO Auto-generated constructor stub
}
 @Override
 public String toString() {
	 return String.format("Id is %d\nName is %s\nAddress is %s", this.empId, this.empName, this.empAddress);
	 
 }
}



public class Serialization {
	
	private static Employee data = null;
	private static String file = "Data.brr";
	 
	
	public static void main(String[] args) {
	data = new Employee(123, "Rahul", "Jhansi");
	//saveData();
	//loadData();
	//RePoWrite();
	RepoRead();
	
}

	private static void loadData() {
	try {
		FileInputStream fs = new FileInputStream(file);
		ObjectInputStream os = new ObjectInputStream(fs);
		data = (Employee)os.readObject();
		System.out.println(data);
		os.close();
		fs.close();
	} catch (FileNotFoundException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	} catch (ClassNotFoundException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	} catch (IOException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
   
		
	}


	private static void saveData() {
		
		try {
			FileOutputStream fs = new FileOutputStream(file);
			ObjectOutputStream os  = new ObjectOutputStream(fs);
			os.writeObject(data);
			os.close();
			fs.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
		
		
		
	}
	
	Employee emp = new Employee(123, "Rahul", "Jhansi");
	
	static List<Employee> emplist = new ArrayList<Employee>();
 public static List<Employee> setEmployee() {
	emplist.add(new Employee(123, "Rahul", "Jhansi")); 
	emplist.add(new Employee(124, "Ravi", "Myan	")); 
	emplist.add(new Employee(125, "Rishi", "Stani")); 
	emplist.add(new Employee(126, "Roli", "Bramjo")); 
	emplist.add(new Employee(127, "ghazi", "Durg")); 
	
	return emplist;
	
	
 }


 
 public static void RePoWrite() {
	try {
		List<Employee> emplist = setEmployee();
		FileOutputStream fs = new FileOutputStream("../data/emplist.ser");
		ObjectOutputStream os = new ObjectOutputStream(fs);
		os.writeObject(emplist);
		os.close();
		fs.close();
	} catch (FileNotFoundException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	} catch (IOException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
 }
 


//@SuppressWarnings("unchecked")
public static void RepoRead() {
	
	try {
		FileInputStream fs = new FileInputStream("../data/emplist.ser");
		ObjectInputStream os = new ObjectInputStream(fs);
		 emplist = (List<Employee>)os.readObject();
		 
		 for (Employee employee : emplist) {
			
			 System.err.println(employee);
		}
		 fs.close();
		 os.close();
	} catch (FileNotFoundException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	} catch (ClassNotFoundException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	} catch (IOException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
}
 
}
