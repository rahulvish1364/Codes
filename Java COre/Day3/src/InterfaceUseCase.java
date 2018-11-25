class Employee{//Creating the employee the entity
	int empId;
	String empName;
	String empAddress;
	int salary;
	
	public Employee(int empId, String empName, String empAddress, int salary) {
		this.empId=empId;
		this.empAddress=empAddress;
		this.empName=empName;
		this.salary=salary;
	}
	
	public int getBonus(int bonus) {
	
		int totalSal = this.salary + bonus;
		return totalSal;
}
   @Override
   public String toString() {
	   return String.format("Id - %d \nName - %s \nLocation-%s\nSalary - %d ", this.empId, this.empName, this.empAddress, this.salary);
   }
	
}	
	interface IEmployeeDb{
		void addNewEmployee(int id, String name, String address, int salary);
		void updateNewEmployee(int id, String name, String address, int salary);
		void deleteEmployee(int id);
		Employee[] getAllEmployee();
	}
	
	
	class EmployeeDatabase implements IEmployeeDb{

		@Override
		public void addNewEmployee(int id, String name, String address, int salary) {
			
			
		}

		@Override
		public void updateNewEmployee(int id, String name, String address, int salary) {
			// TODO Auto-generated method stub
			
		}

		@Override
		public void deleteEmployee(int id) {
			// TODO Auto-generated method stub
			
		}

		@Override
		public Employee[] getAllEmployee() {
			Employee[] empList = null;
			empList = new Employee[] {
				new Employee(123, "Rahul", "Jhansi", 45000),
				new Employee(124, "Vikash", "Agra", 56112),
				new Employee(125, "Hariman", "Pune", 36154),
				new Employee(126, "Rohit", "Patna", 41000),
				new Employee(127, "Sidhi", "Durg", 31002)
			};
			
			
			return empList;
		}
		
	}
	
public class InterfaceUseCase {
	public static void main(String[] args) {
		IEmployeeDb db = new EmployeeDatabase();
		 Employee[] data = db.getAllEmployee();
		 for (Employee employee : data) {
			System.out.println(employee);
			System.out.println();
		}
		
	}

}
