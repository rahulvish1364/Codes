package UserInterface;

import java.util.List;

import BussinessLayer.BallInterface;
import BussinessLayer.BussinessComponent;
import Entitities.Employee;

public class UserLayer {

	public static void main(String[] args) throws Exception {
		
		//updateRecord(13, "Bajpayee", "Lucknow", 4500);
		//deleteRecord(900);
		insertRecord(111, "Vaishali", "Gaya", 4555);
		displayRecord();
	}
	
	public static void displayRecord() throws Exception {
		BallInterface busObj = new BussinessComponent();
			List<Employee> list=busObj.getAll();
		
		for (Employee emp : list) {
		    System.out.println(String.format("Id -%d Name -%s Address -%s  Salary -%d", emp.getId(), emp.getName(), emp.getAdd(), emp.getSalary()));	
		}
	}
	public static void updateRecord(int id, String name, String address, int salary) {
		BallInterface busObj = new BussinessComponent();
		busObj.updateEmployee(new Employee(id, name, address, salary));
	}
	public static void deleteRecord(int id) {
	  BallInterface busObj = new BussinessComponent();
	  busObj.delete(id);
	}
	public static void insertRecord(int id, String name, String address, int salary) {
	 BallInterface busObj = new BussinessComponent();
	 busObj.addNewEmployee(new Employee(id, name, address, salary));
	}

}
