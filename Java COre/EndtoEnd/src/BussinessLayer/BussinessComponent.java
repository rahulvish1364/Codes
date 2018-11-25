package BussinessLayer;

import java.util.List;

import DataLayer.DalComponent;
import DataLayer.DalInterface;
import Entitities.Employee;

public class BussinessComponent implements BallInterface {

	DalInterface dalObj = new DalComponent();
	
	@Override
	public void addNewEmployee(Employee emp) {
	 dalObj.addNewEmployee(book., name, address, salary);		
	}

	@Override
	public void updateEmployee(Employee emp) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void delete(int id) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public List<Employee> getAll() throws Exception {
		// TODO Auto-generated method stub
		return null;
	}

}
