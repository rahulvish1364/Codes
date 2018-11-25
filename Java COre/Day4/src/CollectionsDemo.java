import java.util.*;//All the collection classes and interfaces are available in this package. 

//As all classes are derived from Object type, it will automatically have the following methods:
/*
 * hashCode():gets the Hash value of the object created...
 * equals(): evaluates the equality of the comparing object...
 * getClass(): gets the classname of the object to which it belongs to
 * toString(): gets the String representation of the object....
 * */
/*A seperate class is required if U want to compare the Employee objects on multiple criteria
 * */

enum Criteria{ Name, Address, Id};

class employeeComparer implements Comparator<emp>{
	private Criteria condition;
	
	public employeeComparer(Criteria condition) {
		this.condition = condition;
	}
	@Override
	public int compare(emp first, emp second) {
		switch(condition) {
			case Name:
				return first.empName.compareTo(second.empName);
			case Address:
				return first.empAddress.compareTo(second.empAddress);
			default:
				return first.compareTo(second);	
		}
	}
	
}


/*WHen objects of a class has to be sorted in a collection, UR class should implement an interface
 * called Comparable<T>. An ability to compare the objects is obtained thro Comparable.
 * If the objects are to be compared by multiple criterias, U could create a seperate class whose job is to compare the objects. 
 * It is done by implementing an interface called Comparator. 
 * */
class emp implements Comparable<emp>{
	int empid;
	String empName;
	String empAddress;
	emp(int id, String name, String addr){
		empid = id;
		empName = name;
		empAddress = addr;
	}
	//hashCode provides the unique hashvalue of the object
	@Override
	public int hashCode() {
		return Integer.hashCode(this.empid);//It returns the hashcode of the Id of the employee as the Hashcode of the Employee object...
	}
	
	//evaluates the equality of the object....
	@Override
	public boolean equals(Object obj) {
		emp other = (emp)obj;
		return this.empid == other.empid;
	}
	
	@Override
	public String toString(){
		return String.format("The name is %s from %s with id %d", empName, empAddress, empid);
	}
	@Override
	public int compareTo(emp other) {
		//if the object U R comparing is equal, then it returns 0, if the comparing object is greater, it should return -1 or the comparing object is smaller, it should return 1....
		if(other.empid > this.empid)
			return -1;
		else if(other.empid < this.empid)
			return 1;
		else 
			return 0;
		//return this.empName.compareTo(other.empName);
	}
}

public class CollectionsDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//arrayListExample();
		//setExample();
		//iteratorExample();
		//uniqueEmployees();
		sortingRecords();
	}
	private static void sortingRecords() {
		List<emp> employees= new ArrayList<emp>();
		employees.add(new emp(123, "Phaniraj","Bangalore"));
		employees.add(new emp(122, "Anjan","Ahmedabad"));
		employees.add(new emp(121, "Zeheer","Varanasi"));
		employees.add(new emp(124, "Sony Razdan","Mumbai"));
		employees.add(new emp(111, "Kumar Sehgal","Chennai"));	
		
		Collections.sort(employees);
		//employees.sort(new employeeComparer(Criteria.Address));
		for(emp obj : employees)
			System.out.println(obj);
	}
	private static void uniqueEmployees() {
		//Hashset implements the add method which checks for the hashValue and then checks for the equality of the object....
		HashSet<emp> employees = new HashSet<emp>();
		employees.add(new emp(123, "Phaniraj","Bangalore"));
		employees.add(new emp(124, "Sunder","Bangalore"));
		employees.add(new emp(125, "Rajesh","Bangalore"));
		employees.add(new emp(126, "Kumar","Bangalore"));
		employees.add(new emp(126, "Kumar Sehgal","Bangalore"));
		System.out.println("The no of employees with us: " + employees.size());
	
	private static void iteratorExample() {
		//Iterators are the simplest collection interface used for iterating the collections....
		List<String> data = new ArrayList<String>();
		data.add("Apple");
		data.add("Mango");
		data.add("Orange");
		data.add("Pineapple");
		//A collection classes would have implemented iterator interface which provides an ability to iterate.
		Iterator<String> iter = data.iterator();
		while(iter.hasNext())//checks for the next value, if found returns true, else false
			System.out.println(iter.next());//Use next method to move to the next record in the collection
		//Internally for...in in java works based on the iterator concept only...
		//U don't need to know the internals of the iterator. It would always be within the bounds 
		//of the collection. If U create a Custom Collection, UR class must implement Iterator or 
		//Collection interface as internally Collection extends the Iterator interface....
	}
	private static void setExample() {
		//Set allows to store only unique data in it....
		HashSet<String> fruits = new HashSet<String>();
		fruits.add("Apple");
		fruits.add("Mango");
		fruits.add("Orange");
		fruits.add("PineApple");
		fruits.add("Banana");
		if(fruits.add("Apple")) {
			System.out.println("Added");
		}else
			System.out.println("Duplicates are not allowed");
		
		System.out.println("The no of items in our cart is " + fruits.size());
		
		for(String item : fruits)
			System.out.println(item);
		
	}
	//We will be working with the generic version of the Collection classes...
	private static void arrayListExample() {
		// TODO Auto-generated method stub
		/*ArrayList<Integer> values = new ArrayList<Integer>();*/
		List<Integer> values = new ArrayList<Integer>();//Always program for the interface object.
		for(int i=0; i <10;i++) {
			values.add(i);//adds an element to the bottom of the List....
		}
		values.remove(6);//removes the item from the list...
		values.removeAll(values);//removes all the items from the list...
		System.out.println("The current size is " + values.size());
		for(Integer i : values)
			System.out.println(i);
	}
}
