import java.sql.*;


public class jdbcConnection {
	
	   public static String url = "jdbc:mysql://localhost/employee";
	   public static String user = "root";
	   public static String password = "";
	   public static String strSelect = "SELECT * FROM employeedata";
	   public static String strUpdate = "UPDATE employeedata SET empName=? , empAdd =?, salary =? WHERE empId=?";
	   private static Connection getConnection() throws Exception {
		   Class.forName("com.mysql.cj.jdbc.Driver");
		   Connection con = DriverManager.getConnection(url, user, password);
		   System.out.println("Connection Succeded");
		   return con;
		   
	   }
	   
	   
	   public static void displayRecords() throws Exception {
		   Connection con = getConnection();
		   Statement query = con.createStatement();
		   ResultSet rs  = query.executeQuery(strSelect);
		   while(rs.next()) {
			   System.out.println(String.format("%d %s %s % d",rs.getInt(1), rs.getString(2), rs.getString(3), rs.getInt(4)));
		   }
		   
	   }
	   
	   public static void deleteRecords() throws Exception {
		   Connection con = getConnection();
		   Statement query = con.createStatement();
		   int rowAffected = query.executeUpdate("DELETE FROM employeedata where empId = 12");
		   System.out.println("The no. of row of affected "+rowAffected);
		   
	   }
	   
	   public static void updateRecords(String empName, String empAddress, int salary, int empId) throws Exception{
		   Connection con = getConnection();
		   PreparedStatement ps = con.prepareStatement(strUpdate);
		   ps.setString(1, empName);
		   ps.setString(2, empAddress);
		   ps.setInt(3, salary);
		   ps.setInt(1, empId);
		   int rowAffected = ps.executeUpdate();
		   System.out.println("Number of Row Affected "+rowAffected);
	   }
	   
	   public static void main(String[] args) {
		   try {
			 //deleteRecords();
			   updateRecords("Rahul", "Jhansi", 451125, 13);
			displayRecords();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
}
}


