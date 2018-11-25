package BussinessLayer;

import java.util.List;
import Entitities.*;


public interface BallInterface {
	void addNewEmployee(Employee emp) ;
	void updateEmployee(Employee emp) ;
	void delete(int id ) ;
	List<Employee> getAll() throws Exception ;
}
