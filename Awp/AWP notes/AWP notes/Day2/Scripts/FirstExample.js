//JScode.js
//JS itself contains a set of functions that can be used in the Web Application..
alert("Hello JS!!!!");//alert message with the text to display.

//There is only one data type called var...
var name = prompt("Enter UR name");//prompt allows the user to view a message/question and provide an answer to that question thro a text box. The return of this function is the value entered by the user..

//var in JS is a way of declaring variables.
alert("The name is " + name);
//confirm works similar to prompt except the choice given to the user will be in the form of OK or Cancel. The return of the function will determine the answer of the user.
var answer = confirm("Do U really want to learn JS before learning HTML?");
if(answer)
	alert("OK");
else
	alert("Lets learn HTML5");