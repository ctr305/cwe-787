 //Demonstration of CWE-787: Out-of-bounds Write
 #include <stdio.h>

 int main() {
     int cookie;
     char buf[4];

     printf("buf: %08x cookie: %08x\n", &buf, &cookie);

     gets(buf);

     if (cookie == 0x41424344)
         printf("Ganaste!\n");
     else
         printf("cookie: %08x\n", cookie);
 }
