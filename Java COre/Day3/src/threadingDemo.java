/* Multi threading is a feature of executing multiple task simultaneously 
 A thread is the path of execution. A process contains one or more threads t execute.
 Usially a process wil have ht eatleast one thread that is resposible for user interaction and output
 This thread is called a UI thread or the main thread and many successfull apps created using the single thread on 
 Sometimes, u wish to perform 2 or more task asynchronously without waiting for onr task t complete 
 this achieved through the multithreading
 Os shhould have the feature of multithreading and the programming language only provides the APIs to do the the task 
 The advantage of Multi-threading: Sharing the resource of the process
 Does not block the execution of the user interaction
 parallel programming means yhr psuedo-parallism. At any given point, only one thread is executed 
 Threads is java are represented by the a class called thread It implements the interface called runnable 
 Threadpool represents a grup of threads readilt usabke with java application. JVM maintanosn a host off threads as apool to maintain its execution. there are many simultaneous 
 tasks that happens while the application is excecuted in the JVM. 
 
 */
import java.util.concurrent.*;





class WorkerThread implements Runnable{

	private String name;
	public WorkerThread(String name) {
		this.name = name;
	}
	
	private void func() {
		System.out.println("Thread by name "+this.name+ "is executing");
		for (int i = 0; i < 5; i++) {
			System.out.println("Thread beeb#"+i);
		}
	}
	
	
	@Override
	public void run() {
		func();
	}
	
	
}

class RunnableThread implements Runnable{
	static int thradCount = 0;
	public void threadfunc() {
		System.out.println("Threa has began its operation");
		try {
			for (int i = 0; i < 15; i++) {
				thradCount++;
				
				System.out.println("Thread beeps"+ i);
				Thread.sleep(1000);
				
			}
			
			System.out.println("Thread has completed its operation");
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
	}

	@Override
	public void run() {
		threadfunc();
	}
}



class MyThread extends Thread{
	public void threadfunc() {
		System.out.println("Threa has began its operation");
		try {
			for (int i = 0; i < 15; i++) {
				System.out.println("Thread beeps"+ i);
				Thread.sleep(1000);
				
			}
			
			System.out.println("Thread has completed its operation");
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
	}

	@Override
	public void run() {
		threadfunc();
	}
}

public class threadingDemo {
public static void main(String[] args) {
	//threadInfoDetails();
	//threadClass();
	//runnableDemo();
	threadPool();
}

private static void threadPool() {
	ExecutorService executer = new Executor.newFixedThreadPool(5);
	for (int i = 0; i < 10; i++) {
		Runnable worker = new WorkerThread("ThreadName"+i);
		executer.execute(worker);
		
		
	}
	
}

// synchroniz (this) // internally uses the concept called mutex :-> mutually and exclusively 


private static void threadClass() {
  System.out.println("Main thread is now runnig ");
  MyThread th = new MyThread();
  th.setDaemon(true);
  th.start();
  System.out.println(" Main thread will continue to its task");
  for (int i = 0; i < 10; i++) {
	System.out.println("Main thread is doing some task");
	try {
		Thread.sleep(1000);
	} catch (InterruptedException e) {
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
	
}
}


private static void runnableDemo() {
	
	System.out.println("The main thread is running ");
	RunnableThread th = new RunnableThread();
	Thread t1 = new Thread(th);
	Thread t2 = new Thread(th);
}


private static void threadInfoDetails() {
	// TODO Auto-generated method stub
 System.out.println(" Main Thread create by JVM");
 System.out.println("The current thread info "+ Thread.currentThread());
 System.out.println("Is main thread alive "+ Thread.currentThread().isAlive());
 
 /*// Daemon threads are thr threads that dont make the parent thread to wait while its executing. 
 Normal threads make the calling thread pause till it completes the task. When the parent thread create these Daemon or the Background 
 threads, the main threads will not wait for the child thread to complete. If the main thread completes the its 
 operation while the child thread is stil runing. the main will terminate and the app close thereby also terminating the daemon thread*/
 
 
 System.out.println("Is this is deamon thread "+ Thread.currentThread().isDaemon());
 
}
}
