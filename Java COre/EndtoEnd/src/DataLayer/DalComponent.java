package DataLayer;

import java.util.ArrayList;
import java.util.List;

import BussinessLayer.BallInterface;
import Entitities.Employee;
import java.sql.*;

public class DalComponent implements DalInterface{
	
	static String url ="jdbc:mysql://localhost/employee";
	static String user = "root";
	static String pass = "";
	
	@Override
	public void addNewEmployee(int id, String name, String address, int salary) throws Exception {
		String strInsert ="INSERT INTO employedata values(?,?,?,?)";

			Connection con = getConnection();
			PreparedStatement query = con.prepareStatement(strInsert);
			query.setInt(1, id);
			query.setString(2, name);
			query.setString(3, address);
			query.setInt(4, salary);
		

			
	}
	@Override
	public void updateEmployee(int id, String name, String address, int salary) throws Exception{
		String sqlInsert="UPDATE employeedata SET empName=? , empAdd =?, salary =? WHERE empId=?";
		Connection con = getConnection();
		PreparedStatement query = con.prepareStatement(sqlInsert);
		query.setString(1, name);
		query.setString(2, address);
		query.setInt(3, salary);
		query.setInt(4, id);
	}
	@Override	
	public void delete(int id) throws Exception {
		String sqlDelete ="DELETE FROM employeedata WHERE empId =?";
		Connection con = getConnection();
		PreparedStatement query = con.prepareStatement(sqlDelete);
		query.setInt(1, id);
		int rowAffected = query.executeUpdate();
		System.out.println("Rows Affected are "+rowAffected);
	}
	@Override
	public List<Employee> getAll() throws Exception {
		List<Employee> emplist = new ArrayList<Employee>();
		String allRes= "SELECT * FROM employeedata";
		Connection con = getConnection();
		Statement query = con.createStatement();
		ResultSet result = query.executeQuery(allRes);
		while(result.next()) {
			Employee emp = new Employee(result.getInt(1), result.getString(2), result.getString(3), result.getInt(4));
			emplist .add(emp);
		}
		return emplist;
	}
	private static Connection getConnection() throws Exception{
	Class.forName("com.mysql.cj.jdbc.Driver");
	Connection con = DriverManager.getConnection(url, user, pass);
	System.out.println("Connection Succeded");
	return con;
	}
	
}

	
	
	
	