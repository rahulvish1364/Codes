/*Multi Threading is a feature of executing multiple tasks at a time simultaneously.
 * A thread is the path of execution. A process contains one or more threads to execute.
 * Usually a process will have atleast one thread that is responsible for User interactions and outputs.
 * This thread is called as UI thread or Main thread and many successful apps are created using Single threads only.
 * Sometimes, U wish to perform 2 or more tasks asynchronously without waiting for one task to complete.
 * This is achieved in java using multithreading. 
 * OS should have the feature of Multithreading and the programming languages only provide the APIs to do the task.
 * The advantages of MultiThreading: Sharing the resources of the Process, 
 * Does not block the execution of the User interaction,   
 * parallel programming means psuedo-parallelism. At any given point, only one thread is executed. 
 * Threads in java are represented by a class called Thread. It implements an interface called Runnable.
 * ThreadPool represents a group of threads readily usable within the java application. JVM maintains a host of threads as a pool to maintain its execution. There are many simultaneous tasks that happen while the Application is executed in the JVM. Instead of creating new threads, JVM uses this ready to use pool of threads to assign a task and complete the operations parallelly. 
 * Programmers can use the thread pool to perform small but parallel tasks within an Application, as its fast and no need to create new threads. It saves a lot of time in using the threads of the pool rather than creating new threads as threads are Kernel objects. 
 * U can explore more on other synchronization classes provided by java.lang.
 * Concurrent Collection classes:ArrayBlockQueue, ConncurrentHashMap. Thread Deadlocks and Race conditions.
 * join in Threads, use and its limitations...
 * */
import java.util.Collection;
import java.util.List;
import java.util.concurrent.*;
class WorkerThread implements Runnable{
	private String name;
	public WorkerThread(String name) {
		this.name = name;
	}
	private void Func() {
		try {
			System.out.println("Thread by name " + this.name +" is executing");
			for(int i=0;i < 5;i++) {
				System.out.println("Thread Beep#" + i);
				Thread.sleep(1000);
			}
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	@Override
	public void run() {
		Func();
	}
}

class RunnableThread implements Runnable{
	
	static int threadCount = 0;
	//U can also create Thread classes by directly implementing Runnable interface....
	private void threadFunc() {
		System.out.println("The thread has begun its operation....");
		synchronized (this) {
		try {
			for(int i =0; i < 15;i++) {
				threadCount++;
				System.out.println("Thread beep#" + i);
				Thread.sleep(1000);
			}
			System.out.println("Thread has completed its operation....");
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		}
		System.out.println("Thread Count:" + threadCount);
	}
	@Override
	public void run() {
		try {
			System.out.println("Thread function thro Runnable interface");
			threadFunc();
		}catch(Exception e){
			e.printStackTrace();
		}
	}
	
}
class MyThread extends Thread{
	//The functionality of the thread.....
	private void threadFunc() {
		System.out.println("The thread has begun its operation....");
		try {
			for(int i =0; i < 15;i++) {
				System.out.println("Thread beep#" + i);
				Thread.sleep(1000);
			}
			System.out.println("Thread has completed its operation....");
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
	
	//Every Thread derived class must override the Run member function which is invoked when the thread object calls start method....
	@Override
	public void run() {
		threadFunc();
	}
}
public class threadingDemo {

	public static void main(String[] args) {
		//threadInfoDetails();
		threadClassDemo();
		//runnableClassDemo();
		//threadPoolExample();
	}
	private static void threadPoolExample() {
		System.out.println("Main Thread has started.....");
		ExecutorService executer = Executors.newFixedThreadPool(5) ;
		for(int i =0;i < 10;i++) {
			Runnable worker = new WorkerThread("ThreadName:" + i);
			executer.execute(worker);
		}
		executer.shutdown();
		System.out.println("Main Thread has Terminated.....");
		
	}
	//U will create a class that implements Runnable interface and pass it as an argument to the thread objec
	private static void runnableClassDemo() {
		System.out.println("THe Main thread is running");
		RunnableThread th = new RunnableThread();
		Thread t1 = new Thread(th);
		Thread t2 = new Thread(th);
		t1.start();
		t2.start();
		//Starting 2 threads doing the same job to run parallelly...		
		
	}

	private static void threadClassDemo() {
		System.out.println("Main thread is now running");
		MyThread th = new MyThread();
		//th.setDaemon(true);
		th.start();
		System.out.println("Main Thread will continue to do its task....");
		try {
			for(int i =0; i <10;i++) {
				System.out.println("Main thread is doing some task...." + i);
				Thread.sleep(1000);//makes the executing thread pause for the speculated interval of time....
			}
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		//Daemon Threads are threads that don't make the Parent thread wait for while its executing. Normal threads make the Calling thread pause till it completes the task. When the parent thread create these Daemon or Background threads, the Main thread will not wait  for the child thread to complete. If the main thread completes its operation while the child thread is still running, the main will terminate and the App will close there by making the Daemon thread also terminate abruptly.
		System.out.println("Main thread has completed its task, waiting for childs to finish....");
	}

	private static void threadInfoDetails() {
		System.out.println("Main Thread created by JVM");
		System.out.println("The current thread info:" + Thread.currentThread());
		System.out.println("Is the Main Thread alive?: " + Thread.currentThread().isAlive() );
		
		System.out.println("Is this thread a Daemon thread? " + Thread.currentThread().isDaemon());
		
	}

}
