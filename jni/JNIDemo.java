public class JNIDemo {  
    public native void sayHello();  
    public static void main(String[] args){  
        System.loadLibrary("Demo");  
        JNIDemo jniDemo = new JNIDemo();  
        jniDemo.sayHello();  
     }  
 } 
