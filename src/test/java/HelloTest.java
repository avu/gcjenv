import org.junit.Test;

public class HelloTest {
  @Test
  public void testHello() {
    HelloWorld h = new HelloWorld();
    h.print();
    System.out.println(System.getenv("VAR123"));
    h.print();
    System.out.println(System.getenv("VAR123"));
  }
}
