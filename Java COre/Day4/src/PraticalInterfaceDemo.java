class employee{
	int empid;
	String empName;
	String empAddress;
	employee(int id, String name, String addr){
		empid = id;
		empName = name;
		empAddress = addr;
	}
	
	@Override
	public String toString(){
		return String.format("The name is %s from %s with id %d", empName, empAddress, empid);
	}
}
interface IEmployeeDB{
	void addNewEmployee(int id, String name, String address);
	void updateEmployee(int id, String name, String address);
	void deleteEmployee(int id);
	employee[] getAllEmployees();
}
class EmployeeArrayList implements IEmployeeDB{

	@Override
	public void addNewEmployee(int id, String name, String address) {
		System.out.println(String.format("Employee by name %s is added into the ArrayList", name));		
	}

	@Override
	public void updateEmployee(int id, String name, String address) {
		System.out.println(String.format("Employee by name %s is updated into the ArrayList", name));
	}

	@Override
	public void deleteEmployee(int id) {
		System.out.println(String.format("Employee by id %d is deleted from the ArrayList", id));
		
	}

	@Override
	public employee[] getAllEmployees() {
		System.out.println("Getting the data from the ArrayList");
		return new employee[] {
				new employee(123, "Phaniraj","bangalore"),
				new employee(124, "Suresh","bangalore"),
				new employee(125, "Gopal","bangalore"),
				new employee(126, "Venki","bangalore")
		}; 
	}
	
}
class EmployeeArray implements IEmployeeDB{

	@Override
	public void addNewEmployee(int id, String name, String address) {
		System.out.println(String.format("Employee by name %s is added to the database", name));
	}

	@Override
	public void updateEmployee(int id, String name, String address) {
		System.out.println(String.format("Employee by name %s is updated to the database", name));
	}

	@Override
	public void deleteEmployee(int id) {
		System.out.println(String.format("Employee by id %d is deleted from the database", id));		
	}

	@Override
	public employee[] getAllEmployees() {
		// TODO Auto-generated method stub
		System.out.println("Getting the data from the Array");
		return new employee[] {
				new employee(123, "Phaniraj","bangalore"),
				new employee(124, "Suresh","bangalore"),
				new employee(125, "Gopal","bangalore"),
				new employee(126, "Venki","bangalore")
		};
	}
	
}


public class PraticalInterfaceDemo {

	public static void main(String[] args) {
		IEmployeeDB db = new EmployeeArray();
		employee[] data = db.getAllEmployees();
		for(employee emp : data)
			System.out.println(emp);
		//println will internally evaluate the expression to a string 
		//and displays it. The reference type objects will be evaluated to a default string
		//representation, which means the name of the class to which it belongs to,
		//U should override the toString method of the System.Object to provide UR own
		//implementation of the String representation of UR class..
	}

}
