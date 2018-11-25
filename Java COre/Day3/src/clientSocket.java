
import java.io.*;
import java.net.*;


public class clientSocket {
public static void main(String[] args) {

	try {
		// Create the socket yo the server address
		Socket sock = new Socket("localhost", 4321);
		
		// create a writing stream to write to the server
		DataInputStream din = new DataInputStream(sock.getInputStream());
		
		// create a writing stream to read to the server
		DataOutputStream dou = new DataOutputStream(sock.getOutputStream());
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		
		String input = "";
		String output = "";
		
		while(!input.equals("End")) {
			input = reader.readLine();
			dou.writeUTF(input);
			dou.flush();
			output = din.readUTF();
			System.out.println(output);
		}
		
		dou.close();
		din.close();
		sock.close();
		
		// close all the socket and the stream....
	} catch (UnknownHostException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	} catch (IOException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
	
	
}
}
