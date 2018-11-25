package DataLayer;

import java.sql.SQLException;
import java.util.*;
import Entitities.Employee;
public interface DalInterface {

	void addNewEmployee(int id, String name, String address, int salary) throws Exception;
	void updateEmployee(int id, String name, String address, int salary) throws Exception;
	void delete(int id ) throws Exception;
	List<Employee> getAll() throws Exception;
}
