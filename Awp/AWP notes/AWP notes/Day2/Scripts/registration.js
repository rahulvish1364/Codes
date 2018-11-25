//registration.js
var user = function(id, name, address){
	this.id = id;
	this.name = name;
	this.address = address;
}//This represents individual User...

var allUsers = function(){
	var data = [];//create a blank array...

	this.registerUser = function(user){
		//array has push method to add an element into itself at the botton of the list....
		data.push(user);
	}

	this.removeUser = function(id){
		for(i = 0; i <data.length; i++){
			if(data[i].id == id){
				data.splice(i, 1);
				return;
			}
		}
		throw "User not found to delete";
	}

	this.updateUser = function(user){
		throw "Do it urself...";
	}
	this.getAll = function(){
		return data;
	}
}