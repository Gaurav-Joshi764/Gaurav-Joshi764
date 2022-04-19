#include<stdio.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<stdlib.h>


main()
{
    int sockfd,retval,n;
    char buf[2000];
    socklen_t clilen;
    struct sockaddr_in cliaddr, servaddr;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0); //tcp........conection.../fifo
    if(sockfd<0)
    {
        perror("sock:");
        exit(1);
    }

    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(8000); //TCP protocol HTTP----port

    retval=bind(sockfd,(struct sockaddr *) &servaddr,sizeof(servaddr));

    if(retval<0)
    {
        perror("bind:");
        exit(2);
    }
    printf("socket bond to port 8000\n");

    clilen = sizeof(struct sockaddr_in);
    while(1)
    {
       printf("before recv from\n");
       n = recvfrom(sockfd, buf,10000,0,(struct sockaddr *)&cliaddr,&clilen);
       printf("rec'd %d bytes\n",n);
       buf[n] = '\0';
       printf(" msg from client = %s\n",buf);
    }
}