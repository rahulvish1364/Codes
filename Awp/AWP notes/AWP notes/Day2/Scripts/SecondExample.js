//creating variables in JS...
//There is only one type of declaration in JS, U could use it to store any kind of data U want...
var empId = 12;
var empName = "SomeName";
var empAddress = "Some Address";

//If U want process a certain function and wish to display the output to the codevelopers, U could do so by calling console.log to display the content in the Console window of the Browser.
console.log("The name is " + empName);
console.log("The Address is " + empAddress);
console.log("The Id of the Employee is " + empId);

/*empId += 13;
alert(typeof(empId));

empName += 123;
alert(typeof(empName));*/
//Even though JS allows to declare the variable as var, it internally stores the data based on the value that U have assigned. We could store the data as the following types: number, string, boolean or object.




/*var boolExp = true;
alert(typeof(boolExp))
var intVal = 123;
alert(typeof(intVal))
var stringVal = "Sample Content";
alert(typeof(stringVal))*/
//var otherType;//if a variable is created and is not assigned with any value, it is called as undefined. Anything that is not declared, but used in the code is considered as undefined.

//alert(typeof(otherType));
//alert(typeof(WillThisWork));
//Arrays, functions and classes are considered as objects.....
/*var array =[23,34,45,56,67];
alert(typeof(array));
//all arrays will have built in functions which can be used to get info about the array...
console.log("The no of elements in the array is " + array.length);
//using a for loop to iterate thro the array....
for(i =0;i < array.length;i++)
alert(array[i]);*/
//-----------------------------------------------------
/*var emp = {};//this is the syntax of creating object..
emp.empID = 123;
emp.empName = "phaniraj";
emp.empAddress ="Bangalore";
//alert(emp.toString());//an object can be converted to a string representation which we can use to display it in the HTML document...

alert("The name is " + emp.empName +"\nThe Address is " + emp.empAddress +"\nThe ID of the Employee is " + emp.empID);
*/
//----------------------------------------------------
/*var employee = function(id, name, address){
	this.empID = id;
	this.empName = name;
	this.empAddress = address;
}

var emp1 = new employee(123, 'Phaniraj','Bangalore');
var emp2 = new employee(124, 'Vasu','Bangalore');
var emp3 = new employee(125, 'Vinod','Bangalore');
var emp4 = new employee(126, 'Satish','Bangalore');

alert(emp1.empName)
alert(emp2.empName)
alert(emp3.empName)
alert(emp4.empName)
*/
//----------------------------------------------------
//A function is a block of statements that can be refered by a single statement which is frequently used in an application.

function addFunc(first, second){
	var result = first + second;
	return result;//If a function intends to provide a value for the caller, U can do so by setting a return value...
}

function subFunc(first, second){
	var result = first - second;
	return result;
}

function mulFunc(first, second){
	var result = first * second;
	return result;
}

function divFunc(first, second){
	var result = first / second;
	return result;	
}
//----------------------------------------------------



