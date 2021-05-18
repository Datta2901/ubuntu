#include &lt;stdio.h&gt;
#include &lt;unistd.h&gt;
int main()
{
printf(&quot;Transfer to execlp function \n&quot;);
execlp("head", "head","-2","f1","NULL); // Assume f1 is any text file

printf(&quot;This line will not execute \n”);
return 0;
}