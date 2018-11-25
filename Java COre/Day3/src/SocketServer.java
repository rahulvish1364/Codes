// Networking in Java 
// Network programming is to write to execute accross different networks and machines and multiple devices. These machines are connected thro any o
// kind of network like tcp/ip internet or any other means.
//java,net package contain the classes required for performing network related programming are broadcasting, chatting apps, Antivirus software DB programming and many more 
// Socket programming is the most is most common wAY of the performing Network related apps using TCP 
// Socket provide communication b/w 2 machines using TCP. A server app will provide a gateway thro client can communicate The client program creates the socket and tries to acces the 
// the machine where the server socket resides 
//Server provides the service through the IP Address and a port no associated with machine This port no is like the a gateway thro which which the communication happens, The client
// app will make create the socket from their end to access the server socket specifying the published Ip Address og the server along with the port no where the data is avalable 
// Sockets internally use streams to interact with app Server and client need both input and output stream to inreract with each other


import java.net.*;
import java.io.*;
public class SocketServer {
public static void main(String[] args) {
	System.out.println("Hello");

	
	try {
		ServerSocket ss = new ServerSocket(4321);
		Socket sock = ss.accept();
		DataInputStream ds = new DataInputStream(sock.getInputStream());
		DataOutputStream dou =new DataOutputStream(sock.getOutputStream());
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		
		String input ="";
		String output ="";
		while(!input.equals("End"))
				{
					
			input = ds.readUTF();
			System.out.println("Client "+ input);
			output= br.readLine();
			dou.writeUTF(output);
			dou.flush();
			
				}
		ds.close();
		ss.close();
		sock.close();
		
		
	} catch (IOException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
	
	
	
}
}
