//example showing how to implement tcp/ip server

#include<stdio.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<stdlib.h>

main()
{
    int listfd,connfd,retval;
    //pid_t childpid;
    socklen_t clilen;
    struct sockaddr_in cliaddr, servaddr;

    listfd = socket(AF_INET, SOCK_STREAM, 0); //tcp........conection.../fifo
    if(listfd<0)
    {
        perror("sock:");
        exit(1);
    }

    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");//htonl(INADDR_ANY);
    servaddr.sin_port = htons(8000); //TCP protocol HTTP----port

    retval=bind(listfd,(struct sockaddr *) &servaddr,sizeof(servaddr));

    if(retval<0)
    {
        perror("bind:");
        exit(2);
    }

    listen(listfd,5);

    while(1)
    {
        char buf[200];
        int n;
        clilen = sizeof(cliaddr);
        connfd = accept(listfd,(struct sockaddr *) &cliaddr, &clilen);
        printf("client connected \n");
        n = read(connfd,buf,200);
        buf[n] = '\0';
        printf("data rec'd from client = %s\n",buf);
        write(connfd,"good bye",8);
    }
}