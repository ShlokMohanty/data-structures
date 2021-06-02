import java.util.scanner;
class problem_717
{
  public boolean isoneBitCharacter(int[] bits)
  {
    scanner sc = new scanner(System.in);
    int n = sc.nextInt();
    int arr[] = new int[30];
    for(int i=0;i<arr.length ;i++)
    {
      arr[i] = sc.nextInt();
      if(arr[i-1]==1 && arr[i]==1 || arr[i-1]==1  && arr[i]==0)
      {
        return false;
      }
      else
      {
        return true;
      }
    }
  }
}
      
