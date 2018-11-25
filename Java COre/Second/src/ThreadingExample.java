import java.util.concurrent.*;


class workerThread implements Runnable{
	private String name;
	
	
	public workerThread(String name ) {
		// TODO Auto-generated constructor stub
		
		this.name = name;
	}
	
	private void Func() {
		System.out.println("Thread by name"+this.name+"is executing");
		for (int i = 0; i < 5; i++) {
			System.out.println("Thread Beep#"+ i);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	@Override
	public void run() {
		// TODO Auto-generated method stub
		Func();
	}
	
}
class myThread extends Thread{
	private void threadFunc() {
		
		
		System.out.println("The thread has began its operation");
		for (int i = 0; i < 15; i++) {
			System.out.println("Thread 1 Beep"+i);
			try {
				Thread.sleep(1000);
			}
			catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
			
		}
		System.out.println("Thread has completed its operation"+Thread.currentThread());
		
	
		
		
		
	}
	@Override
	public void run() {
		threadFunc();
	}
	
	
}



public class ThreadingExample {

	 static void mulitiThreads() {
		 myThread th = new myThread();
		 th.start(); // this is main thread which is working on the execution other thread is the child threat when the parent thread ends the it waits for the child
		 // to get terminated after the certain time period
		 Thread.currentThread();
		 System.out.println("Main thread will continue to do its tasks");
		 for (int i = 0; i < 5; i++) {
			System.out.println("Thread 2 beep"+i);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
		 System.out.println("Main thread has completed its task, waiting for childs to finish...."+Thread.currentThread());
	 }

	 
	public static void threadPool() {
		System.out.println("Main Thread is running ");
		ExecutorService executer = Executors.newFixedThreadPool(5);
		for (int i = 0; i < 10; i++) {
			Runnable worker = new workerThread("ThreadName:" + i);
		    executer.execute(worker);
		}
		executer.shutdown();
		System.out.println("Main thread has terminated");
	}
	 
	 public static void runnableThread() {
		 
		 System.out.println("The Main thread is running"+ Thread.currentThread());
		 RunnableThread rth = new RunnableThread();
		 Thread t1 = new Thread(rth);
		 Thread t2 = new Thread(rth);
		 t1.start();
		 t2.start();
		 
		 
	 }
	
public static void main(String[] args) {

	//threaInfoDetails();
	//mulitiThreads();
	//runnableThread();
	threadPool();
}



static void threaInfoDetails() {
	
System.out.println("Current Thread Info "+ Thread.currentThread());
System.out.println(" Current Thread Alive or not "+ Thread.currentThread().isAlive());
System.out.println("Curren threa is Daemon or not" + Thread.currentThread().isDaemon());

	
	
}
	
	
}

