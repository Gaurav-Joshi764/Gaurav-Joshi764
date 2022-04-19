
#include<stdio.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
#include<netinet/in.h>

#define PORT 8080
#define MAXSZ 100

main()
{
   struct suckaddr_ll address;
   int opt =1;
   int addrlen = sizeof(address);
   char buffer[1024] ={0};
   char *hello = "Hello from server";
   //creating socket file descriptor
   if((server_fd = socket(AF_INET,SOCK_STREAM,0)) == 0)
   {
       perror("socket failed");
       exit(EXIT_FAILURE);
   }

   //forcefully attaching socket to the port 8080
   if(setsockopt(server_fd, SOL_SOCKET,SO_REUSEADDR | SP_REUSEPORT,&opt,sizeof(opt)))
   {
       //he setsockopt() function provides an application program with the means to control socketbegavior.
       //an application program can use setsockopt() to allocate buffer soace, control timeouts, or permit socket data broadcasts.
       //the <sys/socket.
       perror("setsockopt");
       exit(EXIT_FAILURE);
   }

   address.sin_family = AF_INET;
   address.sin_addr.s_addr = INADDR_ANT;
   address.sin_port = htons(PORT);

   //forcefully attaching socket to the port 8080
   if(bind(server_fd,(struct sockaddr *)&address, sizeof(address))<0)
   {
       perror("bind failed");
       exit(EXIT_FAILURE);
   }

}