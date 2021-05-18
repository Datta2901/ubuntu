import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;


class Result {

    /*
     * Complete the 'processLogs' function below.
     *
     * The function is expected to return a STRING_ARRAY.
     * The function accepts following parameters:
     *  1. STRING_ARRAY logs
     *  2. INTEGER maxSpan
     */
    public static List<String> processLogs(List<String> logs, int maxSpan) {
    // Write your code here
    HashMap<String,Integer> mm = new HashMap<String,Integer>();
     HashMap<String,Integer> nm = new HashMap<String,Integer>();
    int s=logs.size();
    for(int i=0;i<s;i++)
    {
       String w=logs.get(i);
       String[] sp=w.split(" ");
       String id=sp[0];
       if(mm.containsKey(id)==false)
       mm.put(id,Integer.parseInt(sp[1]));
       else
       {
           int num=mm.get(id);
           nm.put(id, Math.abs(Integer.parseInt(sp[1])-num));
       }
       
    }
    List<String> l = new ArrayList<String>();
    List<Long> li = new ArrayList<Long>();
    for(Map.Entry<String,Integer> entry : nm.entrySet())
    {
        if(entry.getValue()<=maxSpan)
        li.add(Long.parseLong(entry.getKey()));
    }
   Collections.sort(li);
   int v=li.size();
   for(int i=0;i<v;i++)
   {
       l.add(String.valueOf(li.get(i)));
   }
    
    return l;

    }

}
public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int logsCount = Integer.parseInt(bufferedReader.readLine().trim());

        List<String> logs = IntStream.range(0, logsCount).mapToObj(i -> {
            try {
                return bufferedReader.readLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        })
            .collect(toList());

        int maxSpan = Integer.parseInt(bufferedReader.readLine().trim());

        List<String> result = Result.processLogs(logs, maxSpan);

        bufferedWriter.write(
            result.stream()
                .collect(joining("\n"))
            + "\n"
        );

        bufferedReader.close();
        bufferedWriter.close();
    }
}