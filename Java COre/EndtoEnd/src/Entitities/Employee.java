package Entitities;

public class Employee {
	
	private int empId;
	private String empName;
	private String empAdd;
	private int salary;
	public Employee(int id, String name, String address, int salary) {
		
		this.empId=id;
		this.empName=name;
		this.empAdd=address;
		this.salary=salary;

	}
	
	public int getId () {return this.empId;	}
	public String getName () {return this.empName;	}
	public String  getAdd () {return this.empAdd;	}
	public int getSalary () {return this.salary;	}
	
	
}
	

